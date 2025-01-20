/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal_methods.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:33:12 by anastruc          #+#    #+#             */
/*   Updated: 2025/01/20 10:40:03 by anastruc         ###   ########.fr       */
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