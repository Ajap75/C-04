/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:57:05 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 10:43:23 by antoinejour      ###   ########.fr       */
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
    virtual void makeSound() const = 0;
    std::string  getType() const;
};

#endif


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

