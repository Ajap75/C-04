/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:15:40 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 17:02:10 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ICharacter.hpp"

#include "string"
#include "colors.hpp"
#include "iostream"

#ifndef Character_HPP
#define Character_HPP

class Character
{
    protected :

    std::string name;
    AMateria* inventory[4];

    public : 

    /*constructor*/
    Character();
    Character(std::string name);
    Character(const Character& other);
    Character& operator = (const Character& other);
    virtual ~Character();
    
    /*member function PURE VIRTUAL as Icharacter is an interface*/
    std::string const & getName() const; // override
    void equip(AMateria* m); // override
    void unequip(int idx); // override
    void use(int idx, ICharacter& target); // override

};

#endif

// The ICharacter class serves as an interface, defining the expected behavior for any class implementing it.
// It contains pure virtual functions, ensuring that derived classes provide concrete implementations.

// The Character class implements the ICharacter interface.
// This allows Character to provide specific functionality for the methods defined in ICharacter, 
// such as managing an inventory of Materias.

// By using an interface like ICharacter, the program gains flexibility.
// It can work with any object that implements the ICharacter interface, 
// not just Character. For example, you can later introduce another class, 
// like NPCCharacter, that adheres to the same interface without modifying the existing codebase.

