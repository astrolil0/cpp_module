
#include "Dog.hpp"

Dog::Dog(): AAnimal()
{
    std::cout << "Dog constructor called" << std::endl;
    AAnimal::setType("Dog");
    this->brain = new Brain();
}

Dog::Dog(const Dog& copy) : AAnimal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog& copy)
{
    AAnimal::type = copy.type;
	if(!this->brain)
    	this->brain = new Brain();
    *this->brain = *copy.brain;
	return(*this);
}

void Dog::makeSound() const
{
    std::cout << "woof woof" << std::endl;
}

std::string  *Dog::getBrain() const
{
    return (this->brain->ideas);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}
