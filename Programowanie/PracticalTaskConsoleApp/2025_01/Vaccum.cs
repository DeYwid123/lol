namespace PracticalTaskConsoleApp._2025_01
{
    
    public class Vacuum : Device
    {
        private bool stan = false;

        public void On()
        {
            if (!stan)
            {
                stan = true;
                ShowInfo("Odkurzacz włączono");
            }
        }

        public void Off()
        {
            if (stan)
            {
                stan = false;
                ShowInfo("Odkurzacz wyłączono");
            }
        }
    }
}
