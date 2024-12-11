/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:54:33 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/11 13:56:18 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "colors.hpp"
#include "iostream"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource : public IMateriaSource
{

    protected : 

    AMateria* inventory[4];

    public : 

    /*constructor*/
    MateriaSource();
    MateriaSource(std::string& type);
    MateriaSource(const MateriaSource& other);
    MateriaSource& operator =(const MateriaSource& other);
    ~MateriaSource();

  
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);

};
#endif