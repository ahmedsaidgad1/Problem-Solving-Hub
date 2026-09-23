using System;

class Program
{
    static void Main()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        long x = long.Parse(inputs[0]);
        long y = long.Parse(inputs[1]);

        if (y < 1 || (y == 1 && x != 0) || x < y - 1)
        {
            Console.WriteLine("No");
            return;
        }

        long remaining_Copies = x - (y - 1);

        if (remaining_Copies % 2 == 0)
        {
            Console.WriteLine("Yes");
        }
        else
        {
            Console.WriteLine("No");
        }
    }
}