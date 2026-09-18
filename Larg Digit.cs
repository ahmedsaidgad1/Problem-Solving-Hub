using System;

class Program
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split(' ');

        string a = input[0];
        string b = input[1];

        int sum1 = (a[0] - '0') + (a[1] - '0') + (a[2] - '0');
        int sum2 = (b[0] - '0') + (b[1] - '0') + (b[2] - '0');

        Console.WriteLine(Math.Max(sum1, sum2));
    }
}