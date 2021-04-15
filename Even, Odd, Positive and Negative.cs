using System; 

class URI {

    static void Main(string[] args) { 

       int[] number = new int[5];
       int even = 0,
                odd = 0,
                positive = 0,
                negative = 0;

            for (int i = 0; i < number.Length; i++)
            {
                number[i] = Convert.ToInt32(Console.ReadLine());

                if (number[i] % 2 == 0)
                {
                    even++;
                }

                if (number[i] % 2 != 0)
                {
                    odd++;
                }

                if (number[i] > 0)
                {
                    positive++;
                }

                if (number[i] < 0)
                {
                    negative++;
                }

            }
            Console.WriteLine("" + even + " valor(es) par(es)");
            Console.WriteLine("" + odd + " valor(es) impar(es)");
            Console.WriteLine("" + positive + " valor(es) positivo(s)");
            Console.WriteLine("" + negative + " valor(es) negativo(s)");

    }

}