/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:32:34 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/27 11:50:08 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*slot[4];	
public:
	MateriaSource();
	MateriaSource(const MateriaSource& o);
	~MateriaSource();

	MateriaSource& operator = (const MateriaSource& o);

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
};

#endif