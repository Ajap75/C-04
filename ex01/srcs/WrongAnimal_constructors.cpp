/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal_constructors.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:34:01 by anastruc          #+#    #+#             */
/*   Updated: 2025/01/20 10:40:06 by anastruc         ###   ########.fr       */
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