using System.Text;

namespace Fuc20
{
	public class Program
	{
		const string EOF = "0";
		public static void aMain()
		{
			string input = null;
			StringBuilder sb = new StringBuilder();

			int indexLeft = 0;
			int indexRight = 0;
			bool isPalindrome = true;

			while (true)
			{
				input = Console.ReadLine();

				if (input == EOF)
				{
					break;
				}

				indexLeft = 0;
				indexRight = input.Length - 1;
				isPalindrome = true;

				for (;indexLeft <= indexRight; indexLeft ++ , indexRight --)
				{
					if (input[indexLeft] != input[indexRight])
					{
						isPalindrome = false;
					}
				}

				sb.AppendLine(isPalindrome ? "yes" : "no");

			}

			Console.WriteLine(sb.ToString());



		}
	}
}