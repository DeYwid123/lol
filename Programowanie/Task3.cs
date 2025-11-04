namespace PracticalTaskConsoleApp.Listopad2025_6
{
    internal class Task3
    {
        public void Task()
        {
            Video video = new Video();

            Console.WriteLine("Początkowa liczba wypożyczeń: " + video.PobierzIloscWypozyczen());
            Console.WriteLine("Początkowy tytuł: " + video.PobierzTytulFilmu());

            video.UstawTytulFilmu("Incepcja");
            Console.WriteLine("Tytuł po ustawieniu: " + video.PobierzTytulFilmu());

            Console.WriteLine("Liczba wypożyczeń przed rejestracją: " + video.PobierzIloscWypozyczen());
            video.ZarejestrujWypozyczenie();
            Console.WriteLine("Liczba wypożyczeń po rejestracji: " + video.PobierzIloscWypozyczen());
        }
    }
}
