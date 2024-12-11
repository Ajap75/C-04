/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure_methods.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:28:13 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/11 13:44:12 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cure.hpp"
#include "../headers/ICharacter.hpp"

void Cure::use (ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


/*The `clone` function returns a pointer to a new instance of the object it is called on.
The derived class provides its own implementation of the `clone` function, typically using its copy constructor to duplicate the object. */

Cure* Cure::clone () const
{
    return (new Cure(*this));
}


