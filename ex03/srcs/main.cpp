/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:30:21 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/22 12:44:57 by anastruc         ###   ########.fr       */
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
    {
        IMateriaSource *src = new MateriaSource();
        std::cout << "-------\n"
                  << std::endl;

        src->learnMateria(new Ice());
        std::cout << "-------\n"
                  << std::endl;

        src->learnMateria(new Cure());
        std::cout << "-------\n"
                  << std::endl;

        ICharacter *me = new Character("me");
        std::cout << "-------\n"
                  << std::endl;
        AMateria *tmp;
        std::cout << "-------\n"
                  << std::endl;
        tmp = src->createMateria("ice");
        std::cout << "-------\n"
                  << std::endl;
        me->equip(tmp);
        std::cout << "-------\n"
                  << std::endl;
        tmp = src->createMateria("cure");
        std::cout << "-------\n"
                  << std::endl;
        me->equip(tmp);
        ICharacter *bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    // {
    //     IMateriaSource *src = new MateriaSource();
    //     ICharacter *Hercule = new Character("Hercule");
    //     ICharacter *Poseidon = new Character("Poseidon");
    //     Hercule->use(0, *Poseidon);
    //     std::cout << std::endl << RED << "TEST NO MORE SPACE\n" << RESET << std::endl;
    //     src->learnMateria(new Cure());
    //     src->learnMateria(new Cure());
    //     src->learnMateria(new Cure());
    //     src->learnMateria(new Ice());
    //     src->learnMateria(new Ice());
    //     std::cout << "-------" << std::endl;
    //     std::cout << std::endl << RED << "TEST MATERIA NOT FOUND IN INVENTORY" << RESET << std::endl;
    //     src->createMateria("NotExistingMateria");
    //     std::cout << "-------" << std::endl;
    //     std::cout << std::endl << RED << "TEST CHARACTER MAX INVENTORY / UNEXISTING MATERIA IN MATERIA SOURCE" << RESET << std::endl;
    //     Poseidon->equip(src->createMateria("cure"));
    //     Poseidon->equip(src->createMateria("ice"));
    //     Poseidon->equip(src->createMateria("ice"));
    //     Poseidon->equip(src->createMateria("NotExistingMateria"));
    //     Poseidon->equip(src->createMateria("ice"));
    //     Poseidon->equip(src->createMateria("ice"));
    //     std::cout << "-------" << std::endl;
    //     std::cout << std::endl << RED << "USE" << RESET << std::endl;
    //     std::cout << "-------" << std::endl;
    //     Poseidon->use(0, *Hercule);
    //     Poseidon->use(5, *Hercule);
    //     Poseidon->unequip(0);
    //     Poseidon->use(0, *Hercule);
        
    //     std::cout << std::endl << RED << "UNEQUIP" << RESET << std::endl;
    //     Poseidon->unequip(0);
    //     Poseidon->unequip(1);
    //     Poseidon->unequip(2);
    //     Poseidon->unequip(3);
    //     Poseidon->unequip(4);
    //     Poseidon->unequip(-1);

    //     delete Poseidon;
    //     delete src;
    //     delete Hercule;
    // }
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