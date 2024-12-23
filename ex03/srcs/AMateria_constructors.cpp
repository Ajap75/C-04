/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria_constructors.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:11:56 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/11 15:01:01 by antoinejour      ###   ########.fr       */
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