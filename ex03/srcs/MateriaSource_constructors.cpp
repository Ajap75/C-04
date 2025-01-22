/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource_constructors.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:05:18 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/22 12:38:53 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/MateriaSource.hpp"

    MateriaSource::MateriaSource()
    {
        std::cout << GREEN << "MateriaSource Default constructor called" << RESET << std::endl;
        int i;
        i = 0;
        while (i < 4)
        {
            inventory[i] = NULL;
            i++;
        }
    }

    
    MateriaSource::~MateriaSource() 
    {
        std::cout << RED << "MateriaSource Default destructor called" << RESET << std::endl;
        int i;
        i = 0;
        while (i < 4)
        {
            if (inventory[i] != NULL)
            {
                delete(this->inventory[i]);
                this->inventory[i] = NULL;
            }
            i++;
        }
    }




    MateriaSource::MateriaSource(const MateriaSource& other)
    {
        std::cout << MAGENTA << "MateriaSource copy constructor called" << RESET << std::endl;
        int i;
        i = 0;
        while(i < 4)
        {
            if (other.inventory[i] != NULL)
                this->inventory[i] = other.inventory[i]->clone();
            else 
                this->inventory[i] = NULL;
            i++;
        }
    }


    MateriaSource& MateriaSource:: operator =(const MateriaSource& other)
    {
    std::cout << BLUE << "MateriaSource assignement operator called" << RESET << std::endl;
    int i;
    i = 0;
    if (this != &other)
    {
        while(i < 4)
        {
            if (this->inventory[i] != NULL)
            {
                delete(this->inventory[i]);
                this->inventory[i] = NULL;
            }
            if (other.inventory[i] != NULL)
                this->inventory[i] = other.inventory[i]->clone();
            i++;
        }
    }
    return(*this);
    }       