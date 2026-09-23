using System;

class Program
{
    static void Main()
    {
        long n = Convert.ToInt64(Console.ReadLine());
        long count = 0;
        count = (n + 3) / 4;
        Console.WriteLine(count - 1);
    }
}