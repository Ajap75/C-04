/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:57:05 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 18:42:15 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include "string"
#include "iostream"

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal 
{
    protected :

    std::string type;

    public :
    
    /* Constructor */ 
    Animal();
    virtual ~Animal();
    Animal(const Animal& other);
    Animal& operator =(const Animal& other);

    /*Methods*/
    virtual void makeSound() const;
    std::string  getType() const;
};

#endif


/*
The `virtual` keyword for a destructor is essential in ensuring proper cleanup of 
objects in polymorphic class hierarchies. Here's why:

1. **What Happens Without a Virtual Destructor?**
   - If a base class destructor is not marked as `virtual`, deleting a derived class object 
     through a base class pointer will result in undefined behavior.
   - Only the base class destructor is called, leaving the derived class's resources 
     (e.g., dynamically allocated memory) unfreed, causing memory leaks.

2. **How Does a Virtual Destructor Work?**
   - When a destructor is declared `virtual` in the base class, it ensures that the correct 
     destructor for the derived class is called, followed by the base class destructor. 
   - This process ensures that all resources of the derived and base classes are properly cleaned up.

3. **Example Without a Virtual Destructor:**
   ```cpp
   class Base {
   public:
       ~Base() {
           std::cout << "Base destructor called" << std::endl;
       }
   };

   class Derived : public Base {
   public:
       ~Derived() {
           std::cout << "Derived destructor called" << std::endl;
       }
   };

   int main() {
       Base* obj = new Derived();
       delete obj; // Only calls Base destructor. Derived destructor is skipped.
       return 0;
   } */

