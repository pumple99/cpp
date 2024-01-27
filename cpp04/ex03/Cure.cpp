/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:05:09 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/27 15:12:35 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure& o): AMateria(o) {}

Cure::~Cure() { std::cout << "Cure destructor called" << std::endl; }

Cure&	Cure::operator = (const Cure& other)
{
	std::cout << "Cure assignment operator called" << std::endl;
	std::cout << "assign " << other.getType() << std::endl;
	return (*this);
}

Cure*	Cure::clone() const { return new Cure(); }

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s ";
	std::cout << "wounds *" << std::endl;
}