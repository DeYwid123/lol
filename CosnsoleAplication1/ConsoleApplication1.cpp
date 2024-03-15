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
    while(b != 0)
    {
        int TmpA = a;
        a = b;
        b = TmpA % b;
    }
    std::cout << "NWD " << a << "\n";
}

int main()
{
    task1();
}

