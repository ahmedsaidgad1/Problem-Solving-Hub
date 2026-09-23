using System;
internal class Program
{
    private static void Main(string[] args)
    {
        string[] inputs = Console.ReadLine().Split(' ');
        int a = Convert.ToInt32(inputs[0]);
        int b = Convert.ToInt32(inputs[1]);
        Console.WriteLine(Math.Min(a, b));
    }
}