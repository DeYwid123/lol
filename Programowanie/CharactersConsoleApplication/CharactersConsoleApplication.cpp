#include <iostream>
//napisz program kt�ry pobierze znak od u�ytkownika i go wy�wietli
void task1()
{
	char charactersFromUser;
	std::cout << "Podaj jeden znak: \n";
	std::cin >> charactersFromUser;
	std::cout << "podano: " << charactersFromUser;
}
void task2()
{
	char characterFromUser;
	std::cout << "Podaj jeden znak:\n";
	std::cin >> characterFromUser;
	if (characterFromUser == 'a'
		|| characterFromUser == 'b'
		|| characterFromUser == 'c'
		|| characterFromUser == 'd'
		//...
		|| characterFromUser == 'z')
	{
		std::cout << "Poda�e� ma�� liter� alfabetu";
	}
	else
	{
		std::cout << "Poda�e� inny znak";
	}
}
void task3()
{
	char characterFromUser;
	std::cout << "Podaj jeden znak:\n";
	std::cin >> characterFromUser;
	if (characterFromUser >= 97
		&& characterFromUser)
	{
		std::cout << "Poda�e� ma�� liter� alfabetu";
	}
	else
	{
		std::cout << "Poda�e� inny znak";
	}
}
void task4()
{
	std::string userName;
	std::cout << "Podaj swoje imi� \n";
	std::cin >> userName;
	std::cout << "Witaj " << userName;
}
void task5()
{
	std::string password;
	std::cout << "podaj has�o \n";
	std::cin >> password;
	if (password == "abc123")
	{
		std::cout << "has�o poprawne ";
	}
	else
	{
		std::cout << "has�o niepoprawne ";
	}
}
void task6()
{
	std::string textFromUser;
	std::cout << "Podaj tekst: \n";
	std::cin >> textFromUser;
	std::cout << "Podany tekst " << textFromUser << "\n";
	std::cout << "Pierwszy znak w tek�cie: " << textFromUser[0] << "\n";
	std::cout << "Drugi znak w tek�cie: " << textFromUser[1] << "\n";
	int length = textFromUser.length();
	std::cout << "D�ugo�� �a�cucha znak�w: " << length << "\n";
	std::cout << "Ostatni znak w tek�cie: " << textFromUser[length - 1] << "\n";

	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (textFromUser[1] == 'a')
		
			counter++;
	}
	std::cout << "Ma�ych liter 'a' jest: " << counter;
}
//Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.Nast�pnie skonwertuj t� liczb� na system dw�jkowy(binarny) i wy�wietl wynik.
void task7()
{
	int number;
	std::cout << "Podaj liczb�: \n";
	std::cin >> number;
	int tmpNumber = number;
	std::string binNumber = "";
	do
	{
		int rest = tmpNumber % 2;
		tmpNumber = tmpNumber / 2;
		if (rest == 0)
			binNumber = "0" + binNumber;
		else
			binNumber = "1" + binNumber;
	} while (tmpNumber != 0);
	
	std::cout << "Liczba " << number << " binarnie to " << binNumber;
}

//Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym. Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
//Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
//Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
//Program wyci�gaj�cy informacje z numeru PESEL
//Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).

//Napisz program kt�ry pobiera od u�ytkownika ci�g znak�w
//i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu
void task8()
{

}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	task8();
}
/*
* #include <iostream>
void task1()
{
	int numbers[4];
	
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Podaj: " << (i+1) << " liczb� \n";
		std::cin >> numbers[i];
	}
	for (int i = 3; i >= 0; i--)
	{
		std::cout << numbers[i] << " ,";
	}
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();
}
*/
