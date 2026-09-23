using System;
using System.Collections.Specialized;

internal class Program
{
    static void Main()
    {
        string input = Console.ReadLine();

        if (string.IsNullOrEmpty(input)) return;

        char ch = input[0];

        int ASCII_Value = (int)ch;
        if (ASCII_Value >= 65 && ASCII_Value <= 90)
        {
            Console.WriteLine("capital " + (ASCII_Value - 65));
        }
        else if (ASCII_Value >= 97 && ASCII_Value <= 122)
        {
            Console.WriteLine("small " + (ASCII_Value - 97));
        }
        else if (ASCII_Value >= 48 && ASCII_Value <= 57)
        {
            Console.WriteLine("digit");
        }
        else
        {
            Console.WriteLine("symbol");
        }


    }
}