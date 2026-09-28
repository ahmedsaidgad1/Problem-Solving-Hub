using System;

class Program
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        for (int i = 2; i <= n; i++)
        {  
            if(Is_Prime(i))
            {
                Console.WriteLine(i);
            }

        }

    }
    static bool Is_Prime(int number)
    {

        if (number < 2)
        {
            return false;
        }
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}