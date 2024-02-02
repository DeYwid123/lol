

#include <iostream>

void task1()
{
	
	int number;
		do 
		{
			std::cout << "Podaj liczbe:";
			std::cin >> number;	
		} while (number < 0);
		std::cout << "Podano liczbê:" << number;
		
}

int main()
{
	task1();
}


