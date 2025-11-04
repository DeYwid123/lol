namespace PracticalTaskConsoleApp._2025_01
{
    public class WashingMachine : Device
    {
        private int numerProgramu = 0;

        public int UstawNumerProgramu(int numer)
        {
            if (numer >= 1 && numer <= 12)
            {
                numerProgramu = numer;
            }
            else
            {
                numerProgramu = 0;
            }

            return numerProgramu;
        }
    }
}
