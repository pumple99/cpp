/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:59:39 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/26 20:45:33 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"

AMateria::AMateria(): _type("default")
{
	std::cout << "This constructor will never userd.." << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria naming constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& o): _type(o._type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

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