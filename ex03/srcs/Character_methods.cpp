/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character_methods.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:37:52 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 17:10:43 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Character.hpp"
#include "../headers/AMateria.hpp""

std::string const & Character::getName() const
{
    return (name);
}


void Character::equip(AMateria* m)
{
    int i;
    i = 0;

    while (i < 4)
    {
        if (inventory[i] != nullptr)
            i++;
        else 
            inventory[i] = m;
    }
}


void Character::unequip(int idx)
{
    if (inventory[idx] != nullptr)
        inventory[idx] = nullptr;
}


void Character::use(int idx, ICharacter& target)
{
    if (inventory[idx] != nullptr && idx >= 0 && idx <= 4)
        inventory[idx]->use(target);
}

/*Le Character a un inventaire de 4 items, soit 4 Materias maximum. À la construction,
l’inventaire est vide. Les Materias sont équipées au premier emplacement vide trouvé, soit
dans l’ordre suivant : de l’emplacement 0 au 3. Dans le cas où on essaie d’ajouter une
Materia à un inventaire plein, ou d’utiliser/retirer une Materia qui n’existe pas, ne faites
rien (cela n’autorise pas les bugs pour autant). La fonction membre unequip() ne doit
PAS delete la Materia !*/