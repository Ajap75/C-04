/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_constructors.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:51:15 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/20 17:20:57 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"
#include "../headers/Brain.hpp"


Cat::Cat() : Animal()
{
    std::cout << GREEN << "Cat default constructor called" << RESET << std::endl;
    type = "Cat";
    brain = new Brain();
};

Cat::~Cat() // Cat::~Cat() should not have a base class destructor call in the initializer list. Just define it normally; the compiler will automatically call Animal's destructor.
{
    delete brain;
    std::cout << RED << "Cat default destructor called" << RESET << std::endl;
}; 

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << MAGENTA <<  "Cat copy constructor called" << RESET << std::endl;

   /* Creating a deep copy of the 'brain' object by allocating new memory 
   and copying the contents from the original. This ensures that the 
   new object has its own independent 'brain' instance, preventing 
   shared ownership or accidental modifications. Cf comment bellow to create a deep copy*/
    if (other.brain)
        this->brain = new Brain(*other.brain);
    else
        this->brain = NULL;
    // If Cat has its own data members, initialize them her
};

Cat& Cat::operator =(const Cat& other)
{
    std::cout << BLUE << "Cat assignation operator called" << RESET << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete (this->brain); // Always release existing resources (e.g., delete brain) before allocating new ones in the assignment operator.
        if (other.brain) //     Handle cases where other.brain might be nullptr.
            this->brain = new Brain(*other.brain);
        else 
            this->brain = NULL; 
    }
    return (*this);
}


/*Deep Copy

Deep Copy:

    Since brain is dynamically allocated, both the copy constructor and assignment operator must ensure a deep copy to avoid sharing the same memory.

Avoid Memory Leaks:

    Always release existing resources (e.g., delete brain) before allocating new ones in the assignment operator.

Null Safety:

    Handle cases where other.brain might be nullptr.

Destructor:

    Free dynamically allocated memory to prevent leaks.*/


