namespace Fuc29_v1
{
	public class Program
	{
		const char compareKeyExist = 'X';
		
		public static void aMain()
		{
			int x = 0;
			int y = 0;

			string[] args = Console.ReadLine().Split(" ");

			y = int.Parse(args[0]);
			x = int.Parse(args[1]);

			
			char[,] castle = new char[y,x];
			bool[] rowX = new bool[x];
			bool[] rowY = new bool[y];

			int sumX = x;
			int sumY = y;

			for (int depth = 0; depth < y; depth++)
			{
				char[] input = Console.ReadLine().ToCharArray();

				for (int width = 0; width < x; width++)
				{
					castle[depth, width] = input[width];
					if (input[width] == compareKeyExist)
					{
						if (!rowX[width])
						{
							rowX[width] = true;
							sumX--;
						}
					}

				}
			}

			for (int width = 0; width < x; width++)
			{
				for (int depth = 0; depth < y; depth++)
				{
					if (castle[depth,width] == compareKeyExist)
					{
						if (!rowY[depth])
						{
							rowY[depth] = true;
							sumY--;
						}
					}
				}
			}

			Console.WriteLine(sumX > sumY ? sumX : sumY);

		}
	}
}