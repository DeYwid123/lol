namespace PracticalTaskConsoleApp.Styczeń2023_1
{
    /**********************************************
    Klasa: Notatka
    Opis: Reprezentuje prosty system do tworzenia notatek,
          które posiadają unikalne ID, tytuł oraz treść.
    Pola:
      - id: prywatne, przechowuje identyfikator notatki (int)
      - tytul: chronione, przechowuje tytuł notatki (string)
      - tresc: chronione, przechowuje treść notatki (string)
      - licznikNotatek: prywatne statyczne, zlicza utworzone notatki (int)
    Autor: Daniel Pustuła
    ***********************************************/

    internal class Notatka
    {
        private static int licznikNotatek = 0;
        private int id;
        protected string tytul;
        protected string tresc;

        public Notatka(string tytul, string tresc)
        {
            licznikNotatek++;
            id = licznikNotatek;
            this.tytul = tytul;
            this.tresc = tresc;
        }

        public void WyswietlNotatke()
        {
            Console.WriteLine($"Tytuł: {tytul}");
            Console.WriteLine($"Treść: {tresc}");
        }

        public void Diagnostyczna()
        {
            Console.WriteLine($"[Diagnostyka] ID: {id}, Tytuł: {tytul}, Treść: {tresc}");
        }
    }
}
