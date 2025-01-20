/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:44:19 by anastruc          #+#    #+#             */
/*   Updated: 2025/01/20 10:45:10 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : virtual public Animal
{
public:
    Dog();
    ~Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
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