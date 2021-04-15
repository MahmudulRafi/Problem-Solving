using System; 

class URI {

    static void Main(string[] args) { 

        double[] number = new double[6];
            double count = 0;
            double sum = 0;

            for (int i = 0; i < number.Length; i++)
            {
                number[i] = Convert.ToDouble(Console.ReadLine());
                if (number[i] > 0)
                {
                    count++;
                    sum = number[i] + sum;
                }
            }
            Console.WriteLine("" + count + " valores positivos");
            Console.WriteLine(Math.Round((double)sum / count, 1));

    }

}