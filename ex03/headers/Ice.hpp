/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:22:05 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 13:28:35 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AMateria.hpp"

#include "string"
#include "colors.hpp"
#include "iostream"


#ifndef Ice_HPP
#define Ice_HPP

class Ice : virtual public AMateria
{
    protected :

    std::string type;
    

    public : 

    /*constructor*/
    Ice();
    virtual ~Ice();
    Ice(std::string& type);
    Ice(const Ice& other);
    Ice& operator =(const Ice& other);
    
    /*member functions*/
    std::string const& getType() const; // return the materia type 
    Ice* clone () const override;
    void use (ICharacter& target) override; 
};




#endif