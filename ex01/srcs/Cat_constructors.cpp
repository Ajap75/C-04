/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_constructors.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:51:15 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 18:05:49 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"
#include "../headers/Brain.hpp"


Cat::Cat() : Animal()
{
    std::cout << GREEN << "Cat default constructor called" << RESET << std::endl;
    type = "Cat";
    brain = new Brain();
};

Cat::~Cat() // Cat::~Cat() should not have a base class destructor call in the initializer list. Just define it normally; the compiler will automatically call Animal's destructor.
{
    delete brain;
    std::cout << RED << "Cat default destructor called" << RESET << std::endl;
}; 

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << MAGENTA <<  "Cat copy constructor called" << RESET << std::endl;
    // If Cat has its own data members, initialize them her
};

Cat& Cat::operator =(const Cat& other)
{
    std::cout << BLUE << "Cat assignation operator called" << RESET << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        // If Cat has its own data members, copy them here
    }
    return (*this);
}



