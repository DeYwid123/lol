#include <iostream>
//napisz program który pobierze znak od u¿ytkownika i go wyœwietli
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
		std::cout << "Poda³eœ ma³¹ literê alfabetu";
	}
	else
	{
		std::cout << "Poda³eœ inny znak";
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
		std::cout << "Poda³eœ ma³¹ literê alfabetu";
	}
	else
	{
		std::cout << "Poda³eœ inny znak";
	}
}
void task4()
{
	std::string userName;
	std::cout << "Podaj swoje imiê \n";
	std::cin >> userName;
	std::cout << "Witaj " << userName;
}
void task5()
{
	std::string password;
	std::cout << "podaj has³o \n";
	std::cin >> password;
	if (password == "abc123")
	{
		std::cout << "has³o poprawne ";
	}
	else
	{
		std::cout << "has³o niepoprawne ";
	}
}
void task6()
{
	std::string textFromUser;
	std::cout << "Podaj tekst: \n";
	std::cin >> textFromUser;
	std::cout << "Podany tekst " << textFromUser << "\n";
	std::cout << "Pierwszy znak w tekœcie: " << textFromUser[0] << "\n";
	std::cout << "Drugi znak w tekœcie: " << textFromUser[1] << "\n";
	int length = textFromUser.length();
	std::cout << "D³ugoœæ ³añcucha znaków: " << length << "\n";
	std::cout << "Ostatni znak w tekœcie: " << textFromUser[length - 1] << "\n";

	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (textFromUser[1] == 'a')
		
			counter++;
	}
	std::cout << "Ma³ych liter 'a' jest: " << counter;
}
//Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym.Nastêpnie skonwertuj tê liczbê na system dwójkowy(binarny) i wyœwietl wynik.
void task7()
{
	int number;
	std::cout << "Podaj liczbê: \n";
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

//Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
//Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
//Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
//Program wyci¹gaj¹cy informacje z numeru PESEL
//Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).

//Napisz program który pobiera od u¿ytkownika ci¹g znaków
//i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu
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
		std::cout << "Podaj: " << (i+1) << " liczbê \n";
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
