/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:57:53 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 18:05:15 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"


#ifndef CAT_HPP
#define CAT_HPP

class Cat : virtual public Animal
{
    private :

    class Brain *brain;
   
    public :

    Cat();
    ~Cat();
    Cat(const Cat& other);
    Cat& operator = (const Cat& other);

    /*method*/
    void makeSound() const; 
};

#endif

/*
The `virtual` keyword in inheritance is crucial for enabling polymorphism in C++.
Here's why and how it works:

1. **What is Polymorphism?**
   Polymorphism allows us to use a base class pointer or reference to call the appropriate 
   methods of derived classes at runtime. This behavior is achieved through **dynamic dispatch**.

2. **Role of `virtual` in Polymorphism:**
   - When a base class declares a member function as `virtual`, it creates a "contract" for derived 
     classes to optionally override the behavior of that function.
   - The decision of which function to execute (base or derived) is made **at runtime**, 
     based on the actual type of the object pointed to, not the type of the pointer/reference.

3. **Why Use `virtual`?**
   Without `virtual`, the compiler would determine which function to call **at compile time**, 
   based on the type of the pointer or reference. This would result in **static dispatch**, 
   meaning the base class method is always called, even if the object is of the derived type.
*/