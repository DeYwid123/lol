#include <iostream>
/*
*

*

* .

*

*

*

* 
* 

* Napisz program, który poprosi użytkownika o podanie trzech liczb (a, b, c) i obliczy średnią arytmetyczną tych liczb. Następnie wyświetli wynik.

* Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych. Następnie wykona operacje (+, -, *, /) i wyświetli wyniki.

* Napisz program, który poprosi użytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyświetlając wynik.

* Napisz program, który poprosi użytkownika o podanie współrzędnych (x1, y1) i (x2, y2) dwóch punktów w układzie kartezjańskim, a następnie obliczy odległość między nimi, wyświetlając wynik.


*/

//Napisz program, który poprosi użytkownika o podanie długości boku a i b prostokąta, a następnie obliczy i wyświetli pole prostokąta.
void task1()
{
	float lenghtA;
	float lenghtB;
	float areaOf​​ARectangle;

	std::cout << "Podaj bok a.""\n";
	std::cin >> lenghtA;
	std::cout << "Podaj bok b.""\n";
	std::cin >> lenghtB;
	areaOf​​ARectangle = lenghtA * lenghtB;

	std::cout << "pole wynosi:" << areaOf​​ARectangle << "\n";
}

//Napisz program, który poprosi użytkownika o podanie długości podstawy i wysokości trójkąta, a następnie obliczy pole tego trójkąta, wyświetlając wynik.
void task2()
{
	float baseLength; "\n";
	float heightOfTheTriangle;
	float areaOfATriangle;

	std::cout << "Podaj długość podstawy trójkąta""\n";
	std::cin >> baseLength;
	std::cout << "Podaj długość wysokości trójkąta""\n";
	std::cin >> heightOfTheTriangle;
	areaOfATriangle = (baseLength * heightOfTheTriangle) / 2;

	std::cout << "pole trójkąta wynosi: " << areaOfATriangle << "\n";
}
//Napisz program, który poprosi użytkownika o podanie promienia koła i obliczy pole tego koła, wyświetlając wynik
void task3()
{
	std::cout << "Podaj promień koła \n";
	float radius;
	std::cin >> radius;
	float areaOfCircle;

	areaOfCircle = 3.14 * radius * radius;
	std::cout << "Pole koła wynosi: " << areaOfCircle << "\n";
}
//Napisz program, który poprosi użytkownika o podanie długości podstawy a, podstawy b i wysokości h trapezu, a następnie obliczy pole tego trapezu, wyświetlając wynik.
void task4()
{
	std::cout << "Podaj długość podstawy a:  \n";
	float sideA;
	std::cin >> sideA;
	std::cout << "Podaj długość podstawy b:  \n";
	float sideB;
	std::cin >> sideB;
	std::cout << "Podaj długość wysokości:  \n";
	float height;

	std::cin >> height;
	float areaOfTrapez;
	areaOfTrapez = (sideA = sideB) * height / 2;

	std::cout << "Pole trabezu wynosi: " << areaOfTrapez << "\n";
}
//Napisz program, który poprosi użytkownika o podanie długości krawędzi sześcianu i obliczy jego objętość, wyświetlając wynik.
void task5()
{
	std::cout << "Podaj długość krawędzi. \n";
	float edge;
	std::cin >> edge;
	float areaOfCube;
	areaOfCube = edge * edge * edge;
	std::cout << "objętość sześcianu wynosi: " << areaOfCube << "\n";
}
//Napisz program, który poprosi użytkownika o podanie temperatury w stopniach Celsiusza, a następnie przeliczy ją na stopnie Fahrenheita i wyświetli wynik.
void task6()
{
	std::cout << "Podaj temperature w stopniach Celcjusza: ";
	float celciusTemperature;
	std::cin >> celciusTemperature;
	float fahrenheitTemperature;

	fahrenheitTemperature = (celciusTemperature * 2) + 30;
	std::cout << "temperatura w stopniach farenheita wynosi: " << fahrenheitTemperature << "°F" << "\n";
}
//Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
void task7()
{
	std::cout << "Podaj kwote w złotówkach: ";
		float amountInPln;
		std::cin >> amountInPln;
		float amountInDollars;
		amountInDollars = 0.25 * amountInPln;
		std::cout << "Kwota w dolarach wynosi: " << amountInDollars << "$" <<"\n";
}
//Napisz program, który poprosi użytkownika o podanie dwóch liczb(a, b) i obliczy średnią arytmetyczną tych liczb.Następnie wyświetli wynik.
void task8()
{
	float result;
	std::cout << "Podaj liczbe a: ";
	float numberA;
	std::cin >> numberA;

	std::cout << "Podaj liczbe b: ";
	float numberB;
	std::cin >> numberB;
	result = (numberA + numberB) / 2;
		std::cout << "średnia artmetyczna wynosi: " << result;
	
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
	//task8();

}


/*
Algorytm - skończony zbiór instrukcji realizujących postawione przed nim zadanie.
kolejność instrukcji w zbiorze jest określona.
sposoby zapisu:
*w punktach
*opis słowny
*język programowania lub pseudokod
*zbiór rysunków
*schemat blokowy

Zmienna - jest to pewien obszar w pamięci, służący do przechowywania danych. Te dane można modyfikować. Zmienna pozwala przechować tylko jedną wartość w danym momencie czasu.

Deklaracja zmiennej-moment jej utworzenia

typ_zmiennej nazwa_zmiennej;

Typ zmiennej - mówi o wielkości obszaru w pamięci i o rodzaju przechowywania danych

short           liczby całkowite ze znakiem  2 bajty    <-32 768; 32 767>
int/long        liczby całkowite ze znakiem  4 bajty    <-2 147 483 648; 2 147 483 647>
long long       liczby całkowite ze znakiem  8 bajtów   <-9 233 372 036 854 775 808, 9 233 372 036 854 775 807>

Jeżeli przed powyższymi typami dodamy słowo "unsigned" to zakres jest od zera do podwojonego zakresu górnego plus 1

float           liczby rzeczywiste ze znakiem 2 bajty
double          liczby rzeczywiste ze znakiem 8 bajtów
long double     liczby rzeczywiste ze znakiem 12 bajtów

Nazwa zmiennej - nazwa obszaru w pamięci. Poprzez tą nazwę odwołujemy się do tego obszaru.

Wymagania kompilatora względem nazwy:
* użycie tylko dozwolonych znaków
   -alfabet angielski a-z oraz A-Z
   -cyfry arabskie 0-9
   -podkreślenia (podłoga) _
* pierwszym znakiem nie może być cyfra
* nie może to być słowo kluczowe danego języka programowania
* musi być unikalna w danej widoczności

Wymagania programistów:
* jeśli nazwa składa się z wielu wyrazów to zamiast spacji:
   -używamy znaku podkreślenia np. first_number_from_user
   -stosujemy camel case, czyli piszemy wszystko razem a słowa (zaczynamy od drugiego) zaczynamy z dużej litery np. firstNumberFromUser
* nazwa zmiennej musi oddawać charakter przechowywanych danych, czyli mieć znaczenie
* nazwy po angielsku !!!!


*/

