using System;

class Program
{
    static void Main()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        int n = int.Parse(inputs[0]);
        int a = int.Parse(inputs[1]);
        int b = int.Parse(inputs[2]);

        int ans = Math.Min(n - a, b + 1);

        Console.WriteLine(ans);
    }
}