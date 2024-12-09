/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain_constructors.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:16:58 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 18:23:10 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headers/Brain.hpp"


Brain::Brain() 
{
    std::cout << GREEN << "Brain Default Constructor called" << RESET << std::endl;
    std::cout << std::endl;

}

Brain::~Brain() 
{
    std::cout << std::endl;
    std::cout << RED << "Brain Destructor called" << RESET << std::endl;
}

Brain::Brain (const Brain& other) 
{
    int i;
    i = 0;

    while (i < 100)
    {
        this->ideas[i] = other.ideas[i];
        i++;
    }
    std::cout << MAGENTA << "Brain copy Constructor called" << RESET << std::endl;
}

Brain& Brain::operator =(const Brain& other)
{
    int i;
    i = 0;
    if(this != &other)
    {
        while (i < 100)
        {
            this->ideas[i] = other.ideas[i];
            i++;
        }
    }
    std::cout << BLUE << "Brain assignation operator called" << RESET << std::endl;
    return (*this);
}