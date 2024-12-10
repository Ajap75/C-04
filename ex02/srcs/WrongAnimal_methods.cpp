/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal_methods.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:21:59 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 16:04:20 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/WrongAnimal.hpp"

void WrongAnimal::makeSound() const 
{
    std::cout << "Generic WrongAnimal sound" << std::endl;
};

std::string WrongAnimal::getType() const 
{
    return (this->type);
};