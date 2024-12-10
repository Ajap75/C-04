/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:07:52 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 16:12:17 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal 
{
    protected :

    public :

    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat& other);
    WrongCat& operator = (const WrongCat& other);

    /*method*/
    void makeSound() const; 
};

#endif