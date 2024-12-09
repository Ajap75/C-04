/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:07:06 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/09 18:40:52 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"
#include "../headers/Brain.hpp"
#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"


int main()
{
   const Animal* j = new Dog();
   const Animal* k = new Cat();
   delete j;//should not create a leak
   delete k;
  
   int i;

   // Herd building
   Animal* herd[10];


   // Every animals in the herd building
   i = 0;
   while (i < 5)
   {
      herd[i] = new Dog();
      i++;
   }
   while (i < 10)
   {
      herd[i] = new Cat();
      i++;
   }
   i = 0;
   
   // Every animals in the herd deleting

   while (i < 10)
   {
      delete herd[i];
      i++;
   }
}

// Other Test, without a virtual destructor in Animal class, will create some leak because only the destructor of Animal will be call.

