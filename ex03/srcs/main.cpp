/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:30:21 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/20 14:35:00 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "../headers/colors.hpp"
#include "iostream"
#include "../headers/ICharacter.hpp"
#include "../headers/Character.hpp"
#include "../headers/IMateriaSource.hpp"
#include "../headers/MateriaSource.hpp"
#include "../headers/Cure.hpp"
#include "../headers/Ice.hpp"


int main()
{
IMateriaSource* src = new MateriaSource();
std::cout << "-------\n" << std::endl;
src->learnMateria(new Ice());
std::cout << "-------\n" << std::endl;
src->learnMateria(new Cure());
std::cout << "-------\n" << std::endl;
ICharacter* me = new Character("me");
delete me;
// AMateria* tmp;
// tmp = src->createMateria("ice");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// ICharacter* bob = new Character("bob");
// me->use(0, *bob);
// me->use(1, *bob);
// delete bob;
// delete me;
// delete src;
return 0;
}


/*
High-Level Design

    AMateria (Abstract Base Class):
        Defines the common interface for all Materias.
        Includes virtual functions clone() and use().

    Concrete Materias (Ice, Cure):
        Derive from AMateria.
        Implement clone() and use() with specific behavior.

    ICharacter (Interface):
        Defines the contract for Character behavior.
        Includes inventory management (equip, unequip) and Materia usage.

    Character (Concrete Class):
        Implements ICharacter.
        Manages a dynamic inventory of AMateria objects.

    IMateriaSource (Interface):
        Defines the contract for a factory-like system to store and create Materias.

    MateriaSource (Concrete Class):
        Implements IMateriaSource.
        Stores learned Materias and creates copies based on type.

Core Concepts in Play

    Polymorphism: Use of abstract base classes and virtual functions.
    Dynamic Memory Management: Proper handling of new, delete, and avoiding memory leaks.
    Deep Copying: Correctly copying dynamic resources during object copying.
    Factory Pattern: Encapsulation of object creation logic in MateriaSource.
    Rule of Three: Ensuring proper destructor, copy constructor, and assignment operator.
    */