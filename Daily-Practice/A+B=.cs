using System;

class Program
{
    static void Main()
    {
        long x = Convert.ToInt64(Console.ReadLine());
        long y = Convert.ToInt64(Console.ReadLine());

        long a = (x + y) / 2;
        long b = (x - y) / 2;
        Console.WriteLine("{0} {1}", a, b);
    }
}