using System; 

class URI {

    static void Main(string[] args) { 

        int[] number = new int[5];
        int count = 0;

            for (int i = 0; i < number.Length; i++)
            {
                number[i] = Convert.ToInt32(Console.ReadLine());
                if (number[i] % 2 == 0)
                {
                    count++;
                }
            }
            Console.WriteLine("" + count + " valores pares");

    }

}