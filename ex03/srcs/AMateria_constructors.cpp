/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria_constructors.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:11:56 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 13:58:32 by antoinejour      ###   ########.fr       */
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
    AMateria::AMateria(std::string& type) : type(type)
    {
        std::cout << BLUE << "AMateria constructor with param called" << RESET << std::endl;
    }
    AMateria::AMateria(const AMateria& other) : type(other.type)
    {
        std::cout << MAGENTA << "AMateria copy constructor called" << RESET << std::endl;
    }
    AMateria&AMateria:: operator =(const AMateria& other)
    {
        if (this != &other)
        {
            type = other.type;
        }
        return(*this);
    }
    
    // /*member functions*/
    // std::string const& getType() const; // return the materia type 
    // virtual AMateria* clont () const = 0;
    // virtual void use (ICharacter& target); 
