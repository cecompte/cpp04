/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:47:17 by cecompte          #+#    #+#             */
/*   Updated: 2026/01/06 16:10:43 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete i;
	delete meta;

	std::cout << "\n***********Wrong Animals***********\n";
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	j->makeSound();
	k->makeSound();
	wrong->makeSound();

	delete j;
	delete k;
	delete wrong;
	return (0);
}