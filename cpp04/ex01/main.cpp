/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:46:59 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/27 15:27:47 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cstdlib>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	check_leaks() { system("leaks cpp04_01"); }

int main()
{
	atexit(check_leaks);
	// Animal a; instantiable

	std::cout << "#################### given test #####################\n\n\n\n";
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << "\n\n\n#################### my test #####################\n\n\n\n";

	Animal	*animals[10];

	for (int i=0; i<5; i++)
		animals[i] = new Dog();
	
	for (int i=5; i<10; i++)
		animals[i] = new Cat();
	
	for (int i=0; i<10; i++)
	{
		std::cout << animals[i]->getType() << ": ";
		std::cout << animals[i]->getIdea(0) << std::endl;
	}

	for (int i=0; i<10; i++)
	{
		delete animals[i];
		animals[i] = 0;
	}

	std::cout << "\n\n\n#################### cat test #####################\n\n\n\n";

	Cat cat1;
	cat1.setIdea("cat 1", 1);
	Cat cat2(cat1);
	cat2.setIdea("cat 2", 1);

	std::cout << "1: " << cat1.getIdea(1) << ", 2: " << cat2.getIdea(1);
	std::cout << "\nif not same then deep copy!" << std::endl;

	cat1 = cat2;

	std::cout << "Now -> " << cat1.getIdea(1) << " = " << cat2.getIdea(1);
	std::cout << std::endl;

	std::cout << "\n\n\n#################### dog test #####################\n\n\n\n";

	Dog dog1;
	dog1.setIdea("dog 1", 1);
	Dog dog2(dog1);
	dog2.setIdea("dog 2", 1);

	std::cout << "1: " << dog1.getIdea(1) << ", 2: " << dog2.getIdea(1);
	std::cout << "\nif not same then deep copy!" << std::endl;

	dog1 = dog2;

	std::cout << "Now -> " << dog1.getIdea(1) << " = " << dog2.getIdea(1);
	std::cout << std::endl;

	std::cout << "\n\n\n################# leak check ###################\n\n\n";

	i=0; j=0;

	system("leaks cpp04_01");

	return 0;
}