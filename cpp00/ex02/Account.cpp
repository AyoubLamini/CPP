/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 10:54:32 by alamini           #+#    #+#             */
/*   Updated: 2025/02/02 15:49:32 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


void Account::_displayTimestamp(){
    std::time_t result = std::time(NULL);

    std::cout << std::setfill('0') <<"[" << 1900 + std::localtime(&result)->tm_year
                << std::setw(2) << 1 + std::localtime(&result)->tm_mon
                <<  std::setw(2) << std::localtime(&result)->tm_mday
                <<  "_"
                <<  std::setw(2) << std::localtime(&result)->tm_hour
                <<  std::setw(2) << std::localtime(&result)->tm_min
                <<  std::setw(2) << std::localtime(&result)->tm_sec 
                << "] " << std::flush;
}

void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";" 
    << "total:" << _totalAmount << ";"
    << "deposits:" << _totalNbDeposits << ";"
    << "withdrawals:" << _totalNbWithdrawals 
    << std::endl;

}

Account::Account(int initial_deposit )
{
    this->_amount = initial_deposit;
    this->_accountIndex = _nbAccounts;
    this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += this->_amount;
    
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" 
    << "amount:" << this->_amount << ";"
    << "created" 
    << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" 
    << "amount:" << this->_amount << ";"
    << "closed" 
    << std::endl;
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

int     Account::checkAmount( void ) const 
{
    return this->_amount;
}

void    Account::displayStatus( void ) const 
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" 
    << "amount:" << this->_amount << ";"
    << "deposits:" << this->_nbDeposits << ";" 
    << "withdrawals:" << this->_nbWithdrawals 
    << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    int p_amount = this->_amount;
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" 
    << "p_amount:" << p_amount << ";" 
    << "deposit:" << deposit << ";" 
    << "amount:" << this->_amount << ";"  
    << "nb_deposits:" << this->_nbDeposits 
    << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
    << "p_amount:" << _amount << ";"
    << "withdrawal:" << std::flush;
    if (withdrawal > checkAmount()) {
        std::cout << "refused" << std::endl;
        return false;
    }
    std::cout << withdrawal << ";" << std::flush;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    std::cout << "amount:" << _amount << ";"
                << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}



