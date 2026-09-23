using System;
internal class Progaram
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split(' ');
        int[] arr = new int[5];

        for (int i = 0; i < arr.Length; i++)
        {
            arr[i] = int.Parse(input[i]);
        }

        for (int i = 0; i < arr.Length; i++)
        {
            if (arr[i] == 0)
            {
                Console.WriteLine(i + 1);
            }
        }

    }
}