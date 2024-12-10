/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_constructors.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:07:51 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 16:32:14 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"

    Animal::Animal()
    {
        std::cout << GREEN << "Animal default constructor called" << RESET << std::endl;
    }

    Animal::~Animal()
    {
        std::cout << RED <<"Animal default destructor called" << RESET << std::endl;
    };

    Animal::Animal(const Animal& other) : type(other.type) 
    {
        std::cout << MAGENTA << "Animal copy constructor called" << RESET << std::endl;
    };

    Animal& Animal::operator =(const Animal& other)
    {
        std::cout << BLUE << "Animal assignation operator called" << RESET << std::endl;
        if (this != &other) // Check for auto assignation;
        {
            this->type = other.type;
        } 
        return(*this);
    }
