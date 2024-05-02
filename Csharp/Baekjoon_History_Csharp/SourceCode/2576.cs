namespace Fuc32
{
	public class Program
	{
		const int oddCheck = 1;
		public static void aMain()
		{
			int sum = 0;
			int smallestOdd = 101;
			int tmp = 0;

			for (int i = 0; i < 7; i++)
			{
				tmp = int.Parse(Console.ReadLine());
				if ((tmp & oddCheck) == 1)
				{
					sum += tmp;
					smallestOdd = smallestOdd > tmp ? tmp : smallestOdd;
				}
			}

			if (sum == 0)
			{
				Console.WriteLine(-1);
			}
			else
			{
				Console.WriteLine($"{sum}\n{smallestOdd}");
			}
			
		}
	}
}