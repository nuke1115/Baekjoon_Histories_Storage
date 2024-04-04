

namespace Fuc4
{
	public class Program
	{
		public static void aMain()
		{
			int highestPeopleCount = 0;
			int[] nums = new int[2];
			int nowPeopleCount = 0;

			for (int i = 0; i < 4; i++)
			{
				nums = Array.ConvertAll(Console.ReadLine().Split(" ") , int.Parse);

				nowPeopleCount += nums[1] - nums[0];

				if (nowPeopleCount > highestPeopleCount)
				{
					highestPeopleCount = nowPeopleCount;
				}

			}

			Console.WriteLine(highestPeopleCount);


		}
	}
}