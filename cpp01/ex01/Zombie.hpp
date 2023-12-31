/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:10:01 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/05 15:07:43 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
private:
	std::string	name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce( void );
	void	setName(std::string& name);
};

Zombie*    zombieHorde(int N, std::string name);

#endif