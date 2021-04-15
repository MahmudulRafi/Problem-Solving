using System; 

class URI {

    static void Main(string[] args) { 

     
            int count = 0;
            double[] number = new double[6];

            for (int i = 0; i < number.Length; i++)
            {
                number[i] = Convert.ToDouble(Console.ReadLine());

                if (number[i] > 0)
                {
                    count++;
                }
            }

            Console.WriteLine("" + count + " valores positivos");
    }

}