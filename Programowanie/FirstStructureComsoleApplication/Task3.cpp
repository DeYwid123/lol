
#include <iostream>

struct bankAccount
{
	double balance; //saldo
	std::string owner; //w�a�cieciel
	std::string currency; //waluta
};
void accountInformation(bankAccount& account)
{
	std::cout << "Informacje o koncie bankowym. \n";
	std::cout << "W�a�ciciel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " <<  account.currency << "\n";
}
void depositToAccount(bankAccount& account, double amount)
{
	account.balance = account.balance - amount;
}
void widrawalFromAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	account.balance = account.balance - amount;
}
void task3()
{
	bankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z�";

	accountInformation(firstAccount);

	bankAccount secondAccount;
	firstAccount.balance = 15000;
	firstAccount.owner = "Ewa Nowak";
	firstAccount.currency = "z�";

	accountInformation(secondAccount);

	depositToAccount(firstAccount, -14.59);
	accountInformation(firstAccount);

	widrawalFromAccount(firstAccount, 14.59);
	accountInformation(firstAccount);







}