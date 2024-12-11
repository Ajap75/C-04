/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter_constructors.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:35:27 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/11 14:53:59 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headers/ICharacter.hpp"

    ICharacter::~ICharacter() 
    {
        std::cout << RED << "ICharacter Default destructor called" << RESET << std::endl; 
    }
  