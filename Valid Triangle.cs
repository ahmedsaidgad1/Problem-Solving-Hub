using System;

class Program
{
    static void Main()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        int a = int.Parse(inputs[0]);
        int b = int.Parse(inputs[1]);
        int c = int.Parse(inputs[2]);

        int sum = a + b + c;

        if (sum == 180)
        {
            Console.WriteLine("YES");
        }
        else
        {
            Console.WriteLine("NO");
        }


    }
}