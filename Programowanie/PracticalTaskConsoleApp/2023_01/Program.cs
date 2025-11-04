using PracticalTasksConsoleApp.Styczeń2023_1;

namespace PracticalTasksConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Task1 task1 = new Task1();
            task1.Taks();
        }
    }
}

namespace PracticalTasksConsoleApp.Styczeń2023_1
{
    class Task1
    {
        public void Taks()
        {
            Console.WriteLine("Algorytm Euklidesa - obliczanie NWD(a, b)");
            try
            {
                Console.Write("Podaj liczbę a: ");
                int a = int.Parse(Console.ReadLine());
                Console.Write("Podaj liczbę b: ");
                int b = int.Parse(Console.ReadLine());
                int wynik = NWD(a, b);
                Console.WriteLine($"Największy wspólny dzielnik (NWD) = {wynik}");
            }
            catch (FormatException)
            {
                Console.WriteLine("Błąd: wprowadzono niepoprawny format liczby.");
            }
            catch (ArgumentException e)
            {
                Console.WriteLine($"Błąd: {e.Message}");
            }
            catch (Exception e)
            {
                Console.WriteLine($"Nieoczekiwany błąd: {e.Message}");
            }
        }

        private int NWD(int a, int b)
        {
            if (a <= 0 || b <= 0)
                throw new ArgumentException("Liczby muszą być całkowite i dodatnie.");
            while (a != b)
            {
                if (a > b)
                    a = a - b;
                else
                    b = b - a;
            }
            return a;
        }
    }
}
