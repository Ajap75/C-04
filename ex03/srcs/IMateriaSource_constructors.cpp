/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource_constructors.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:56:58 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 17:18:14 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/IMateriaSource.hpp"

    IMateriaSource::IMateriaSource()
    {
        std::cout << GREEN << "IMateriaSource Default constructor called" << RESET << std::endl; 
    }

    IMateriaSource::~IMateriaSource() 
    {
        std::cout << RED << "IMateriaSource Default destructor called" << RESET << std::endl; 
    }
    IMateriaSource::IMateriaSource(std::string& type)
    {
        std::cout << GREEN << "IMateriaSource constructor with param called" << RESET << std::endl;
    }
    IMateriaSource::IMateriaSource(const IMateriaSource& other)
    {
        std::cout << MAGENTA << "IMateriaSource copy constructor called" << RESET << std::endl;
    }
    IMateriaSource&IMateriaSource:: operator =(const IMateriaSource& other)
    {
        std::cout << BLUE << "IMateriaSource copy constructor called" << RESET << std::endl;
    }