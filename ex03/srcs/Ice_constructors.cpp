/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice_constructors.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:24:02 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 13:31:27 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Ice.hpp"

    Ice::Ice() : AMateria()
    {
        std::cout << GREEN << "Ice Default constructor called" << RESET << std::endl; 
    }

    Ice::~Ice() 
    {
        std::cout << GREEN << "Ice Default destructor called" << RESET << std::endl; 
    }
    Ice::Ice(std::string& type) : AMateria(type)
    {
        this->type = type; // override 
        std::cout << GREEN << "Ice constructor with param called" << RESET << std::endl;
    }
    Ice::Ice(const Ice& other)
    {
        type = other.type;
    }
    Ice&Ice:: operator =(const Ice& other)
    {
        if (this != &other)
        {
            type = other.type;
        }
        return(*this);
    }
    