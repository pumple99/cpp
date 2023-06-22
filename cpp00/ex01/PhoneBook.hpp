/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:18:35 by seunghoy          #+#    #+#             */
/*   Updated: 2023/06/22 17:59:20 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contact[8];
	int		_insertPos;
	int		_contactCount;
public:
	PhoneBook();
	void	AddPhoneBook();
	void	SearchPhoneBook();
};

#endif
