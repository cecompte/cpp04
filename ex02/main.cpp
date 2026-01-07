/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:47:17 by cecompte          #+#    #+#             */
/*   Updated: 2026/01/07 15:52:02 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\nMAKE SOUND TEST (ex00)\n--------------\n";
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete i;
	delete j;

	std::cout << "\nARRAY OF ANIMALS TEST (ex01)\n--------------\n";
	AAnimal* animals[4];
	
	animals[0] = new Cat();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Dog();
	std::cout << "\n\n";
	for (int i = 0; i < 4; i++)
		delete animals[i];

	// This should NOT compile (testing that AAnimal is abstract):
	// AAnimal k("Cow");
	return (0);
}