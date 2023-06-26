/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:39:17 by seunghoy          #+#    #+#             */
/*   Updated: 2023/06/26 20:54:21 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//public - static
int	Account::getNbAccounts( void ) { return (_nbAccounts); }
int	Account::getTotalAmount( void ) { return (_totalAmount); }
int	Account::getNbDeposits( void ) { return (_totalNbDeposits); }
int	Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" \
	<< Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() \
	<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

//public - non static
Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	++_nbAccounts;
	_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << \
	";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{
	--_nbAccounts;
	_totalAmount -= this->checkAmount();
	_totalNbDeposits -= this->_nbDeposits;
	_totalNbWithdrawals -= this->_nbWithdrawals;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << \
	";amount:" << this->checkAmount() << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	_totalAmount += deposit;
	++this->_nbDeposits;
	++_totalNbDeposits;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" \
	<< this->_amount - deposit << ";deposit:" << deposit << ";amount:" \
	<< this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" \
	<< this->_amount << ";withdrawal:"; 
	
	if (withdrawal <= this->_amount)
	{
		_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		++this->_nbWithdrawals;
		++_totalNbWithdrawals;

		std::cout << withdrawal << ";amount:" \
		<< this->_amount << ";nb_withdrawals:" \
		<< this->_nbWithdrawals << std::endl;

		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);
}

int	Account::checkAmount( void ) const { return (this->_amount); }

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << \
	";amount:" << this->checkAmount() << ";deposits:" << \
	this->_nbDeposits << ";withdrawals:" << \
	this->_nbWithdrawals << std::endl;
}

//private - static
void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(0);
    std::tm* timeInfo = std::localtime(&now);

    char buffer[19];

    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", timeInfo);
    std::cout << buffer;
}

//private - non static
Account::Account( void ) {}
