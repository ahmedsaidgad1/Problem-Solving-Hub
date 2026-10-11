using System;

public class Program
{
    public static void Main(string[] args)
    {
        int num = int.Parse(Console.ReadLine());
        for (int i = 0; i < num; i++)
        {
            Console.WriteLine(new string('*', i + 1));
        }
    }
}