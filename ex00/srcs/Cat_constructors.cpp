/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_constructors.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:51:15 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/20 10:47:28 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << GREEN << "Cat default constructor called" << RESET << std::endl;
    type = "Cat";
};

Cat::~Cat() // Cat::~Cat() should not have a base class destructor call in the initializer list. Just define it normally; the compiler will automatically call Animal's destructor.
{
    std::cout << RED << "Cat default destructor called" << RESET << std::endl;
};

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << MAGENTA << "Cat copy constructor called" << RESET << std::endl;
    // If Cat has its own data members, initialize them her
};

Cat &Cat::operator=(const Cat &other)
{
    std::cout << BLUE << "Cat assignation operator called" << RESET << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        // If Cat has its own data members, copy them here
    }
    return (*this);
}
