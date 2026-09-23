using System;

class Program
{
    static void Main()
    {
        long n = Convert.ToInt64(Console.ReadLine());
        long m = Convert.ToInt64(Console.ReadLine());

        long completedSets = n / m;

        if (completedSets % 2 == 0)
        {
            Console.WriteLine("MARCEL");
        }
        else
        {
            Console.WriteLine("JOAOZAO");
        }
    }
}