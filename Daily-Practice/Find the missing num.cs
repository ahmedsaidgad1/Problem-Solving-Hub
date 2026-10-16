using System;

public class Program
{
    public static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());

        string[] inputs = Console.ReadLine().Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
        int[] numbers = Array.ConvertAll(inputs, int.Parse);

        Array.Sort(numbers);

        for (int i = 0; i < numbers.Length; i++)
        {
            if (numbers[i] != i + 1)
            {       
                Console.WriteLine(i + 1);
                return;
            }
        }

        Console.WriteLine(n);
    }
}