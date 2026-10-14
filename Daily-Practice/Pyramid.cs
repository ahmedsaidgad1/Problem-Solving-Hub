using System;

public class Program
{
    public static void Main(string[] args)
    {
        int num = int.Parse(Console.ReadLine());

        int spacesCount = num - 1;
        int starsCount = 1;       

        for (int i = 0; i < num; i++)
        {
            Console.WriteLine(new string(' ', spacesCount) + new string('*', starsCount));

            spacesCount--;
            starsCount += 2;
        }
    }
}