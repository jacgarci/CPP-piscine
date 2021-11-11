#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int			Account::_nbAccounts = 0;
int         Account::_totalAmount = 0;
int         Account::_totalNbDeposits = 0;
int         Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::getNbAccounts();
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout 
    << "index:" << this->_accountIndex
    << ";amount:" << this->checkAmount()
    << ";created" << std::endl;
    Account::_nbAccounts += 1;
    Account::_totalAmount += initial_deposit;
}

Account::Account(void)
{
    this->_accountIndex = Account::getNbAccounts();
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout 
    << "index:" << this->_accountIndex
    << ";amount:" << this->checkAmount()
    << ";created" << std::endl;
    Account::_nbAccounts += 1;
}

Account::~Account()
{
    Account::_displayTimestamp();
    std::cout
    << "index:" << this->_accountIndex
    << ";amount:" << this->checkAmount()
    << ";closed" << std::endl;
    Account::_nbAccounts -= 1;
}

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}

void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout 
    << "accounts:" << Account::getNbAccounts()
    << ";total:" << Account::getTotalAmount()
    << ";deposits:" << Account::getNbDeposits()
    << ";withdrawals:" << Account::getNbWithdrawals()
    << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    this->_amount += deposit;
    this->_nbDeposits += 1;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += 1;
    Account::_displayTimestamp();
    std::cout 
    << "index:" << this->_accountIndex
    << ";p_amount:" << this->checkAmount() - deposit
    << ";deposit:" << deposit
    << ";amount:" << this->checkAmount()
    << ";nb_deposits:" << this->_nbDeposits
    << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout
    << "index:" << this->_accountIndex
    << ";p_amount:" << this->checkAmount();
    if (this->_amount - withdrawal < 0)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        this->_nbWithdrawals += 1;
        this->_amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals += 1;
        std::cout
        << ";withdrawal:" << withdrawal
        << ";amount:" << this->checkAmount()
        << ";nb_withdrawals:" << this->_nbWithdrawals
        << std::endl;
    }
    return (true);
}

int     Account::checkAmount(void) const
{
    return (this->_amount);
}

void    Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout 
    << "index:" << this->_accountIndex
    << ";amount:" << this->checkAmount()
    << ";deposits:" << this->_nbDeposits
    << ";withdrawals:" << this->_nbWithdrawals
    << std::endl;
}

void    Account::_displayTimestamp(void)
{
    std::time_t time_now;
    std::tm     *now;

    time_now = std::time(0);
    now = std::localtime(&time_now);
    std::cout << std::setfill('0') << "["
    << now->tm_year + 1900 
    << std::setw(2) << now->tm_mon + 1
    << std::setw(2) << now->tm_mday
    << "_"
    << std::setw(2) << now->tm_hour
    << std::setw(2) << now->tm_min
    << std::setw(2) << now->tm_sec
    << "] ";
}