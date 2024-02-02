// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Napisz program, który pobierze liczbê od u¿ytkownika i wyœwietli czy jest dodatnia czy ujemna.
 void task1()
{
	int number;
	std::cout << "podaj liczbe dodatni¹ lub ujemn¹: \n";
	std::cin >> number;
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia. \n";
	}
	if (number < 0)
	{
		std::cout << "Liczba jest ujemna. \n";
	}


}
 void task2()
{
	int number;
	std::cout << "podaj liczbe dodatni¹ lub ujemn¹: \n";
	std::cin >> number;
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia. \n";
	}


	else


	{
		std::cout << "liczba jest ujemna";

	}

}
	void task3()
{
	int number;
	std::cout << "Podaj liczbê. \n";
	std::cin >> number;
	if (number >= 1)

		if (number < 10)
		{
			std::cout << "Liczba jest w zakresie \n";
		}
		else
		{
			std::cout << "Liczba nie jest w zakresie\n";
		}
}
	void task4()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	if (secondNumber > firstNumber)
		std::cout << "Najwiêksza wartoœæ to " << secondNumber << "\n";
	else
		std::cout << "Najwiêksza wartoœæ to " << firstNumber << "\n";

}
	void task5()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbê \n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê \n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbê \n";
	std::cin >> thirdNumber;
	if (thirdNumber > secondNumber && thirdNumber > firstNumber)
		std::cout << "Najwiêksza wartoœæ to " << thirdNumber << "\n";
	else
	{
		if (secondNumber > firstNumber)
			std::cout << "Najwiêksza wartoœæ to " << secondNumber << "\n";
		else
			std::cout << "Najwiêksza wartoœæ to " << firstNumber << "\n";
	}




}
	void task6()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> fourthNumber;
	if (fourthNumber > firstNumber
		&& fourthNumber > secondNumber
		&& fourthNumber > thirdNumber)
		std::cout << "Najwiêksza liczba to: " << fourthNumber << "\n";
	else
	{
		if (thirdNumber > secondNumber && thirdNumber > firstNumber)
			std::cout << "Najwiêksza liczba to: " << thirdNumber << "\n";

		else
		{
			if (secondNumber > firstNumber)
				std::cout << "Najwiêksza wartoœæ to: " << secondNumber << "\n";
			else
				std::cout << "Najwiêksza wartoœæ to: " << firstNumber << "\n";
		}
	}
}

	void task7()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbê. \n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê. \n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbê. \n";
	std::cin >> thirdNumber;

	std::cout << "Liczby w kolejnoœci rosn¹cej: \n";
	if (thirdNumber > secondNumber && thirdNumber > firstNumber)
	{
		std::cout << thirdNumber << ", ";

		if (secondNumber > firstNumber)
			std::cout << secondNumber << ", " << firstNumber;
		else
			std::cout << firstNumber << ", " << secondNumber;
	}
	else
	{
		if (secondNumber < firstNumber)
		{
			std::cout << secondNumber << ",";
			if (thirdNumber > firstNumber)
				std::cout << thirdNumber << "," << firstNumber;
			else
				std::cout << firstNumber << "," << thirdNumber;

		}
		else
		{

			std::cout << firstNumber << ",";
			if (thirdNumber > firstNumber)
				std::cout << thirdNumber << "," << secondNumber;
			else
				std::cout << secondNumber << "," << thirdNumber;

		}

		std::cout << "\n";
	}

}
// Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.

	void task8()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbê ca³kowit¹: ";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê ca³kowit¹: ";
	std::cin >> secondNumber;
	if (firstNumber != secondNumber)
	{
		std::cout << "Liczby nie s¹ równe";
	}
	else
	{

		std::cout << "Liczby s¹ równe";

	}
}

// Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona parzysta. Wyœwietl odpowiedni komunikat.
	void task9()
{
	int number;
	std::cout << "Podaj liczbe: ";
	std::cin >> number;
	if (number % 2 == 0)
	{
		std::cout << "Liczba jest parzysta.";
	}
	else
	{
		std::cout << "Liczba nie jest parzysta.";
	}
}

// Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
	void task10()
{
	int number;
	std::cout << "Podaj liczbe: ";
	std::cin >> number;
	if (number % 5 == 0 && number % 3 == 0)
	{
		std::cout << "liczba jest podzielna przez 5 i 3";
	}
	else
	{
		std::cout << "liczba nie jest podzielna przez 5 i 3";
	}
}
// Napisz program, który poprosi u¿ytkownika o podanie masy cia³a (w kilogramach) i wzrostu (w metrach).
// Na podstawie tych danych oblicz wskaŸnik BMI (Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
// BMI = masa/wzrost^2
// poni¿ej 16 - wyg³odzenie
// 16 - 16.99 - wychudzenie
// 17 - 18.49 - niedowagê
// 18.5 - 24.99 - wagê prawid³ow¹
// 25.0 - 29.9 - nadwagê
// 30.0 - 34.99 - I stopieñ oty³oœci
// 35.0 - 39.99 - II stopieñ oty³oœci
// powy¿ej 40.0 - oty³oœæ skrajn¹
	void task11()
{
	float userBodyMass, userHeight, bmi;
	std::cout << "Podaj mase cia³a w kg: ";
	std::cin >> userBodyMass;
	std::cout << "Podaj swój wzrost w metrach : ";
	std::cin >> userHeight;
	bmi = userBodyMass / (userHeight * userHeight);
	if (bmi < 16)
	{
		std::cout << "Masz wyg³odzenie.";
	}
	else
	{
		if (bmi <= 16.99)
		{
			std::cout << "Masz wychudzenie.";
		}
		else
			if (bmi <= 18.49)
			{
				std::cout << "Masz niedowage.";
			}
			else
				if (bmi <= 24.99)
				{
					std::cout << "Masz wage prawid³ow¹.";
				}
				else
					if (bmi <= 29.9)
					{
						std::cout << "Masz nadwagê.";

					}
					else
						if (bmi <= 34.99)
						{
							std::cout << "Masz I stopieñ oty³oœci.";

						}
						else
							if (bmi <= 39.99)
							{
								std::cout << "Masz  II stopieñ oty³oœci.";
							}

							else
								if (bmi >= 40.0)
								{
									std::cout << "Masz oty³oœæ skrajn¹.";
								}
	}
}
// Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
	void task12()
{
	int number;
	std::cout << "wylosuj liczbe od 1 do 7: ";
	std::cin >> number;
		switch(number)
		{
		case 1:
			std::cout << "Poniedzia³ek.";
			break;
		case 2:
			std::cout << "Wtorek";
			break;
		case 3:
			std::cout << "Œroda";
			break;
		case 4:
			std::cout << "Czwartek";
			break;
		case 5:
			std::cout << "Pi¹tek";
			break;
		case 6:
			std::cout << "Sobota";
			break;
		case 0: 
		case 7:
			std::cout << "Niedziela";
			break;
		default:
			std::cout << "lizcba jest wiêksza lub mniejsza ni¿ liczby 1-7.";
				break;
		}
}

// Napisz program, który wczyta numer miesi¹ca i wyœwietli jego s³owny odpowiednik.
	void task13()
{
	{
		int number;
		std::cout << "Podaj numer miesi¹ca: ";
		std::cin >> number;
		if (number == 1)
		{
			std::cout << "Styczeñ.";
		}
		else {
			if (number == 2)
			{
				std::cout << "Luty";
			}
			else
				if (number == 3)
				{
					std::cout << "Marzec";
				}
				else
					if (number == 4)
					{
						std::cout << "Kwiecieñ";
					}
					else
						if (number == 5)
						{
							std::cout << "Maj";
						}
						else
							if (number == 6)
							{
								std::cout << "Czerwiec";
							}
							else
								if (number == 7)
								{
									std::cout << "Lipiec";
								}
								else
									if (number == 8)
									{
										std::cout << "Sierpieñ";
									}
									else
										if (number == 9)
										{
											std::cout << "Wrzesieñ";
										}
										else
											if (number == 10)
											{
												std::cout << "PaŸdziernik";
											}
											else
												if (number == 11)
												{
													std::cout << "Listopad";
												}
												else
													if (number == 12)
													{
														std::cout << "Grudzieñ";
													}
													else
													{
														std::cout << "nie ma takiego numeru miesi¹ca.";
													}
		}
	}
}

// Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
	void task14()
{
		int year;
		
		std::cout << "Podaj rok: ";
		std::cin >> year;
		
		if (year % 400 == 0)
		{
			std::cout << year << " jest rokiem przestêpnym.";
		}
		else
		{
			std::cout << year << " nie jest rokiem przestêpnym.";
		}
}

// Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
	void task15()
	{
		
		int number, secondNumber;
		std::cout << "Podaj liczbê: ";
			std::cin >> number;
			secondNumber = number + 2 * (-number);
			
			if (number > 0)
			{
				std::cout << "wartoœæ bezwzglêdna to " << number;
			}
			else
			{
				std::cout << "wartoœæ bezwzglêdna to " << secondNumber;
			}
	}

// Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
	void task16()
	{
		int userAge;
		std::cout << "Podaj wiek: ";
		std::cin >> userAge;
		if (userAge >= 18)
		{
			std::cout << "Jesteœ pe³noletni.";
		}
		else
		{
			std::cout << "Nie jesteœ pe³noletni.";
		}
    }
// Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t. Wyœwietl odpowiedni komunikat.
	void task17()
	{
		int line1, line2, line3, triangle;
		std::cout << "Podaj 1 odcinek: ";
		std::cin >> line1;
		std::cout << "Podaj 2 odcinek: ";
		std::cin >> line2;
		std::cout << "Podaj 3 odcinek: ";
		std::cin >> line3;
		if (line1 + line2 > line3 && line2 + line3 > line1 && line3 + line1 > line2)
		{
			std::cout << "Mo¿na zbudowaæ z nich trójk¹t.";
		}
		else
		{
			std::cout << "Nie mo¿na zbudowaæ z nich trójk¹t.";
		}
	}
// Napisz program, który poprosi u¿ytkownika o podanie oceny w skali 100-punktowej i przeliczy j¹ na ocenê procentow¹ w przedziale od 0 do 100. Wyœwietl wynik.
	void task18()
	{
		int grade;
		std::cout << "Podaj oceny w skali 100-punktowej: ";
		std::cin >> grade;
		if (grade <= 35)
		{
			std::cout << "Ocena niedostateczna.";
		}
		else
		{
			if (grade <= 49)
			{
				std::cout << "Ocena dopuszczaj¹ca.";
			}
			else
				if (grade <= 70)
				{
					std::cout << "Ocena dostateczna.";
				}
				else
					if (grade <= 89)
					{
						std::cout << "Ocena dobra.";
					}
					else
						if (grade <= 99)
						{
							std::cout << "ocena bardzo dobra.";

						}
						else
							if (grade == 100)
							{
								std::cout << "Ocena celuj¹ca.";
							}
							else
							{
								std::cout << "Nie ma takiej oceny.";
							}


		}
	}
// Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
	void task19()
	{
		int grade;
		std::cout << "Podaj ocena: ";
		std::cin >> grade;
		if (grade == 1)
		{
			std::cout << "Ocena niedostateczna.";
		}
		else
		{
			if (grade == 2)
			{
				std::cout << "Ocena dopuszczaj¹ca.";
			}
			else
				if (grade == 3)
				{
					std::cout << "Ocena dostateczna.";
				}
				else
					if (grade == 4)
					{
						std::cout << "Ocena dobra.";
					}
					else
						if (grade == 5)
						{
							std::cout << "Ocena bardzo dobra.";

						}
						else
							if (grade == 6)
							{
								std::cout << "Ocena celuj¹ca.";
							}
							else
							{
								std::cout << "Nie ma takiej oceny.";
							}
		}
	}
// Napisz program, który na podstawie wspó³czynników równania kwadratowego (a, b, c) sprawdzi, czy to równanie ma rozwi¹zania rzeczywiste, i jeœli tak, to je obliczy.
	void task20()
	{
		double a, b, c;
		std::cout << "Podaj wspó³czynnik równania kwantowego (a, b, c): ";
		std::cin >> a >> b >> c;
		double delta = b * b - 4 * a * c;
		if (delta >= 0)
		{
			double x1 = (-b + sqrt(delta)) / (2 * a); 
		}
	}
// Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
	void task21()
	{
		int day, month;
		std::cout << "Podaj dzieñ miesi¹ca: ";
		std::cin >> day;
		std::cout << "Podaj miesi¹c: ";
		std::cin >> month;
		if (month >= 1 && month <= 12)
		{
			if (day >= 1 && day <= 31)
			{
				std::cout << "podana data jest prawid³owa.";
			}
			else
			{
				std::cout << "Podany dzieñ jest nieprawid³owy.";
			}

		}
		else
		{
			"Podany miesi¹c jest nieprawid³owy.";
		}

	}
/*
Priorytety operatorów:
+ -
> < >= <= == !=
&&
||
=

Operatory logiczne :
|| or/lub
&& and/i
! not/nie
A B  A || B  A && B  !A
f f     f       f    t
f t     t       f
t f     t       f    f
t t     t       t
*/


int main()
{

	//task1();

	//task2();

	//task3();

	//task4();

	//task5();

	//task6();

	//task7(); 

	//task8();

	//task9();

	//task10();

	//task11();
	
	//task12(); 
	
	//task13();
	
	//task14();
	
	//task15();
	
	//task16();
	
	//task17();
	
	//task18();
	
	//task19();  

	//task20();
	
	task21();
}