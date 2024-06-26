#include"Dog.hpp"
#include"Cat.hpp"
#include "WrongCat.hpp"

int main()
{
		{
			const Animal* meta = new Animal();
			const Animal* j = new Dog();
			const Animal* i = new Cat();
			std::cout << j->getType() << " " << std::endl;
			std::cout << i->getType() << " " << std::endl;
			i->makeSound();
			j->makeSound();
			meta->makeSound();
			delete i;
			delete meta;
			delete j;
		}
		std::cout << "-------------------------"<< std::endl;
        const WrongAnimal* meta = new WrongAnimal();
		std::cout << "-------------------------"<< std::endl;
        const WrongAnimal* cat = new WrongCat();
		std::cout << "-------------------------"<< std::endl;
        std::cout << cat->getType() << std::endl;
        cat->makeSound();
        meta->makeSound();
        delete meta;
        delete cat;
    	return 0;
}

