/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:54:33 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 17:16:16 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "colors.hpp"
#include "iostream"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"


#ifndef IMateriaSource_HPP
#define IMateriaSource_HPP

class IMateriaSource
{
    protected :     
    
    AMateria* inventory[4];
    

    public : 

    /*constructor*/
    IMateriaSource();
    ~IMateriaSource();
    IMateriaSource(std::string& type);
    IMateriaSource(const IMateriaSource& other);
    IMateriaSource& operator =(const IMateriaSource& other);
    

    /*PURE VIRTUAL FUNCTION (= 0): No implementation is needed in the base class.
    Any derived class must provide its own implementation of clone(). cf comment below*/ 

    virtual ~IMateriaSource();
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;

};
#endif