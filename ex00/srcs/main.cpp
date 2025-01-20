/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:29:55 by anastruc          #+#    #+#             */
/*   Updated: 2025/01/20 12:06:45 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"
#include "../headers/WrongAnimal.hpp"
#include "../headers/WrongCat.hpp"
#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"

int main()
{
    {
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); // will output the cat sound!
        j->makeSound();
        meta->makeSound();
        std::cout << std::endl;
        Dog originalDog;
        Dog copyDog = originalDog; // Copy constructor
        copyDog = originalDog; // Assignement operator called 
        delete meta;
        delete j;
        delete i;
        std::cout << std::endl;

    }
    {
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const WrongAnimal *i = new WrongCat();
        const WrongAnimal z = *i;
        std::cout << z.getType() << " " << std::endl;
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); // will output the cat sound!
        j->makeSound();
        meta->makeSound();
        z.makeSound();
        Dog originalDog;
        Dog copyDog = originalDog; // Copy constructor
        copyDog = originalDog;
        delete meta;
        delete j;
        delete i;
        return 0;
    }
}
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