/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:58:13 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/27 11:39:10 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& o);
	
	virtual	~AMateria();

	AMateria& operator = (const AMateria& o);

	std::string const &	getType() const; //Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif