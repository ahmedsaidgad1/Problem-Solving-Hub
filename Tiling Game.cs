using System;

class Program
{
    static void Main()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        int m = int.Parse(inputs[0]);
        int n = int.Parse(inputs[1]);


        Console.WriteLine(m * n);
    }
}