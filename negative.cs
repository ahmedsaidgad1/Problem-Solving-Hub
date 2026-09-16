using System;
internal class Program
{
    static void Main()
    {
        string[] nums = Console.ReadLine().Split(' ');
        int a = int.Parse(nums[0]);
        int b = int.Parse(nums[1]);
        int c = int.Parse(nums[2]);

        long Max_Negative = long.MinValue;

        if (a < 0)
        {
            Max_Negative = Math.Max(Max_Negative, a);
        }
        if (b < 0)
        {
            Max_Negative = Math.Max(Max_Negative, b);
        }
        if (c < 0)
        {
            Max_Negative = Math.Max(Max_Negative, c);
        }

        Console.WriteLine(Max_Negative);
        Console.ReadKey();
    }
}