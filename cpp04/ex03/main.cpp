﻿/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:46:59 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/27 16:22:21 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void	check_leaks() { system("leaks cpp04_03"); }

int main()
{
	atexit(check_leaks);
	std::cout << "################### given test ########################\n\n\n" << std::endl;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");

	AMateria* tmp, *tmp1;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;

	std::cout << "\n\n\n################### my test ########################\n\n\n" << std::endl;
	
	src = new MateriaSource();
	src->learnMateria(0);
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(0);
	
	me = new Character("me");

	me->unequip(0);

	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("something");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	bob = new Character("bob");

	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);
	bob->use(0, *me);
	
	delete tmp;
	delete tmp1;
	delete bob;
	delete me;
	delete src;
	
	std::cout << "\n\n\n################### deep test ########################\n\n\n" << std::endl;	

	IMateriaSource* s = new MateriaSource();
	s->learnMateria(new Cure());
	s->learnMateria(new Ice());
	
	Character a("a"), b("b");

	a.equip(s->createMateria("ice"));
	a.equip(s->createMateria("cure"));

	b = a;

	b.use(0, a);

	delete s;
	
	return 0;
}