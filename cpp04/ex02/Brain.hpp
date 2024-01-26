/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:35:41 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/25 12:30:11 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& other);
	~Brain();

	Brain& operator = (const Brain& ref);
	
	std::string	getIdea(unsigned int idx) const;
	void		setIdea(std::string idea, unsigned int idx);
};



#endif