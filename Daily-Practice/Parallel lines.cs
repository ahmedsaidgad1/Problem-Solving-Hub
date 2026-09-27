using System;

class Program
{
    static void Main()
    {
        string line1 = Console.ReadLine();
        string line2 = Console.ReadLine();

        string m1 = GetSlope(line1);
        string m2 = GetSlope(line2);

        if (m1 == m2)
        {
            Console.WriteLine("PARALLEL");
        }
        else
        {
            Console.WriteLine("NOT PARALLEL");
        }
    }

    static string GetSlope(string line)
    {
        int equalIndex = 0;
        int xIndex = 0;

        for (int i = 0; i < line.Length; i++)
        {
            if (line[i] == '=') equalIndex = i;
            if (line[i] == 'x') xIndex = i;
        }

        return line.Substring(equalIndex + 1, xIndex - equalIndex - 1);
    }
}