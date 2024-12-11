/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice_constructors.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:24:02 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/11 14:27:19 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Ice.hpp"

    Ice::Ice() : AMateria()
    {
        std::cout << GREEN << "Ice Default constructor called" << RESET << std::endl; 
    }

    Ice::~Ice() 
    {
        std::cout << RED << "Ice Default destructor called" << RESET << std::endl; 
    }
    Ice::Ice(std::string& type) : AMateria(type)
    {
        this->type = type; // override 
        std::cout << GREEN << "Ice constructor with param called" << RESET << std::endl;
    }
    Ice::Ice(const Ice& other) : AMateria(other)
    {
        type = other.type;
        std::cout << MAGENTA << "ICE COPY CONSTRUCTOR with param called" << RESET << std::endl;

    }
    Ice&Ice:: operator =(const Ice& other)
    {
        std::cout << BLUE << "ICE ASSIGNATION OPERATORwith param called" << RESET << std::endl;

        if (this != &other)
        {
            AMateria::operator=(other);
        }
        return(*this);
    }
    