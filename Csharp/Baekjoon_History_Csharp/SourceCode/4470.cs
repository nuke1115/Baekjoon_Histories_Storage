using System.Text;

namespace Fuc14
{
	public class Program
	{
		public static void aMain()
		{
			int testCase = int.Parse(Console.ReadLine());
			StringBuilder result = new StringBuilder();

			for (int i = 1; i <= testCase; i++)
			{
				result.AppendLine($"{i}. {Console.ReadLine()}");
			}
			Console.WriteLine( result.ToString() );

		}
	}
}