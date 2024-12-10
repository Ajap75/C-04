/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:54:33 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 17:18:54 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "colors.hpp"
#include "iostream"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "IMAteriaSource.hpp"

#ifndef MateriaSource_HPP
#define MateriaSource_HPP

class MateriaSource
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