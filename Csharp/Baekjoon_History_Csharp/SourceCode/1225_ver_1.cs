
namespace Fuc17_ver_1
{
	public class Program
	{
		public static void aMain()
		{
			string[] args = Console.ReadLine().Split(" ");

			char[] left = args[0].ToCharArray();
			char[] right = args[1].ToCharArray();


			int num1 = 0;
			int num2 = 0;

			int sum = 0;

			for (int i = 0; i < left.Length; i++)
			{
				num1 = (int)Char.GetNumericValue(left[i]);

				for (int k = 0; k < right.Length; k++)
				{
					num2 = (int)Char.GetNumericValue(right[k]);
					sum += num1 * num2;
				}

			}
			Console.WriteLine(sum);

		}
	}
}