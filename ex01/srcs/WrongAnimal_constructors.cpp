/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal_constructors.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:46:00 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 16:35:24 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headers/WrongAnimal.hpp"

    WrongAnimal::WrongAnimal()
    {
        std::cout << GREEN << "WrongAnimal default constructor called" << RESET << std::endl;
    }

    WrongAnimal::~WrongAnimal()
    {
        std::cout << RED << "WrongAnimal default destructor called" << RESET << std::endl;
    };

    WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) 
    {
        std::cout << MAGENTA << "WrongAnimal copy constructor called" << RESET << std::endl;
    };

    WrongAnimal& WrongAnimal::operator =(const WrongAnimal& other)
    {
        std::cout << BLUE << "WrongAnimal assignation operator called" << RESET << std::endl;
        if (this != &other) // Check for auto assignation;
        {
            this->type = other.type;
        } 
        return(*this);
    }