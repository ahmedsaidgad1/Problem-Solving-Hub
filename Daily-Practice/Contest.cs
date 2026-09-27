using System;

class Program
{
    static void Main()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        int a = int.Parse(inputs[0]);
        int b = int.Parse(inputs[1]);
        int c = int.Parse(inputs[2]);
        int d = int.Parse(inputs[3]);

        long Misha = Math.Max(3 * a / 10, a - (a / 250) * c);
        long Vasya = Math.Max(3 * b / 10, b - (b / 250) * d);
        if (Misha > Vasya) Console.WriteLine("Misha");
        else if (Misha < Vasya) Console.WriteLine("Vasya");
        else Console.WriteLine("Tie");

    }
}