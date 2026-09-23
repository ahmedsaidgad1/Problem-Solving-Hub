using System;

class Program
{
    static void Main()
    {
        int y = int.Parse(Console.ReadLine());

        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        {
            Console.WriteLine("YES");
        }
        else
        {
            Console.WriteLine("NO");
        }
    }
}