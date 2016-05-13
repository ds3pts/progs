using System;

namespace Q_Folgen
{
    class Program
    {
        static void Main(string[] args)
        {
            // Q[i] = Q[i-Q[i-1]] + Q[i-Q[i-2]]
            int[] Q = new int[100];

            Q[0] = Q[1] = 1;
            Console.WriteLine("1:\t" + Q[0]);
            Console.WriteLine("2:\t" + Q[1]);

            for (int i = 2; i < 100; i++)
            {
                Q[i] = Q[i - Q[i - 1]] + Q[i - Q[i - 2]];
                Console.WriteLine(i+1 + ":\t" + Q[i]);
            }

            Console.Read();

        }
    }
}
