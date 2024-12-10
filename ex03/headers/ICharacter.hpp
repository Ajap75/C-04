/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:34:38 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 14:02:28 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "colors.hpp"
#include "iostream"
#include "../headers/AMateria.hpp"



#ifndef ICharacter_HPP
#define ICharacter_HPP

class ICharacter
{
    protected :

    std::string type;
    

    public : 

    /*constructor*/
    virtual ~ICharacter() {}
    
    /*member functions*/
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;

    // virtual void use (ICharacter& target); 
};
#endif