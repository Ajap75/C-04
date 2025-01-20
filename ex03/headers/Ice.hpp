/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:22:05 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/20 19:05:43 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include "string"
#include "colors.hpp"
#include "iostream"


#ifndef ICE_HPP
#define ICE_HPP

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
    Ice* clone () const ; // override
    void use (ICharacter& target); // override
};




#endif