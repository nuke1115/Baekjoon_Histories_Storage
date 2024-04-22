using System.Text;

namespace Fuc25_1
{
	public class Program
	{
		const int EOF = 0;
		public static void aMain()
		{
			StringBuilder sb = new StringBuilder();

			int[] nums = new int[3];

			while (true)
			{
				nums = Array.ConvertAll(Console.ReadLine().Split(" "), int.Parse);
				if (nums[0] == EOF)
				{
					break;
				}
				Array.Sort(nums);

				sb.AppendLine(Math.Pow(nums[0], 2) + Math.Pow(nums[1], 2) == Math.Pow(nums[2], 2) ? "right" : "wrong");



			}
			Console.WriteLine(sb.ToString());

		}
	}
}
