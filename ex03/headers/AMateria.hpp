/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:11:59 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 13:01:17 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "colors.hpp"
#include "iostream"
#include "ICharacter.hpp"


#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class AMateria
{
    protected :

    std::string type;
    

    public : 

    /*constructor*/
    AMateria();
    ~AMateria();
    AMateria(std::string& type);
    AMateria(const AMateria& other);
    AMateria& operator =(const AMateria& other);
    
    /*member functions*/
    std::string const& getType() const; // return the materia type 

    /*PURE VIRTUAL FUNCTION (= 0): No implementation is needed in the base class.
    Any derived class must provide its own implementation of clone(). cf comment below*/ 
    virtual AMateria* clone () const = 0;

    /*VIRTUAL FUNCTION (WITHOUT = 0) It is optional. If you want the base class AMateria to have a generic behavior
     (for example, handling "undefined" actions), you can provide an implementation in the base class.
    If you do not provide an implementation, all derived classes must override it.*/
    virtual void use (ICharacter& target); 
};
#endif

/*
The `clone` function is a concept commonly used in object-oriented programming to implement the Prototype Pattern. 
It allows creating a copy of an object dynamically at runtime, even when the exact type of the object is not known.

### Key Features:
1. **Polymorphic Behavior**:
   - The `clone` function is typically declared as a `virtual` method in a base class. 
   - This ensures that when called on a base class pointer or reference, the derived class's implementation of `clone` is executed.

2. **Purpose**:
   - Unlike a copy constructor, which creates a copy of an object of the same type, the `clone` function is used to create a copy polymorphically.
   - This is particularly useful when you work with a collection of base class pointers, and you need to duplicate the objects they point to.

3. **How It Works**:
   - The `clone` function returns a pointer to a new instance of the object it is called on.
   - The derived class provides its own implementation of the `clone` function, typically using its copy constructor to duplicate the object.

4. **Example**:
   ```cpp
   class Base {
   public:
       virtual ~Base() {}
       virtual Base* clone() const = 0; // Pure virtual function
   };

   class Derived : public Base {
   public:
       Derived* clone() const override {
           return new Derived(*this); // Use the copy constructor to clone
       }
   };

   void duplicateAndUse(const Base* obj) {
       Base* copy = obj->clone(); // Clone the object dynamically
       // Use the copied object...
       delete copy; // Clean up after use
   }
*/