#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";";
	_amount += deposit;
	_nbDeposits += 1;

	_totalAmount += deposit;
	_totalNbDeposits += 1;
	std::cout << "deposit:" << deposit << ";amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";";
	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_nbWithdrawals += 1;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;
		std::cout << "withdrawal:" << withdrawal << ";amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
	}
	return (true);
}

int Account::checkAmount(void) const
{
	return _amount;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";";
	std::cout << "deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::_displayTimestamp(void)
{
	std::time_t		t = std::time(0);
	std::tm			*now = localtime(&t);

	unsigned int	date;
	unsigned int	time;

	date = (now->tm_year + 1900) * 10000 + (now->tm_mon + 1)* 100 + now->tm_mday;
	time = now->tm_hour * 10000 + now->tm_min * 100 + now->tm_sec;
	std::cout << "[" << date << "_" << time << "]" << " ";
}

Account::Account(void)
{
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = 0;
}

Account::Account(int initial_deposit)
{
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";" << "created" << std::endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
