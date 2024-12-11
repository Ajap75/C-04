/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure_constructors.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:24:05 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/11 14:45:02 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cure.hpp"

    Cure::Cure() : AMateria()
    {
        std::cout << GREEN << "Cure Default constructor called" << RESET << std::endl; 
    }

    Cure::~Cure() 
    {
        std::cout << RED << "Cure Default destructor called" << RESET << std::endl; 
    }
    Cure::Cure(std::string& type) : AMateria(type)
    {
        std::cout << GREEN << "Cure constructor with param called" << RESET << std::endl;
    }
    Cure::Cure(const Cure& other): AMateria(other)
    {
        type = other.type;
        std::cout << MAGENTA << "Cure copy constructor called" << RESET << std::endl;
    }
    Cure&Cure:: operator =(const Cure& other)
    {
        std::cout << BLUE << "Cure copy with assignation operator called" << RESET << std::endl;
        if (this != &other)
        {
            AMateria::operator=(other);
        }
        return(*this);
    }
    