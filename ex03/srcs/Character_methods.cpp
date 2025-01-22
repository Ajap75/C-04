/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character_methods.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:37:52 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/22 15:12:14 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Character.hpp"
#include "../headers/AMateria.hpp"

std::string const & Character::getName() const
{
    return (name);
}


void Character::equip(AMateria* m)
{
    int i;
    i = 0;

    if (m == NULL)
    {
        std::cout << RED << "CANNOT EQUIP the character with nothing..." << RESET << std::endl;
        return ;
    }
    while (i < 4)
    {
        if (inventory[i] != NULL)
            i++;
        else 
        {
            inventory[i] = m;
            std::cout << GREEN << "The character " << this->getName() << " has been equiped by the Materia" << RESET << std::endl;
            return;
        }
    }
    std::cout << RED << "No more availbale spot to equiped the character whit this Materia" << RESET << std::endl;
}


void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << RED << "The Character try to reach something out of his inventory" << RESET << std::endl;
        return ;
    }
    if (inventory[idx] != NULL && idx <= 3)
    {
        inventory[idx] = NULL;
        std::cout << GREEN << "The character " << this->getName() << " has been unequiped by the Materia" << RESET << std::endl;
        return ;
    }
    std::cout << RED << "No materia at this spot" << RESET << std::endl;
}


void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << RED << "The Character try to reach something out of his inventory" << RESET << std::endl;
        return ;
    }
    if (inventory[idx] == NULL)
        std::cout << RED << "The Character has no Materia at this inventory spot" << RESET << std::endl;
    if (inventory[idx] != NULL)
        inventory[idx]->use(target);      
}

/*Le Character a un inventaire de 4 items, soit 4 Materias maximum. À la construction,
l’inventaire est vide. Les Materias sont équipées au premier emplacement vide trouvé, soit
dans l’ordre suivant : de l’emplacement 0 au 3. Dans le cas où on essaie d’ajouter une
Materia à un inventaire plein, ou d’utiliser/retirer une Materia qui n’existe pas, ne faites
rien (cela n’autorise pas les bugs pour autant). La fonction membre unequip() ne doit
PAS delete la Materia !*/