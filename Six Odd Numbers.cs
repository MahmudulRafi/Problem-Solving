using System; 

class URI {

    static void Main(string[] args) { 

       int x = Convert.ToInt32(Console.ReadLine());
       int count = 0;

            for (int i = x; i <= (x + (x * 2)); i++)
            {
                if (i % 2 != 0)
                {
                    count++;

                    if (count < 7)
                    {
                        Console.WriteLine(i);
                    }
                }

    }
    }
}
