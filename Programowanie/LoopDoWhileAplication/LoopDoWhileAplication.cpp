

#include <iostream>

void task1()
{

	int number;
	do
	{
		std::cout << "Podaj liczbe:";
		std::cin >> number;
	} while (number < 0);
	std::cout << "Podano liczb�:" << number;
}
void task2()
{
	int randomNumber;
	srand(time(0));
	randomNumber = rand() % 101;

	int numerFromUser;

	do
	{
		std::cout << "Podaj liczb�: ";
		std::cin >> numerFromUser;
		if (numerFromUser > randomNumber)
			std::cout << "Za du�a. \n";
		if (numerFromUser < randomNumber)
			std::cout << "Za ma�a. \n";
	} while (numerFromUser != randomNumber);
	std::cout << "Gratulacje!!!\nZgad�e�.\n";
}
void task3()
{
	int upperRange;
	std::cout << "Podaj G�rny zakres: ";
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
		std::cout << "Podaj liczb� dodatni�\n";
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
//*Napisz program, kt�ry poprosi u�ytkownika o wprowadzenie dowolnej liczby ca�kowitej.Nast�pnie program powinien obliczy� i wy�wietli� liczb� cyfr.
void task5()
{
	int number;
	std::cout << "Podaj liczb� ca�kowuit�: ";
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
//*Napisz program, kt�ry sprawdza czy wi�cej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.
void task6()
{
	int numberOfEvenNumbers, numberOfOddNumbers;

	int number;
	std::cout << "Podaj liczb� ca�kowuit�: ";
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
		std::cout << "liczb parzystych jest wi�cej";
	}
	else
	{
		if (numberOfOddNumbers > numberOfEvenNumbers)
		{
			std::cout << "liczb nieparzystych jest wi�cej";
		}
		else
		{
			std::cout << "liczb parzystych jest tyle samo co nieparzystych";
		}
	}


}
//*Popro� u�ytkownika o podawanie liczb, a� wprowadzi zero.Oblicz sum� oraz �redni� arytmetyczn� wprowadzonych liczb.
void task7()
{
	int number;	
	int numberOfDigits;
	numberOfDigits = 0;	
	int temp;
	
	do 
	{
		std::cout << "Podaj liczb� ca�kowuit�: ";
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
