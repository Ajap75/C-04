/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:54:33 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/20 19:01:18 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "colors.hpp"
#include "iostream"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"


#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

class IMateriaSource
{
     public : 

    /*destructor*/
    virtual~IMateriaSource();
    
    /*PURE VIRTUAL FUNCTION (= 0): No implementation is needed in the base class.
    Any derived class must provide its own implementation of clone(). cf comment below*/ 
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;

};
#endif