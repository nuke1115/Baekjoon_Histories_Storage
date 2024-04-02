namespace Fuc2
{
    public class Program
    {
        public static void aMain()
        {
            int[] nums = Array.ConvertAll(Console.ReadLine().Split(" ") , int.Parse);
            int count = 0;
            int result = 0;
            int smallestMeasure = 0;

            for (int i = 1; i <= nums[0]; i++)
            {
                result = nums[0] % i;


                if (result == 0)
                {
                    count++;
                }

                if (count == nums[1])
                {
                    smallestMeasure = i;
                    break;
                }


            }


            Console.WriteLine(smallestMeasure);


        }
    }
}