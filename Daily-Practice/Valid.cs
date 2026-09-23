

using System;
class Program
{
    static void Main()
    {
        string input = Console.ReadLine();

        if (input.Contains("/") && input.Split('/')[1] == "0")
        {
            Console.WriteLine("invalid");
        }
        else
        {
            Console.WriteLine("valid");
        }
    }
}