/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat_constructors.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:32:30 by anastruc          #+#    #+#             */
/*   Updated: 2025/01/20 11:27:24 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << GREEN << "WrongCat default constructor called" << RESET << std::endl;
    type = "WrongCat";

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