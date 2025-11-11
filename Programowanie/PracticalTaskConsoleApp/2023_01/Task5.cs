namespace PracticalTaskConsoleApp.Styczeń2023_1
{
    internal class Task2
    {
        public void Task()
        {
            Notatka pierwszaNotatka = new Notatka("Zakupy", "Kupić mleko, chleb i jajka.");
            Notatka drugaNotatka = new Notatka("Praca", "Zakończyć raport do piątku.");

            Console.WriteLine("=== Pierwsza notatka ===");
            pierwszaNotatka.WyswietlNotatke();
            pierwszaNotatka.Diagnostyczna();

            Console.WriteLine("\n=== Druga notatka ===");
            drugaNotatka.WyswietlNotatke();
            drugaNotatka.Diagnostyczna();
        }
    }
}
