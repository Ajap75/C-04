/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource_Methods.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:07:38 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/22 12:12:03 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria *materia)
{
    int i;
    i = 0;

    if (!materia)
        return;
    while (i < 4)
    {
        if (inventory[i] != NULL)
            i++;
        else
        {
            inventory[i] = materia->clone();
            std::cout << "Materia : " << materia->getType() << " has been learned by MateriaSource" << std::endl;
            return;
        }
    }
    std::cout << RED << "No more Space in MateriaSource to learn Materia : " << RESET << materia->getType() << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int i;
    i = 0;

    while (i < 4)
    {
        if (inventory[i] != NULL && inventory[i]->getType() == type)
        {
            std::cout <<  GREEN "Materia has been found in MAteriaSource inventory (previously learned) and a MAteria of the type " << type << " has been created" << RESET << std::endl;
            return (inventory[i]->clone());
        }
        i++;
    }
    std::cout << RED << "Materia hasn't been found in MAteriaSource inventory. It has to be learned before MateriaSource being able to create one" << RESET << std::endl;
    return (NULL);
}