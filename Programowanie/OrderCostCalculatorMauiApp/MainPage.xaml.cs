/*
Zadanie – Kalkulator kosztu zamówienia
Napisz aplikację w .NET MAUI, która pozwala obliczyć koszt prostego zamówienia.

Aplikacja powinna zawierać:
- pole Nazwa produktu (Entry),
- pole Cena za sztukę (Entry),
- wybór liczby sztuk za pomocą kontrolki Stepper (od 1 do 10),
- Label wyświetlający aktualnie wybraną liczbę sztuk,
- przełącznik Dostawa ekspresowa (Switch),
- przycisk Oblicz,
- Label wyświetlający podsumowanie zamówienia i końcową cenę.

Zasady obliczeń:
Koszt zamówienia oblicz według wzoru:
cena za sztukę × liczba sztuk
Jeśli użytkownik włączy dostawę ekspresową, do ceny zamówienia należy doliczyć 15 zł.

Przykład:
Produkt: Słuchawki
Cena za sztukę: 120 zł
Liczba sztuk: 3
Dostawa ekspresowa: TAK  
Wynik: 375 zł



Dla chętnych: zamiast przełącznika dostawy ekspresowej dodaj Picker, który pozwala wybrać sposób dostawy:
- Odbiór osobisty – 0 zł
- Kurier – 12 zł
- Paczkomat – 10 zł
Wybrany sposób dostawy uwzględnij podczas obliczania końcowej ceny zamówienia.
*/

namespace OrderCostCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }

        private void OnQuantityChanged(object sender, ValueChangedEventArgs e)
        {
            QuantityLabel.Text = ((int)e.NewValue).ToString();
        }

        private void OnCalculateClicked(object sender, EventArgs e)
        {
            string product = ProductNameEntry.Text;

            if (decimal.TryParse(PriceEntry.Text, out decimal price))
            {
                int quantity = (int)QuantityStepper.Value;
                decimal total = price * quantity;

                if (ExpressSwitch.IsToggled)
                {
                    total += 15;
                }

                ResultLabel.Text = $"Produkt: {product}\nWynik: {total} zł";
            }
            else
            {
                ResultLabel.Text = "Podaj poprawną cenę!";
            }
        }
    }
}