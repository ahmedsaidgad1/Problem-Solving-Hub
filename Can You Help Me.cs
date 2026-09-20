using System;

class Program
{
    static void Main()
    {
        long n = long.Parse(Console.ReadLine());

        if (n % 5 != 0)
        {
            Console.WriteLine("NO");
        }
        else
        {
            long ans = (n + 14) / 15;
            Console.WriteLine(ans);
        }
    }
}