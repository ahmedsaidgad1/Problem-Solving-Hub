using System;

class Program
{
    static void Main()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        int a = int.Parse(inputs[0]);
        int b = int.Parse(inputs[1]);
        int c = int.Parse(inputs[2]);

        if (a > 0 && b > 0 && c > 0 && (a + b + c == 180))
        {
            Console.WriteLine("YES");
        }
        else
        {
            Console.WriteLine("NO");
        }

    }
}