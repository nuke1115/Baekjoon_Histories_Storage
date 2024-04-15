namespace Fuc16
{
	public class Program
	{
		public static void aMain()
		{
			string[] args = Console.ReadLine().Split(" ");
			Console.WriteLine(args[0] == args[1] ? 1 : 0);
		}
	}
}