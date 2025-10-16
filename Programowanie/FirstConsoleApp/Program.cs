using System;
using System.Windows.Forms;
using static System.Net.Mime.MediaTypeNames;

namespace SimpleCalculator
{
    public class CalculatorForm : Form
    {
        private TextBox display;
        private Button[] buttons;
        private string currentInput = "";
        private double result = 0;
        private string lastOperator = "";

        public CalculatorForm()
        {
            this.Text = "Prosty Kalkulator";
            this.Width = 250;
            this.Height = 350;

            display = new TextBox { ReadOnly = true, Location = new System.Drawing.Point(10, 10), Width = 210 };
            this.Controls.Add(display);

            string[] btnTexts = { "7", "8", "9", "/", "4", "5", "6", "*", "1", "2", "3", "-", "0", "C", "=", "+" };
            buttons = new Button[btnTexts.Length];

            for (int i = 0; i < btnTexts.Length; i++)
            {
                buttons[i] = new Button
                {
                    Text = btnTexts[i],
                    Width = 50,
                    Height = 40,
                    Left = 10 + (i % 4) * 55,
                    Top = 40 + (i / 4) * 45
                };
                buttons[i].Click += Button_Click;
                this.Controls.Add(buttons[i]);
            }
        }

        private void Button_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            string text = btn.Text;

            if (char.IsDigit(text, 0))
            {
                currentInput += text;
                display.Text = currentInput;
            }
            else if (text == "C")
            {
                currentInput = "";
                result = 0;
                lastOperator = "";
                display.Text = "";
            }
            else if (text == "=")
            {
                Calculate();
                display.Text = result.ToString();
                currentInput = "";
                lastOperator = "";
            }
            else // Operator
            {
                if (!string.IsNullOrEmpty(currentInput))
                {
                    Calculate();
                    lastOperator = text;
                    display.Text = result.ToString();
                    currentInput = "";
                }
                else
                {
                    lastOperator = text;
                }
            }
        }

        private void Calculate()
        {
            double num = 0;
            double.TryParse(currentInput, out num);

            if (string.IsNullOrEmpty(lastOperator))
            {
                result = num;
            }
            else
            {
                switch (lastOperator)
                {
                    case "+": result += num; break;
                    case "-": result -= num; break;
                    case "*": result *= num; break;
                    case "/": result = num != 0 ? result / num : 0; break;
                }
            }
        }

        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.Run(new CalculatorForm());
        }
    }
}