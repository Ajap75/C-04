/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat_constructors.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:44:14 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 16:36:12 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << GREEN << "WrongCat default constructor called" << RESET << std::endl;
};

WrongCat::~WrongCat() // Cat::~Cat() should not have a base class destructor call in the initializer list. Just define it normally; the compiler will automatically call Animal's destructor.
{
    std::cout << RED << "WrongCat default destructor called" << RESET << std::endl;
}; 

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << MAGENTA << "WrongCat copy constructor called" << RESET << std::endl;
    // If Cat has its own data members, initialize them her
};

WrongCat& WrongCat::operator =(const WrongCat& other)
{
    std::cout << BLUE << "WrongCat assignation operator called" << RESET << std::endl;
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        // If Cat has its own data members, copy them here
    }
    return (*this);
}
