namespace Fuc22
{
	public class Program
	{
		public static void aMain()
		{
			string[] input = Console.ReadLine().Split(" ");

			int numA = Rev(input[0].ToCharArray());
			int numB = Rev(input[1].ToCharArray());



			Console.WriteLine(Rev((numA + numB).ToString().ToCharArray()));


		}

		public static int Rev(char[] charArr)
		{
			Array.Reverse(charArr);
			string fuck = new string(charArr);
			int result = int.Parse(fuck);

			return result;
		}
	}
}