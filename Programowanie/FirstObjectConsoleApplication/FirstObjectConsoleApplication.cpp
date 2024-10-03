#include <iostream>

class bankAccount
{
public:
	double balance; // saldo
	std::string owner; //w³aœciciel
	std::string currency; //waluta



void accountInformation()
{
	std::cout << "Informacja o koncie bankowym.\n";
	std::cout << "W³aœciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n";
}

void depositToAccount( double amount)
{
	amount = abs(amount);
	balance = balance + amount;
}
};
bool widthdrawalFromAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	if (account.balance - amount >= 0)
	{
		account.balance = account.balance - amount;
		return true;
	}
	return false;
}

void transferBetweenAcounts(bankAccount& sourceAccount, bankAccount& targetAccount, double amount)
{
	if (widthdrawalFromAccount(sourceAccount, amount) == true)
		depositToAccount(targetAccount, amount);
}

void task3()
{
	bankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.currency = "zł";
	firstAccount.owner = "Jan Kowalski";

	accountInformation(firstAccount);

	bankAccount secondAccount;
	secondAccount.balance = 15000;
	secondAccount.currency = "zł";
	secondAccount.owner = "Ewa Nowak";

	accountInformation(secondAccount);

	depositToAccount(firstAccount, -14.50);
	accountInformation(firstAccount);

	widthdrawalFromAccount(firstAccount, 14.50);
	accountInformation(firstAccount);

	transferBetweenAcounts(secondAccount, firstAccount, 1000);
	accountInformation(firstAccount);
	accountInformation(secondAccount);
}
int main()
{

}