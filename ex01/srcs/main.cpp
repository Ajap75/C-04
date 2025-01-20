/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:07:06 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/20 14:48:09 by anastruc         ###   ########.fr       */
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

   /* In this situation object slicing occurs. When you assign a derived object (like Dig) to a base class object (Animla), only the base part of derivde object is copied
   Any additional data or behavior defined in Dog is lost in the copy */   
   const Animal z = *j;
   z.makeSound();

   /*On the contrary, here a deep copy occured. To prevent slicing, use pointers or references and ensure the base class object has virtual methods where polymorphism is needed.*/
   const Animal* y = j;
   y->makeSound();
   delete j;//should not create a leak
   delete k;  

   Dog t;
   Dog tmp = t;

   
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

