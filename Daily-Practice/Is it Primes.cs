using System;

class Program
{
    static void Main()
    {
        if (long.TryParse(Console.ReadLine(), out long n))
        {
            if (IsPrime(n))
            {
                Console.WriteLine("YES");
            }
            else
            {
                Console.WriteLine("NO");
            }
        }
    }

    static bool IsPrime(long number)
    {
        if (number <= 1) return false;
        if (number == 2) return true;
        if (number % 2 == 0) return false; 

        for (long i = 3; i * i <= number; i += 2)
        {
            if (number % i == 0)
                return false;
        }

        return true;
    }
}