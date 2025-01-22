/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice_constructors.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:24:02 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/22 11:29:18 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Ice.hpp"
static std::string iceType = "ice";

    Ice::Ice() : AMateria(iceType)
    {
        std::cout << GREEN << "Ice Default constructor called" << RESET << std::endl; 
    }

    Ice::~Ice() 
    {
        std::cout << RED << "Ice Default destructor called" << RESET << std::endl; 
    }
    Ice::Ice(std::string& type) : AMateria(type)
    {
        std::cout << GREEN << "Ice constructor with param called" << RESET << std::endl;
    }
    Ice::Ice(const Ice& other) : AMateria(other)
    {
        type = other.type;
        std::cout << MAGENTA << "ICE COPY CONSTRUCTOR with param called" << RESET << std::endl;

    }
    Ice&Ice:: operator =(const Ice& other)
    {
        std::cout << BLUE << "ICE ASSIGNATION OPERATORcalled" << RESET << std::endl;

        if (this != &other)
        {
            AMateria::operator=(other);
        }
        return(*this);
    }
    