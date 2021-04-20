using System; 

class URI {

    static void Main(string[] args) { 

        int n = Convert.ToInt32(Console.ReadLine());
        int[] numbers = new int[n];

            for (int i = 0; i <= n - 1; i++)
            {
                numbers[i] = Convert.ToInt32(Console.ReadLine());

            }

            for (int j = 0; j <= n - 1; j++)
            {
                if (numbers[j] % 2 == 0)
                {
                    if (numbers[j] > 0)
                    {
                        Console.WriteLine("EVEN POSITIVE");
                    }
                    else if (numbers[j] < 0)
                    {
                        Console.WriteLine("EVEN NEGATIVE");
                    }
                    else
                    {
                        Console.WriteLine("NULL");
                    }
                }
                else
                {
                    if (numbers[j] > 0)
                    {
                        Console.WriteLine("ODD POSITIVE");
                    }
                    else
                    {
                        Console.WriteLine("ODD NEGATIVE");
                    }

                }
            }


    }

}