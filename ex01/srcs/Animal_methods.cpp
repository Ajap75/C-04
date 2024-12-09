/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_methods.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:21:59 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 15:43:01 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"

void Animal::makeSound() const 
{
    std::cout << "Generic Animal sound" << std::endl;
};

std::string Animal::getType() const 
{
    return (this->type);
};