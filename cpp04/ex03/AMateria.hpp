/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:58:13 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/25 15:52:07 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP


#include <string>

class AMateria
{
protected:

public:
	AMateria(std::string const & type);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
};

#endif