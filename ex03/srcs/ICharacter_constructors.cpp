/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter_constructors.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:35:27 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 14:00:16 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headers/ICharacter.hpp"

    ICharacter::ICharacter()
    {
        std::cout << GREEN << "ICharacter Default constructor called" << RESET << std::endl; 
    }

    ICharacter::~ICharacter() 
    {
        std::cout << RED << "ICharacter Default destructor called" << RESET << std::endl; 
    }
    ICharacter::ICharacter(std::string& type) : type(type)
    {
        std::cout << GREEN << "ICharacter constructor with param called" << RESET << std::endl;
    }
    ICharacter::ICharacter(const ICharacter& other) : type(other.type)
    {
        std::cout << MAGENTA << "ICharacter copy constructor  called" << RESET << std::endl;
    }
    ICharacter&ICharacter:: operator =(const ICharacter& other)
    {
        std::cout << BLUE << "ICharacter assignation operator called" << RESET << std::endl;
        if (this != &other)
        {
            type = other.type;
        }
        return(*this);
    }