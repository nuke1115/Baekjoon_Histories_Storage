

namespace Fuc3
{
    public class Program
    {
        public static void aMain()
        {
            int testCases = int.Parse(Console.ReadLine());
            int multiTapHoles = 0;
            int sum = 0;

            for (int i = 1; i <= testCases; i++)
            {
                multiTapHoles = int.Parse(Console.ReadLine());

                if (i != testCases)
                {
                    multiTapHoles--;
                }

                sum += multiTapHoles;

            }

            Console.WriteLine(sum);

        }
    }
}