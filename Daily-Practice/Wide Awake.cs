using System;

class Program
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split(' ');
        int h = int.Parse(input[0]);
        int m = int.Parse(input[1]);

        m -= 45;
        if (m<0)
        {
            m += 60;
            h--;
        }
        if (h < 0)
        {
            h += 24;
        }

        Console.WriteLine($"{h} {m}");
    }

}