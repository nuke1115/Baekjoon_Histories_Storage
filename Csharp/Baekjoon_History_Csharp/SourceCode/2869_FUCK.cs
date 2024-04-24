namespace Fuc27
{
	public class Program
	{
		public static void Main()
		{
			string[] args = Console.ReadLine().Split(" ");
			int mA = int.Parse(args[0]);
			int mB = int.Parse(args[1]);
			int mV = int.Parse(args[2]);

			int goal = mV - mA;
			int canUp = mA - mB;

			Console.WriteLine(Math.Ceiling((double)goal/canUp) + 1);


		}
	}
}
//fuck
//math
//fuck