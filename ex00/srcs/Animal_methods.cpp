/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_methods.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:21:59 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/20 10:42:07 by anastruc         ###   ########.fr       */
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