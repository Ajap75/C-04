/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:07:06 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/20 18:54:47 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"
#include "../headers/WrongAnimal.hpp"
#include "../headers/WrongCat.hpp"
#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"


int main()
{
// const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
class Dog l = Dog();
class Dog k = Dog(l);
std::cout << std::endl;
k.makeSound(); // deepcopy 
std::cout << "---------" << std::endl;
std::cout << "---------" << std::endl;

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
// meta->makeSound();
std::cout << std::endl;
Dog originalDog;
Dog copyDog = originalDog; // Copy constructor
copyDog = originalDog;
// delete meta;
delete j;
delete i;

return 0;
}

/*
An abstract class in C++ is a class that cannot be instantiated directly. It serves as a blueprint 
or interface for derived classes. To make a class abstract, you declare at least one of its member 
functions as pure virtual by appending "= 0" to its declaration. For example:

    virtual void doSomething() const = 0;

This ensures that any class inheriting from this abstract base class must implement all pure 
virtual functions to be instantiable. Abstract classes promote a clear contract and polymorphic 
behavior, enabling you to design flexible and maintainable hierarchies where derived classes 
provide specific implementations while clients operate through base class pointers or references.
*/
