/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:22:02 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/22 08:56:49 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "string"
#include "colors.hpp"
#include "iostream"

#ifndef CURE_HPP
#define CURE_HPP

class ICharacter;

class Cure : virtual public AMateria
{

public:
    /*constructor*/
    Cure();
    virtual ~Cure();
    Cure(std::string &type);
    Cure(const Cure &other);
    Cure &operator=(const Cure &other);

    /*member functions*/
    Cure *clone() const;          // override
    void use(ICharacter &target); //  override
};

#endif