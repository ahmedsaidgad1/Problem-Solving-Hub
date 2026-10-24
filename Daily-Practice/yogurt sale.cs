using System;

public class Program
{
    public static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());

        while (t-- > 0)
        {
            string[] inputs = Console.ReadLine().Split(' ');
            int n = int.Parse(inputs[0]);
            int a = int.Parse(inputs[1]);
            int b = int.Parse(inputs[2]);

            if (2 * a > b)
            {
                int totalCost = (n / 2) * b + (n % 2) * a;
                Console.WriteLine(totalCost);
            }
            else
            {
                Console.WriteLine(n * a);
            }
        }
    }
}