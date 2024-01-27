/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:59:39 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/27 13:44:37 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(): _type("default")
{
	std::cout << "This constructor will never userd.." << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type) {}

AMateria::AMateria(const AMateria& o): _type(o._type) {}

AMateria::~AMateria() {}

AMateria&	AMateria::operator = (const AMateria& other)
{
	std::cout << "AMateria assignment operator called" << std::endl;
	std::cout << "assign " << other.getType() << std::endl;
	return (*this);
}

std::string const &	AMateria::getType() const { return this->_type; }

void	AMateria::use(ICharacter& target)
{
	std::cout << "use something to " << target.getName() << std::endl;
}