// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Napisz program, kt�ry pobierze liczb� od u�ytkownika i wy�wietli czy jest dodatnia czy ujemna.
 void task1()
{
	int number;
	std::cout << "podaj liczbe dodatni� lub ujemn�: \n";
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
	std::cout << "podaj liczbe dodatni� lub ujemn�: \n";
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
	std::cout << "Podaj liczb�. \n";
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
		std::cout << "Najwi�ksza warto�� to " << secondNumber << "\n";
	else
		std::cout << "Najwi�ksza warto�� to " << firstNumber << "\n";

}
	void task5()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczb� \n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczb� \n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczb� \n";
	std::cin >> thirdNumber;
	if (thirdNumber > secondNumber && thirdNumber > firstNumber)
		std::cout << "Najwi�ksza warto�� to " << thirdNumber << "\n";
	else
	{
		if (secondNumber > firstNumber)
			std::cout << "Najwi�ksza warto�� to " << secondNumber << "\n";
		else
			std::cout << "Najwi�ksza warto�� to " << firstNumber << "\n";
	}




}
	void task6()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> fourthNumber;
	if (fourthNumber > firstNumber
		&& fourthNumber > secondNumber
		&& fourthNumber > thirdNumber)
		std::cout << "Najwi�ksza liczba to: " << fourthNumber << "\n";
	else
	{
		if (thirdNumber > secondNumber && thirdNumber > firstNumber)
			std::cout << "Najwi�ksza liczba to: " << thirdNumber << "\n";

		else
		{
			if (secondNumber > firstNumber)
				std::cout << "Najwi�ksza warto�� to: " << secondNumber << "\n";
			else
				std::cout << "Najwi�ksza warto�� to: " << firstNumber << "\n";
		}
	}
}

	void task7()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczb�. \n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczb�. \n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczb�. \n";
	std::cin >> thirdNumber;

	std::cout << "Liczby w kolejno�ci rosn�cej: \n";
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
// Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne. Wy�wietl odpowiedni komunikat.

	void task8()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczb� ca�kowit�: ";
	std::cin >> firstNumber;
	std::cout << "Podaj liczb� ca�kowit�: ";
	std::cin >> secondNumber;
	if (firstNumber != secondNumber)
	{
		std::cout << "Liczby nie s� r�wne";
	}
	else
	{

		std::cout << "Liczby s� r�wne";

	}
}

// Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona parzysta. Wy�wietl odpowiedni komunikat.
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

// Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
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
// Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a (w kilogramach) i wzrostu (w metrach).
// Na podstawie tych danych oblicz wska�nik BMI (Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
// BMI = masa/wzrost^2
// poni�ej 16 - wyg�odzenie
// 16 - 16.99 - wychudzenie
// 17 - 18.49 - niedowag�
// 18.5 - 24.99 - wag� prawid�ow�
// 25.0 - 29.9 - nadwag�
// 30.0 - 34.99 - I stopie� oty�o�ci
// 35.0 - 39.99 - II stopie� oty�o�ci
// powy�ej 40.0 - oty�o�� skrajn�
	void task11()
{
	float userBodyMass, userHeight, bmi;
	std::cout << "Podaj mase cia�a w kg: ";
	std::cin >> userBodyMass;
	std::cout << "Podaj sw�j wzrost w metrach : ";
	std::cin >> userHeight;
	bmi = userBodyMass / (userHeight * userHeight);
	if (bmi < 16)
	{
		std::cout << "Masz wyg�odzenie.";
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
					std::cout << "Masz wage prawid�ow�.";
				}
				else
					if (bmi <= 29.9)
					{
						std::cout << "Masz nadwag�.";

					}
					else
						if (bmi <= 34.99)
						{
							std::cout << "Masz I stopie� oty�o�ci.";

						}
						else
							if (bmi <= 39.99)
							{
								std::cout << "Masz  II stopie� oty�o�ci.";
							}

							else
								if (bmi >= 40.0)
								{
									std::cout << "Masz oty�o�� skrajn�.";
								}
	}
}
// Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
	void task12()
{
	int number;
	std::cout << "wylosuj liczbe od 1 do 7: ";
	std::cin >> number;
		switch(number)
		{
		case 1:
			std::cout << "Poniedzia�ek.";
			break;
		case 2:
			std::cout << "Wtorek";
			break;
		case 3:
			std::cout << "�roda";
			break;
		case 4:
			std::cout << "Czwartek";
			break;
		case 5:
			std::cout << "Pi�tek";
			break;
		case 6:
			std::cout << "Sobota";
			break;
		case 0: 
		case 7:
			std::cout << "Niedziela";
			break;
		default:
			std::cout << "lizcba jest wi�ksza lub mniejsza ni� liczby 1-7.";
				break;
		}
}

