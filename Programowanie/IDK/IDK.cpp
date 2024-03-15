#include <iostream>
//napisz program kt�ry policzy NWD dw�ch liczb
//NWD(a,b) = a je�li b=0
//NWD(a,b) = NWD(b, a%b) je�li b != 0
void task1()
{
    int a;
    std::cout << "Podaj pierwsz� liczb�\n";
    std::cin >> a;
    int b;
    std::cout << "Podaj drug� liczb�\n";
    std::cin >> b;
    while (b != 0)
    {
        int TmpA = a;
        a = b;
        b = TmpA % b;
    }
    std::cout << "NWD " << a << "\n";
}
void task2()
{
    int number;
    std::cout << "Podaj liczbę dodatnią \n";
    std::cin >> number;
    int tmpNumber = number;
    int reverseNumber = 0;
    while (tmpNumber > 0)
    {
        int rest = tmpNumber % 10;
        reverseNumber = reverseNumber * 10 + rest;
        tmpNumber = tmpNumber / 10;
    }
    if (number == reverseNumber)
    {
        std::cout << "liczba jest palindromem";
    }
    else
    {
        std::cout << "liczba nie jest palindromem";
    }
}
void task3()
{
    int number;
    std::cout << "Podaj liczbę dodatnią \n";
    std::cin >> number;
    int counter;
        for (counter = 0; counter != number; counter++)
        {
            std::cout << "Hello World\n";
        }
}
//Napisz program mtóry drukuje prostokąt z literek X. Wysokość i szerokość prostokąta wczytujemy z klawiatury.
//Poniższy prostokąt ma wymiary szer=10, wys=4.
//XXXXXXXXXX
//XXXXXXXXXX
//XXXXXXXXXX
//XXXXXXXXXX
void task4()
{
    int width, height;
    std::cout << "Podaj wysokość prostokąta";
    std::cin >> height;
    std::cout << "Podaj szerokość prostokąta";
    std::cin >> width;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << "X";
        }
        std::cout << "\n";
    }
    
}
/*


* Program, kóry wyświetli poniższe wzory:
    ****     *       54321        121212        122333
    ***     ***      65432        212121        223334444
    **     *****     76543        121212        333444455555
    *     *******    87654        212121        444455555666666

* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.

* Napisz program, który rozkłoży liczbę na czynniki pierwsze.

*/
// Program obliczający sumę liczb od 1 do 100
void task5()
{
    int amount = 0;
    for (int i = 1; i <= 100; i++)
    {
        amount += i;
    }
    std::cout << "Suma liczb od 1 do 100 wynosi: " << amount <<  "\n";
}
//Program sprawdzający czy podana liczba jest liczbą doskonałą(czyli taką, której suma dzielników(z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
void task6()
{
    int number, amountOfDivisor = 0, perfectNumber = 0;

    std::cout << "Podaj liczbę dodatnią \n";
    std::cin >> number;
    for (int i = number; i <= number / 2; i++)
    {
        if (number % 1 == 0)
        {
            amountOfDivisor += i;
        }
    }
    amountOfDivisor == number ? 1 : 0;
    if (perfectNumber == number)
    {
        std::cout << number << " jest liczbą doskonałą" << "\n";
    }
    else
    {
        std::cout << number << " nie jest liczbą doskonałą" << "\n";
    }
}
//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task7()
{
    int result = 1;
    for (int i = 1; i <= 10; i++)
    {
        result *= i;
        std::cout << "Silnia z " << i << " wynosi " << result << "\n";
    }
}
//Program obliczający n!.
void task8()
{
    int number, result = 1;
    std::cout << "Podaj liczbę: \n";
    std::cin >> number;
    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }
    std::cout << "n! wynosi: " << result;
}
//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task9()
{
    for (int i = 1; i <= 10; i++)
    {
        std::cout << "Kwadrat liczby " << i << " wynosi " << i * i << "\n";
    }
}
//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task10()
{
    int number = 1;
    for (int i = 1; i <= 10; i++)
    {
        
       int result = number* i;
       std::cout << number << " pomnożone przez " << i << " wynosi " << result << "\n";
    }
}
//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task11()
{
    int number,rest;
    for(int i = 1; i <= 100; i++)
    {
        rest = i % 3;
        if (rest == 0)
        {
            std::cout << "liczba " << i << " dzieli się przez 3 \n";
        }
    }
}
//Program obliczający sumę kwadratów liczb od 1 do 10
void task12()
{
    int rest = 0;
    for (int i = 1; i <= 10; i++)
    {
        rest += i *i;
    }
    std::cout << "Suma kwadratów wynosi liczby wynosi " << rest  << "\n";
}
//Program, który wczyta podstawę oraz wykładnik oraz wyliczy wynik.
void task13()
{
    int number, exponent;
    std::cout << "Podaj podstawę : \n";
    std::cin >> number;
    std::cout << "Podaj wykładnik : \n";
    std::cin >> exponent;
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= number;
    }
    std::cout << "Wynik to " << result;
}
//Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu(ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task14()
{

}

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
    task14();

}

