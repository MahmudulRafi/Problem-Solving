using System; 

class URI {

    static void Main(string[] args) { 

       int x = Convert.ToInt32(Console.ReadLine());
            int y = Convert.ToInt32(Console.ReadLine());
            int sum = 0;

            if (x > y)
            {
                for (int i = x - 1; i > y; i--)
                {
                    if (i % 2 != 0)
                    {
                        sum = sum + i;
                    }
                }
            }
            else
            {
                for (int i = y - 1; i > x; i--)
                {
                    if (i % 2 != 0)
                    {
                        sum = sum + i;
                    }
                }
            }
            Console.WriteLine(sum);
    }

}