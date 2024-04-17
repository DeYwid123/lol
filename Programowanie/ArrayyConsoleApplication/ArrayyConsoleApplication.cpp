#include <iostream>
void task1()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 5;

	int numbers[ARRAY_NUMBERS_SIZE];

	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		std::cout << "Podaj: " << (i + 1) << " liczbê \n";
		std::cin >> numbers[i];
	}
	for (int i = ARRAY_NUMBERS_SIZE - 1; i >= 0; i--)
	{
		std::cout << numbers[i] << ", ";
	}
}
void task2()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 10;

	int numbers[ARRAY_NUMBERS_SIZE];
	srand(time(NULL));
	std::cout << "Liczby w kolekcji: \n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 101;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n\n";
	int sum = numbers[0];
	for (int i = 1; i < ARRAY_NUMBERS_SIZE; i++)
	{
		sum = sum + numbers[i];
	}
	double avg = sum * 1.0 / ARRAY_NUMBERS_SIZE;
	std::cout << "Suma: " << sum << "\n";
	std::cout << "Œrednia to: " << avg << "\n";
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	task2();
}