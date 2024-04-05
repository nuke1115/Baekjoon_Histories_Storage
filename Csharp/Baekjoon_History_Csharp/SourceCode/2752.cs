namespace Fuc5
{
	public class Program
	{
		public static void Main()
		{
			int[] nums = Array.ConvertAll(Console.ReadLine().Split(" ") , int.Parse);
			int tmp = 0;
			int highestNumIndex = 0;

			for (int i = 0; i < nums.Length; i++)
			{
				highestNumIndex = i;

				for (int k = i; k < nums.Length; k++)
				{
					if (nums[k] > nums[highestNumIndex])
					{
						highestNumIndex = k;
					}
				}

				tmp = nums[highestNumIndex];
				nums[highestNumIndex] = nums[i];
				nums[i] = tmp;


			}

			for (int i = 2; i >= 0; i--)
			{
				Console.Write($"{nums[i]} ");
			}

		}
	}
}