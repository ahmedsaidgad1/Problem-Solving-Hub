using System;

public class Program
{
    public static void Main(string[] args)
    {
        string[] inputs = Console.ReadLine().Split(new[] { " " }, StringSplitOptions.RemoveEmptyEntries);
        int n = int.Parse(inputs[0]);
        int m = int.Parse(inputs[1]);

        int minMoves = Math.Min(n, m);

        if (minMoves % 2 != 0)
        {
            Console.WriteLine("Akshat");
        }
        else
        {
            Console.WriteLine("Malvika");
        }
    }
}       