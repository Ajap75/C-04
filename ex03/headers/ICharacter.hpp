/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:34:38 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/20 19:01:25 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "colors.hpp"
#include "iostream"
#include "AMateria.hpp"


#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

class ICharacter
{
    protected :    

    public : 

    /*destructor*/
    virtual ~ICharacter();
    
    /*member function PURE VIRTUAL as Icharacter is an interface*/
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;

};
#endif

/*ICharacter is an interface (abstract class) with pure virtual functions, designed to define the behavior of character-like objects.
Character is a concrete class that implements ICharacter and provides actual functionality for managing an inventory of AMateria objects.
The separation of interface and implementation allows for flexibility and adherence to the principle of coding to an interface, not an implementation. This enables easier extensibility and maintainability.*/