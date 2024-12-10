/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice_methods.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:27:53 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 13:29:02 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Ice.hpp"

void Ice::use (ICharacter& target)
{
    std::cout << "* shoots an ice bolt at" << getType() << " *" << std::endl;
};


/*The `clone` function returns a pointer to a new instance of the object it is called on.
The derived class provides its own implementation of the `clone` function, typically using its copy constructor to duplicate the object. */

Ice* Ice::clone() const 
{
    return (new Ice(*this));   
}