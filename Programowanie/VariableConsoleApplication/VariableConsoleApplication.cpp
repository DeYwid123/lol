#include <iostream>

int main()
{ 
	short ageFromUser;
    std::cout << "Podaj sw�j wiek\n";
	std::cin >> ageFromUser;

	std::cout << "Masz " << ageFromUser << "lat.\n";
}
void task2()
{
	float lenghtInMeterFromUser;
	std::cout << "Podaj d�ugo�� w metrach";
		std::cin >> lenghtInMeterFromUser;
		float lenghtInCentimeter;
		lenghtInCentimeter = lenghtInMeterFromUser / 100;
 




}

/*
Algorytm - zbi�r instrukcji realizuj�cych postawione przed nim zadanie.
sposoby zapisu:
*w punktach
*opis s�owny
*j�zyk programowania lub pseudokod
*zbi�r rysunk�w
*schemat blokowy

Zmienna - jest to pewien obszar w pami�ci, s�u��cy do przechowywania danych. Te dane mo�na modyfikowa�. Zmienna pozwala przechowa� tylko jedn� warto�� w danym momencie czasu.

Deklaracja zmiennej-moment jej utworzenia

typ_zmiennej nazwa_zmiennej;

Typ zmiennej - m�wi o wielko�ci obszaru w pami�ci i o rodzaju przechowywania danych

short           liczby ca�kowite ze znakiem  2 bajty    <-32 768; 32 767>
int/long        liczby ca�kowite ze znakiem  4 bajty    <-2 147 483 648; 2 147 483 647>
long long       liczby ca�kowite ze znakiem  8 bajt�w   <-9 233 372 036 854 775 808, 9 233 372 036 854 775 807>

Je�eli przed powy�szymi typami dodamy s�owo "unsigned" to zakres jest od zera do podwojonego zakresu g�rnego plus 1

float           liczby rzeczywiste ze znakiem 2 bajty
double          liczby rzeczywiste ze znakiem 8 bajt�w
long double    liczby rzeczywiste ze znakiem 12 bajt�w

Nazwa zmiennej - nazwa obszaru w pami�ci. Poprzez t� nazw� odwo�ujemy si� do tego obszaru.

Wymagania kompilatora wzgl�dem nazwy:
* u�ycie tylko dozwolonych znak�w
   -alfabet angielski a-z orza A-Z
   -cyfry arabskie 0-9
   -podkre�lenia (pod�oga) _
* pierwszym znakiem nie mo�e by� cyfra
* nie mo�e to by� s�owo kluczowe danego j�zyka programowania
* musi by� unikalna w danej widoczno�ci 

Wymagania programist�w:
* je�li nazwa sk�ada si� z wielu wyraz�w to zamiast spacji:  
   -u�ywamy znaku podkre�lenia np. first_number_from_user
   -stosujemy camel case, czyli piszemy wszystko razem a s�owa (zaczynamy od drugiego) zaczynamy z du�ej litery np. firstNumberFromUser
* nazwa zmiennej musi oddawa� charakter przechowywanych danych, czyli mie� znaczenie 
* nazwy po angielsku !!!!


*/

