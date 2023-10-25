#include <iostream>

int main()
{ 
	short ageFromUser;
    std::cout << "Podaj swój wiek\n";
	std::cin >> ageFromUser;

	std::cout << "Masz " << ageFromUser << "lat.\n";
}
void task2()
{
	float lenghtInMeterFromUser;
	std::cout << "Podaj d³ugoœæ w metrach";
		std::cin >> lenghtInMeterFromUser;
		float lenghtInCentimeter;
		lenghtInCentimeter = lenghtInMeterFromUser / 100;
 




}

/*
Algorytm - zbiór instrukcji realizuj¹cych postawione przed nim zadanie.
sposoby zapisu:
*w punktach
*opis s³owny
*jêzyk programowania lub pseudokod
*zbiór rysunków
*schemat blokowy

Zmienna - jest to pewien obszar w pamiêci, s³u¿¹cy do przechowywania danych. Te dane mo¿na modyfikowaæ. Zmienna pozwala przechowaæ tylko jedn¹ wartoœæ w danym momencie czasu.

Deklaracja zmiennej-moment jej utworzenia

typ_zmiennej nazwa_zmiennej;

Typ zmiennej - mówi o wielkoœci obszaru w pamiêci i o rodzaju przechowywania danych

short           liczby ca³kowite ze znakiem  2 bajty    <-32 768; 32 767>
int/long        liczby ca³kowite ze znakiem  4 bajty    <-2 147 483 648; 2 147 483 647>
long long       liczby ca³kowite ze znakiem  8 bajtów   <-9 233 372 036 854 775 808, 9 233 372 036 854 775 807>

Je¿eli przed powy¿szymi typami dodamy s³owo "unsigned" to zakres jest od zera do podwojonego zakresu górnego plus 1

float           liczby rzeczywiste ze znakiem 2 bajty
double          liczby rzeczywiste ze znakiem 8 bajtów
long double    liczby rzeczywiste ze znakiem 12 bajtów

Nazwa zmiennej - nazwa obszaru w pamiêci. Poprzez t¹ nazwê odwo³ujemy siê do tego obszaru.

Wymagania kompilatora wzglêdem nazwy:
* u¿ycie tylko dozwolonych znaków
   -alfabet angielski a-z orza A-Z
   -cyfry arabskie 0-9
   -podkreœlenia (pod³oga) _
* pierwszym znakiem nie mo¿e byæ cyfra
* nie mo¿e to byæ s³owo kluczowe danego jêzyka programowania
* musi byæ unikalna w danej widocznoœci 

Wymagania programistów:
* jeœli nazwa sk³ada siê z wielu wyrazów to zamiast spacji:  
   -u¿ywamy znaku podkreœlenia np. first_number_from_user
   -stosujemy camel case, czyli piszemy wszystko razem a s³owa (zaczynamy od drugiego) zaczynamy z du¿ej litery np. firstNumberFromUser
* nazwa zmiennej musi oddawaæ charakter przechowywanych danych, czyli mieæ znaczenie 
* nazwy po angielsku !!!!


*/

