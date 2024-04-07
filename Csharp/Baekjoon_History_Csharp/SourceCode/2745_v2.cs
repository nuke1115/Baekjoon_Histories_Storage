namespace Fuc7_v2
{
	public class Program
	{
		const int invalidNum = -1;
		const int calibrationNum = 55;
		public static void aMain()
		{

			string[] input = Console.ReadLine().Split(" ");
			char[] nums = input[0].ToCharArray();
			int Formation = int.Parse(input[1]);
			int number = 0;
			int sum = 0;


			int k = 0;
			for (int i = nums.Length - 1; i >= 0; i--, k++)
			{
				number = (int)Char.GetNumericValue(nums[i]);
				if (number == invalidNum)
				{
					number = (int)nums[i] - calibrationNum;
				}


				sum += number * (int)(Math.Pow(Formation, k));


			}
			Console.WriteLine(sum);
		}
	}
}



//GetNumericValue 와 IsNumber 차이점 찾아보기
