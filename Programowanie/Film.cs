namespace PracticalTaskConsoleApp.Listopad2025_6
{
    /******************************************************
    nazwa klasy: Video
    pola:
    *tytulFilmu - pole chronione przechowujące nazwę filmu (string)
    *iloscWypozyczen - pole chronione przechowujące liczbę wypożyczeń (int)
    metody: 
    *UstawTytulFilmu - metoda nic nie zwraca (void), ustawia tytuł filmu na wartość przekazaną
       w parametrze, o ile długość tytułu nie przekracza 25 znaków;
       w przeciwnym wypadku zgłaszany jest wyjątek ArgumentException
    *PobierzTytulFilmu - metoda zwraca tytuł filmu jako string
    *PobierzIloscWypozyczen - metoda zwraca bieżącą liczbę wypożyczeń jako int
    *ZarejestrujWypozyczenie - metoda nic nie zwraca (void), zwiększa liczbę wypożyczeń o 1
    informacje: Klasa reprezentuje pojedynczy film w katalogu wypożyczalni
    autor: Daniel Pustuła
    *****************************************************/

    internal class Video
    {
        protected string tytulFilmu;
        protected int iloscWypozyczen;

        public Video()
        {
            tytulFilmu = string.Empty;
            iloscWypozyczen = 0;
        }

        public void UstawTytulFilmu(string nowyTytul)
        {
            if (string.IsNullOrWhiteSpace(nowyTytul))
                throw new ArgumentException("Tytuł filmu nie może być pusty.");

            if (nowyTytul.Length <= 25)
            {
                tytulFilmu = nowyTytul;
            }
            else
            {
                throw new ArgumentException("Tytuł filmu może mieć maksymalnie 25 znaków.");
            }
        }

        public string PobierzTytulFilmu()
        {
            return tytulFilmu;
        }

        public int PobierzIloscWypozyczen()
        {
            return iloscWypozyczen;
        }

        public void ZarejestrujWypozyczenie()
        {
            iloscWypozyczen++;
        }
    }
}
