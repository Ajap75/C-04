/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:03:40 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 16:34:56 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "colors.hpp"
#include "string"
#include "iostream"

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class WrongAnimal 
{
    protected :

    std::string type;

    public :
    
    /* Constructor */ 
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator =(const WrongAnimal& other);

    /*Methods*/
    void makeSound() const;
    std::string  getType() const;
};

#endif
