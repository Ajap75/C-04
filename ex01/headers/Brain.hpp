/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:17:13 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 17:50:43 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "colors.hpp"
#include "string"
#include "iostream"

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
    protected :

    std::string ideas[100];
    
    public :

    Brain();
    ~Brain();
    Brain(const Brain& other);
    Brain& operator = (const Brain& other);

    /*method*/
};

#endif
