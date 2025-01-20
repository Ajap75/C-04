/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_constructors.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:39:37 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/20 15:34:05 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"
#include "../headers/Brain.hpp"


Dog::Dog() : Animal()
{
    std::cout << GREEN << "Dog default constructor called" << RESET <<  std::endl;
    type = "Dog";
    brain = new Brain();
    // Constructor body (if needed)
};

Dog::~Dog() // Dog::~Dog() should not have a base class destructor call in the initializer list. Just define it normally; the compiler will automatically call Animal's destructor.
{
    delete brain;
    std::cout << RED << "Dog default destructor called" << RESET <<  std::endl;
}; 

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << MAGENTA << "Dog copy constructor called" << RESET <<  std::endl;
    
    /* Creating a deep copy of the 'brain' object by allocating new memory 
   and copying the contents from the original. This ensures that the 
   new object has its own independent 'brain' instance, preventing 
   shared ownership or accidental modifications. Cf comment bellow to create a deep copy*/
    if (other.brain)
        this->brain = new Brain(*other.brain);
    else 
        this->brain = nullptr;
    // If Dog has its own data members, initialize them here
};

Dog& Dog::operator= (const Dog& other)
{
    std::cout << BLUE << "Dog assignation operator called" << RESET <<  std::endl;
    if (this != &other)
    {
        Animal::operator = (other);
        if (this->brain)
            delete (brain);
        if (other.brain)
            this->brain = new Brain(*other.brain);
        else
            this->brain = nullptr;
        // If Dog has its own data members, copy them here
    }
    return (*this);
}; 

/*Deep Copy

Deep Copy:

    Since brain is dynamically allocated, both the copy constructor and assignment operator must ensure a deep copy to avoid sharing the same memory.

Avoid Memory Leaks:

    Always release existing resources (e.g., delete brain) before allocating new ones in the assignment operator.

Null Safety:

    Handle cases where other.brain might be nullptr.

Destructor:

    Free dynamically allocated memory to prevent leaks.*/


