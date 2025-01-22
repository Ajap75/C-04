/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure_constructors.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:24:05 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/22 09:41:29 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cure.hpp"
static std::string cureType = "cure";

    Cure::Cure() : AMateria(cureType)
    {
        std::cout << GREEN << "Cure Default constructor called" << RESET << std::endl; 
        type = "cure";
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
        std::cout << MAGENTA << "Cure copy constructor called" << RESET << std::endl;
    }
    Cure&Cure:: operator =(const Cure& other)
    {
        std::cout << BLUE << "Cure assignement operator called" << RESET << std::endl;
        if (this != &other)
        {
            AMateria::operator=(other);
        }
        return(*this);
    }
    