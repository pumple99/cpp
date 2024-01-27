/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:05:09 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/27 13:45:11 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(const Ice& o): AMateria(o) {}

Ice::~Ice() { std::cout << "Ice destructor called" << std::endl; }

Ice&	Ice::operator = (const Ice& other)
{
	std::cout << "Ice assignment operator called" << std::endl;
	std::cout << "assign " << other.getType() << std::endl;
	return (*this);
}

Ice*	Ice::clone() const { return new Ice(); }

void	Ice::use(ICharacter& target)
{
	std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}