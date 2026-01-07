/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:47:17 by cecompte          #+#    #+#             */
/*   Updated: 2026/01/07 15:10:25 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\nARRAY OF ANIMALS TEST\n--------------\n";
	Animal* animals[4];
	
	animals[0] = new Cat();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Dog();
	std::cout << "\n\n";
	for (int i = 0; i < 4; i++)
		delete animals[i];
	
	std::cout << "\nDEEP COPY TEST\n--------------\n";
	Cat cat1("I'm sleepy");
	Cat cat2(cat1);
	std::cout << "\nCat1 thinks: """ << cat1.getIdeas() << """\n";
	std::cout << "Cat2 (copy) thinks: """ << cat2.getIdeas() << """\n";
	cat1.setIdeas("I'm hungry");
	std::cout << "\nCat1 now thinks: """ << cat1.getIdeas() << """\n";
	std::cout << "Cat2 thinks: """ << cat2.getIdeas() << """\n\n";
	
	Cat cat3("I don't care about humans");
	std::cout << "\nCat3 thinks: """ << cat3.getIdeas() << """\n";
	cat1 = cat3;
	std::cout << "Cat1 (assigned as Cat3) thinks: """ << cat1.getIdeas() << """\n";
	cat3.setIdeas("I tolerate humans");
	std::cout << "Cat3 now thinks: """ << cat3.getIdeas() << """\n";
	std::cout << "Cat1 thinks: """ << cat1.getIdeas() << """\n\n";

	return (0);
}