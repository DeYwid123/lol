void ParametrTest_v1(int p)
{
    Console.WriteLine($"Przed zmianą ParametrTest_v1 {p}");
    p++;
    Console.WriteLine($"Po zmianie ParametrTest_v1 {p}");
}

//przekazywanie przez referencje
void ParametrTest_v2(ref int p)
{
    Console.WriteLine($"Przed zmianą ParametrTest_v2 {p}");
    p++;
    Console.WriteLine($"Po zmianie ParametrTest_v2 {p}");
}

//przekazywanie przez referencje
void ParametrTest_v3(out int p)
{
    //Console.WriteLine($"Przed zmianą ParametrTest_v3 {p}");
    p = 19;
    Console.WriteLine($"Po zmianie ParametrTest_v3 {p}");
}

firstNumber = 99;
Console.WriteLine($"Przed ParametrTest_v1 {firstNumber}");
ParametrTest_v1(firstNumber);
Console.WriteLine($"Po ParametrTest_v1 {firstNumber}");
Console.WriteLine($"Po ParametrTest_v1 {firstNumber}");
//ParametrTest_v1(587);

firstNumber = 99;
Console.WriteLine($"Przed ParametrTest_v2 {firstNumber}");
ParametrTest_v2(ref firstNumber);
Console.WriteLine($"Po ParametrTest_v2 {firstNumber}");
//ParametrTest_v2(ref 587);  //BŁAD

int thirdNumber;
ParametrTest_v3(out thirdNumber);
Console.WriteLine($"Po ParametrTest_v3 {thirdNumber}");
//ParametrTest_v3(out 587);  //BŁAD

//----------------------------------------------------------

string strNumber = "15";
int number = int.Parse(strNumber);

if (int.TryParse(strNumber, out int secondConvertNumber))
{
    Console.WriteLine(secondConvertNumber);
}


