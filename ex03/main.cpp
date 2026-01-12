/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:31:32 by cecompte          #+#    #+#             */
/*   Updated: 2026/01/09 14:38:47 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "\nREQUIRED TESTS --------------------------\n\n";
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\nADDITIONAL TESTS --------------------------\n\n";
	std::cout << "1) deep copy test with Character copy constructor\n";
	Character original("original");
	tmp = src->createMateria("ice");
	std::cout << "--> original:\n";
	original.equip(tmp);
	tmp = src->createMateria("cure");
	original.equip(tmp);
	original.use(0, *bob);
	original.use(1, *bob);
	std::cout << "--> copy:\n";
	Character copy(original);
	copy.use(0, *bob);
	copy.use(1, *bob);

	std::cout << "\n2) deep copy test with Character assignment operator overload\n";
	Character another("another");
	std::cout << "--> before assignment:\n";
	another.equip(tmp);
	another.use(0, *bob);
	another.use(1, *bob);
	std::cout << "--> after assignment:\n";
	another = original;
	another.use(0, *bob);
	another.use(1, *bob);

	std::cout << "\n3) index out of bounds or empty entry in inventory\n";
	original.use(5, *bob);
	original.use(3, *bob);

	std::cout << "\n4) equip and unequip functions\n";
	original.unequip(3);
	original.unequip(6);
	original.unequip(1);
	original.use(1, *bob);
	original.equip(tmp);
	original.equip(tmp);
	original.equip(tmp);
	original.equip(tmp);

	std::cout << "\n5) wrong materia\n";
	tmp = src->createMateria("carbon");
	original.equip(tmp);

	std::cout << "\n6) no materia or too many materia\n";
	IMateriaSource* src2 = new MateriaSource();
	tmp=src2->createMateria("");
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	delete bob;
	delete me;
	delete src;
	return 0;
}