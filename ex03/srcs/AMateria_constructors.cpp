/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria_constructors.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:11:56 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/22 09:39:34 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AMateria.hpp"

AMateria::AMateria()
{
    std::cout << GREEN << "AMateria Default constructor called" << RESET << std::endl;
}

AMateria::~AMateria()
{
    std::cout << RED << "AMateria Default destructor called" << RESET << std::endl;
}
AMateria::AMateria(std::string &type) : type(type)
{
    std::cout << BLUE << "AMateria constructor with param called" << RESET << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << BLUE << "AMateria assignement operator called" << RESET << std::endl;
    if (&other != this)
    {
        // No need to copy `type` here; it is already set in the constructor
        // and is fixed for the lifetime of the object.

        // Copy other attributes or dynamic resources if necessary
        // For example: copying usage counters, metadata, etc.
    }
    return (*this);
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << BLUE << "AMateria copy constructor called" << RESET << std::endl;
    this->type = other.type;
}