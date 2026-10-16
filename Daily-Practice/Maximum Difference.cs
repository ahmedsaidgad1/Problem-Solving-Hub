using System;

public class Program
{
    public static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());

        string[] inputs = Console.ReadLine().Split(' ');

        long max = long.Parse(inputs[0]);
        long min = long.Parse(inputs[0]);

        for (int i = 1; i < n; i++)
        {
            long current = long.Parse(inputs[i]);

            if (current > max)
            {
                max = current;
            }
            if (current < min)
            {
                min = current;
            }
        }

        Console.WriteLine(max - min);
    }
}