using System;

internal class Program
{
    static void Main()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        long x = long.Parse(inputs[0]);
        long y = long.Parse(inputs[1]);

        Console.WriteLine("{0} + {1} = {2}", x, y, (x + y));
        Console.WriteLine("{0} - {1} = {2}", x, y, (x - y));
        Console.WriteLine("{0} * {1} = {2}", x, y, (x * y));
        Console.WriteLine("{0} / {1} = {2}", x, y, (x / y));
        Console.WriteLine("{0} % {1} = {2}", x, y, (x % y));
    }
}