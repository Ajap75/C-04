/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character_constructors.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:31:55 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/22 10:06:27 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Character.hpp"
#include "../headers/AMateria.hpp"


Character::Character()
{
    std::cout << GREEN << "Character Default constructor called" << RESET << std::endl; 
    int i;
    i = 0;
    while (i < 4)
    {
        inventory[i] = NULL;
        i++;
    }
}

Character::Character(std::string name) : name(name)
{
    std::cout << GREEN << "Character constructor with param called" << RESET << std::endl; 
    int i;
    i = 0;
    while (i < 4)
    {
        inventory[i] = NULL;
        i++;
    }
}

Character::~Character() 
{
    std::cout << RED << "Character Default destructor called" << RESET << std::endl; 
    int i;
    i = 0;
    while (i < 4)
    {
        if (inventory[i] != NULL)
        {
            delete(inventory[i]);
            inventory[i] = NULL;
        }
        i++;
    }
}


Character::Character(const Character& other) : name(other.name)
{
    std::cout << MAGENTA << "Character copy constructor  called" << RESET << std::endl;
    int i;
    i = 0;
    name = other.name;
    while(i < 4)
    {
        if (other.inventory[i])
        {
            this->inventory[i] = other.inventory[i]->clone();
        }
        else
            this->inventory[i] = NULL;
        i++;
    }
}


Character& Character:: operator =(const Character& other)
{
    std::cout << BLUE << "Character assignation operator called" << RESET << std::endl;
    int i;
    i = 0;
    if (this != &other)
    {
        name = other.name;
        while(i < 4)
        {
            if (this->inventory[i] != NULL)
                delete(this->inventory[i]);
            if (other.inventory[i] != NULL)
                this->inventory[i] = other.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
            i++;
        }
    }
    return(*this);
}


/*Votre Character doit comporter un constructeur prenant son nom en paramètre.
Toute copie (avec le constructeur par recopie ou l’opérateur d’affectation) d’un Character doit être profonde. Ainsi, lors d’une copie, les Materias du Character doivent être
delete avant que les nouvelles ne les remplacent dans l’inventaire. Bien évidemment, les
Materias doivent aussi être supprimées à la destruction d’un Character.*/