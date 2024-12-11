/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:30:21 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/11 14:31:46 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "../headers/colors.hpp"
#include "iostream"
#include "../headers/ICharacter.hpp"
#include "../headers/Character.hpp"
#include "../headers/IMateriaSource.hpp"
#include "../headers/MateriaSource.hpp"
#include "../headers/Cure.hpp"
#include "../headers/Ice.hpp"


int main()
{
IMateriaSource* src = new MateriaSource();
std::cout << "-------\n" << std::endl;
src->learnMateria(new Ice());
std::cout << "-------\n" << std::endl;
src->learnMateria(new Cure());
std::cout << "-------\n" << std::endl;
ICharacter* me = new Character("me");
delete me;
// AMateria* tmp;
// tmp = src->createMateria("ice");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// ICharacter* bob = new Character("bob");
// me->use(0, *bob);
// me->use(1, *bob);
// delete bob;
// delete me;
// delete src;
return 0;
}