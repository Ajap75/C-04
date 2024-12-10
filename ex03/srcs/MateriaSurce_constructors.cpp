/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSurce_constructors.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:05:18 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 17:18:39 by antoinejour      ###   ########.fr       */
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
            inventory[i] = nullptr;
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
            inventory[i] = nullptr;
            i++;
        }
    }


    MateriaSource::MateriaSource(std::string& type)
    {
        std::cout << GREEN << "MateriaSource constructor with param called" << RESET << std::endl;
        int i;
        i = 0;
        while (i < 4)
        {
            if (inventory[i] != nullptr)
            {
                delete(inventory[i]);
                inventory[i] = nullptr;
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
            delete(this->inventory[i]);
            this->inventory[i] = other.inventory[i];
            i++;
        }
    }


    MateriaSource& MateriaSource:: operator =(const MateriaSource& other)
    {
    std::cout << BLUE << "MateriaSource copy constructor called" << RESET << std::endl;
    int i;
    i = 0;
    if (this != &other)
    {
        while(i < 4)
        {
            delete(this->inventory[i]);
            this->inventory[i] = other.inventory[i];
            i++;
        }
    }
    return(*this);
    }       