/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource_Methods.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:07:38 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/11 14:29:29 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* materia)
{
    int i;
    i = 0;

    if (!materia)
        return ;
    while (i < 4)
    {
        if (inventory[i] != nullptr)
            i++;
        else 
        {
            inventory[i] = materia->clone();
            break;
        }
    }
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i;
    i = 0;

    while (i < 4)
    {
        if (inventory[i] != nullptr && inventory[i]->getType() == type)
            return(inventory[i]->clone());
        else 
            i++;
    }
    return (nullptr);
}