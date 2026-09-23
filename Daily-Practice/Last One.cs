using System;

class Program
{
    static void Main()
    {
        string[] p1 = Console.ReadLine().Split(' ');
        long h1 = long.Parse(p1[0]);
        long d1 = long.Parse(p1[1]);
        long t1 = long.Parse(p1[2]);

        string[] p2 = Console.ReadLine().Split(' ');
        long h2 = long.Parse(p2[0]);
        long d2 = long.Parse(p2[1]);
        long t2 = long.Parse(p2[2]);

        long k1 = (h2 + d1 - 1) / d1;
        long k2 = (h1 + d2 - 1) / d2;

        long time1 = (k1 - 1) * t1;
        long time2 = (k2 - 1) * t2;

        if (time1 < time2)
        {
            Console.WriteLine("player one");
        }
        else if (time2 < time1)
        {
            Console.WriteLine("player two");
        }
        else
        {
            Console.WriteLine("draw");
        }
    }
}