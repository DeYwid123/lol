namespace PracticalTaskConsoleApp._2025_01
{
    class Task5
    {
        static void Main(string[] args)
        {
            Console.WriteLine("=== Aplikacja: Urządzenia Domowe ===\n");

            WashingMachine pralka = new WashingMachine();
            Vacuum odkurzacz = new Vacuum();

            Console.WriteLine("Podaj numer programu prania (1..12): ");
            if (int.TryParse(Console.ReadLine(), out int numer))
            {
                int wynik = pralka.UstawNumerProgramu(numer);
                if (wynik != 0)
                    Console.WriteLine($"Numer prania: {wynik}");
                else
                    Console.WriteLine("Numer prania: nie podano");
            }
            else
            {
                Console.WriteLine("Numer prania: nie podano");
            }

            Console.WriteLine();

            Console.WriteLine("Test odkurzacza: włączanie 3 razy...");
            odkurzacz.On();
            odkurzacz.On();
            odkurzacz.On();

            Console.WriteLine();

            odkurzacz.ShowInfo("Odkurzacz wyładował się");

            Console.WriteLine();

            odkurzacz.Off();

            Console.WriteLine("\nKoniec działania programu.");
            Console.ReadKey();
        }
    }
}
