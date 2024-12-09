/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_constructors.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:39:37 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 16:34:02 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << GREEN << "Dog default constructor called" << RESET <<  std::endl;
    type = "Dog";
    // Constructor body (if needed)
};

Dog::~Dog() // Dog::~Dog() should not have a base class destructor call in the initializer list. Just define it normally; the compiler will automatically call Animal's destructor.
{
    std::cout << RED << "Dog default destructor called" << RESET <<  std::endl;
}; 

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << MAGENTA << "Dog copy constructor called" << RESET <<  std::endl;
    // If Dog has its own data members, initialize them here
};

Dog& Dog::operator= (const Dog& other)
{
    std::cout << BLUE << "Dog assignation operator called" << RESET <<  std::endl;
    if (this != &other)
    {
        Animal::operator = (other);
        // If Dog has its own data members, copy them here
    }
    return (*this);
}; 

