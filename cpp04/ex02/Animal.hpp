/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:47:18 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/25 14:26:14 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string		type;
public:
	Animal();
	Animal(const Animal& other);

	virtual	~Animal();

	Animal&	operator = (const Animal& p);

	std::string			getType() const;
	virtual void		makeSound() const = 0;
	virtual std::string	getIdea(unsigned int idx) const;
	virtual void		setIdea(std::string idea, unsigned int idx);
};

#endif
