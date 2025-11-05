namespace PracticalTaskConsoleApp.Czerwiec2022_2
{
    class Program
    {
        static void main(string[] args)
        {
            Osoba osoba1 = new Osoba();
            Osoba osoba2 = new Osoba(1, "Anna");
            Osoba osoba3 = new Osoba(osoba2);

            osoba1.Przywitaj("Krzysztof");
            osoba2.Przywitaj("Ewa");
            osoba1.Przywitaj("Jan");
            Console.WriteLine($"Liczba instancji: (Osoba.liczbaInstancji)");
            Console.ReadKey();
        }
    }
}

