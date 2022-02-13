/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 04:15:52 by melperri          #+#    #+#             */
/*   Updated: 2022/02/13 22:50:44 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void) {
	return _nbAccounts;
}

int	Account::getTotalAmount(void) {
	return _totalAmount;
}

int	Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created" << std::endl;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount - deposit
		<< ";deposit:" << deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	if (_amount - withdrawal < 0) {
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";withdrawal:refused" << std::endl;
		return false;
	} else {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++; _totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount + withdrawal
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}

int	Account::checkAmount(void) const {
	return _totalAmount;
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals <<std::endl;
}

void	Account::_displayTimestamp(void) {
	time_t tmNow = time(0);
	struct tm *ptmNow;

	ptmNow = localtime(&tmNow);
	std::cout << "[" << 1900 + ptmNow->tm_year;
	if (ptmNow->tm_mon < 9)
		std::cout << "0" << 1 + ptmNow->tm_mon;
	else
		std::cout << (1 + ptmNow->tm_mon);;;
	if (ptmNow->tm_mday < 10)
		std::cout << "0" << ptmNow->tm_mday << "_";
	else
		std::cout <<  ptmNow->tm_mday << "_";
	if (ptmNow->tm_hour < 10)
		std::cout << "0" << ptmNow->tm_hour;
	else
		std::cout << ptmNow->tm_hour;
	if (ptmNow->tm_min < 10)
		std::cout << "0" << ptmNow->tm_min;
	else
		std::cout << ptmNow->tm_min;
	if (ptmNow->tm_sec < 10)
		std::cout << "0" << ptmNow->tm_sec << "] ";
	else
		std::cout << ptmNow->tm_sec << "] ";
}

Account::Account(void) {
}
