

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
void task2()
{
	int randomNumber;
	srand(time(0));
	randomNumber = rand() % 101;

	int numerFromUser;

	do
	{
		std::cout << "Podaj liczbê: ";
		std::cin >> numerFromUser;
		if (numerFromUser > randomNumber)
			std::cout << "Za du¿a. \n";
		if (numerFromUser < randomNumber)
			std::cout << "Za ma³a. \n";
	} while (numerFromUser != randomNumber);
	std::cout << "Gratulacje!!!\nZgad³eœ.\n";
}
void task3()
{
	int upperRange;
	std::cout << "Podaj Górny zakres: ";
	std::cin >> upperRange;
	int number = 0;
	do
	{
		std::cout << number << ", ";
		number++;
	} while (upperRange >= number);

}
void task4()
{
	int number;
	do
	{
		std::cout << "Podaj liczbê dodatni¹\n";
		std::cin >> number;
	} while (number < 0);
	int tmpNumber;
	int sumOfDigits = 0;
	do
	{

		tmpNumber = -1;
		do
		{
			tmpNumber++;
		} while ((number - tmpNumber) % 10 != 0);

		int rest = number % 10;
		//std::cout << rest << ", ";
		sumOfDigits = sumOfDigits + rest;
		number = number / 10;
	} while (number > 0);


	std::cout << "Suma cyfr wynosi " << sumOfDigits << "\n";
}
//*Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej.Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
void task5()
{
	int number;
	std::cout << "Podaj liczbê ca³kowuit¹: ";
	std::cin >> number;
	int numberOfdigits;
	numberOfdigits = 0;
	int temp = number;
	do
	{
		numberOfdigits++;
		temp /= 10;
	} while (temp != 0);

	std::cout << " liczba cyfr wynosi: " << numberOfdigits;
}
//*Napisz program, który sprawdza czy wiêcej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.
void task6()
{
	int numberOfEvenNumbers, numberOfOddNumbers;

	int number;
	std::cout << "Podaj liczbê ca³kowuit¹: ";
	std::cin >> number;
	int tempNumber = number;
	numberOfOddNumbers = 0;
	numberOfEvenNumbers = 0;
	do
	{
		int digit = tempNumber % 10;
		tempNumber = tempNumber / 10;

		if (digit % 2 == 0)
		{
			numberOfEvenNumbers++;
		}
		else
		{
			numberOfOddNumbers++;
		}
	} while (tempNumber > 0);
	std::cout << "liczb parzystych jest " << numberOfEvenNumbers << "\n liczb nieparzystych jest " << numberOfOddNumbers << "\n";
	if (numberOfEvenNumbers > numberOfOddNumbers)
	{
		std::cout << "liczb parzystych jest wiêcej";
	}
	else
	{
		if (numberOfOddNumbers > numberOfEvenNumbers)
		{
			std::cout << "liczb nieparzystych jest wiêcej";
		}
		else
		{
			std::cout << "liczb parzystych jest tyle samo co nieparzystych";
		}
	}


}
//*Poproœ u¿ytkownika o podawanie liczb, a¿ wprowadzi zero.Oblicz sumê oraz œredni¹ arytmetyczn¹ wprowadzonych liczb.
void task7()
{
	int number;	
	int numberOfDigits;
	numberOfDigits = 0;	
	int temp;
	
	do 
	{
		std::cout << "Podaj liczbê ca³kowuit¹: ";
		std::cin >> number;
		
		if (temp != 0)
		{
			numberOfDigits++;
			temp /= 10;
		}
		
	} while (number == 0);
	std::cout << "suma wynosi " << numberOfDigits ;

}
int main()

{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	task7();
}
