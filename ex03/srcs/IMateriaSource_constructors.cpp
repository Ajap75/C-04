/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource_constructors.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:56:58 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/11 14:53:50 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/IMateriaSource.hpp"


    IMateriaSource::~IMateriaSource() 
    {
        std::cout << RED << "IMateriaSource Default destructor called" << RESET << std::endl; 
    }
