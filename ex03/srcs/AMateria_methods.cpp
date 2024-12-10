/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria_methods.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:27:09 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/10 13:06:57 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AMateria.hpp"

std::string const& AMateria::getType() const
{
    return (type);
};

// void AMateria::use(ICharacter& target)
// {
//     std::cout << "use " << this->getType() << std::cout;
// };