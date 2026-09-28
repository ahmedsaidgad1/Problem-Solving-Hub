using System;

class Program
{
    static void Main()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        int x = int.Parse(inputs[0]);
        int y = int.Parse(inputs[1]);
        int n = int.Parse(inputs[2]);

        for (int i = 1; i <= n; i++)
        {
            if (i % x == 0 && i % y == 0)
            {
                Console.WriteLine("FizzBuzz");
            }
            else if (i % x == 0)
            {
                Console.WriteLine("Fizz");
            }
            else if (i % y == 0)
            {
                Console.WriteLine("Buzz");
            }
            else
            {
                Console.WriteLine(i);
            }
        }
    }
}