// Napisz program, kt�ry wczyta numer miesi�ca i wy�wietli jego s�owny odpowiednik.
	void task13()
{
	{
		int number;
		std::cout << "Podaj numer miesi�ca: ";
		std::cin >> number;
		if (number == 1)
		{
			std::cout << "Stycze�.";
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
						std::cout << "Kwiecie�";
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
										std::cout << "Sierpie�";
									}
									else
										if (number == 9)
										{
											std::cout << "Wrzesie�";
										}
										else
											if (number == 10)
											{
												std::cout << "Pa�dziernik";
											}
											else
												if (number == 11)
												{
													std::cout << "Listopad";
												}
												else
													if (number == 12)
													{
														std::cout << "Grudzie�";
													}
													else
													{
														std::cout << "nie ma takiego numeru miesi�ca.";
													}
		}
	}
}

// Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny. Wy�wietl odpowiedni komunikat.
	void task14()
{
		int year;
		
		std::cout << "Podaj rok: ";
		std::cin >> year;
		
		if (year % 400 == 0)
		{
			std::cout << year << " jest rokiem przest�pnym.";
		}
		else
		{
			std::cout << year << " nie jest rokiem przest�pnym.";
		}
}

// Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
	void task15()
	{
		
		int number, secondNumber;
		std::cout << "Podaj liczb�: ";
			std::cin >> number;
			secondNumber = number + 2 * (-number);
			
			if (number > 0)
			{
				std::cout << "warto�� bezwzgl�dna to " << number;
			}
			else
			{
				std::cout << "warto�� bezwzgl�dna to " << secondNumber;
			}
	}

// Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia. Wy�wietl odpowiedni komunikat.
	void task16()
	{
		int userAge;
		std::cout << "Podaj wiek: ";
		std::cin >> userAge;
		if (userAge >= 18)
		{
			std::cout << "Jeste� pe�noletni.";
		}
		else
		{
			std::cout << "Nie jeste� pe�noletni.";
		}
    }
// Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
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
			std::cout << "Mo�na zbudowa� z nich tr�jk�t.";
		}
		else
		{
			std::cout << "Nie mo�na zbudowa� z nich tr�jk�t.";
		}
	}
// Napisz program, kt�ry poprosi u�ytkownika o podanie oceny w skali 100-punktowej i przeliczy j� na ocen� procentow� w przedziale od 0 do 100. Wy�wietl wynik.
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
				std::cout << "Ocena dopuszczaj�ca.";
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
								std::cout << "Ocena celuj�ca.";
							}
							else
							{
								std::cout << "Nie ma takiej oceny.";
							}


		}
	}
// Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
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
				std::cout << "Ocena dopuszczaj�ca.";
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
								std::cout << "Ocena celuj�ca.";
							}
							else
							{
								std::cout << "Nie ma takiej oceny.";
							}
		}
	}
// Napisz program, kt�ry na podstawie wsp�czynnik�w r�wnania kwadratowego (a, b, c) sprawdzi, czy to r�wnanie ma rozwi�zania rzeczywiste, i je�li tak, to je obliczy.
	void task20()
	{
		double a, b, c;
		std::cout << "Podaj wsp�czynnik r�wnania kwantowego (a, b, c): ";
		std::cin >> a >> b >> c;
		double delta = b * b - 4 * a * c;
		if (delta >= 0)
		{
			double x1 = (-b + sqrt(delta)) / (2 * a); 
		}
	}
// Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
	void task21()
	{
		int day, month;
		std::cout << "Podaj dzie� miesi�ca: ";
		std::cin >> day;
		std::cout << "Podaj miesi�c: ";
		std::cin >> month;
		if (month >= 1 && month <= 12)
		{
			if (day >= 1 && day <= 31)
			{
				std::cout << "podana data jest prawid�owa.";
			}
			else
			{
				std::cout << "Podany dzie� jest nieprawid�owy.";
			}

		}
		else
		{
			"Podany miesi�c jest nieprawid�owy.";
		}

	}
/*
Priorytety operator�w:
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