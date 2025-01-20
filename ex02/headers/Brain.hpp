/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:17:13 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/20 17:26:11 by anastruc         ###   ########.fr       */
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
