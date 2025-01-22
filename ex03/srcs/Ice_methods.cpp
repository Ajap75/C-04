/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice_methods.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:27:53 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/22 08:26:42 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Ice.hpp"
#include "../headers/ICharacter.hpp"

void Ice::use (ICharacter& target)
{
    std::cout << "* shoots an ice bolt at" << target.getName() << " *" << std::endl;
}


/*The `clone` function returns a pointer to a new instance of the object it is called on.
The derived class provides its own implementation of the `clone` function, typically using its copy constructor to duplicate the object. */

Ice* Ice::clone() const 
{
    return (new Ice(*this));   
}