/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:22:02 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 17:01:54 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include "string"
#include "colors.hpp"
#include "iostream"


#ifndef Cure_HPP
#define Cure_HPP

class Cure : virtual public AMateria
{
    protected :

    std::string type;
    

    public : 

    /*constructor*/
    Cure();
    virtual ~Cure();
    Cure(std::string& type);
    Cure(const Cure& other);
    Cure& operator =(const Cure& other);
    
    /*member functions*/
    std::string const& getType() const; // return the materia type 
    Cure* clone () const override; 
    void use (ICharacter& target) override; 
};




#endif