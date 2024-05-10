namespace Fuc34_2
{
	public class Program
	{
		public static void aMain(string[] args)
		{
			int two = 0;
			int five = 0;
			int num = int.Parse(Console.ReadLine());

			for (int i = 1; i <= num; i++)
			{
				int fu = i;
				int ck = i;

				while (fu % 2 == 0)
				{
					two++;
					fu /= 2;
				}

				while (ck % 5 == 0)
				{
					five++;
					ck /= 5;
				}

			}

			Console.WriteLine(two < five ? two : five);

		}
	}
}