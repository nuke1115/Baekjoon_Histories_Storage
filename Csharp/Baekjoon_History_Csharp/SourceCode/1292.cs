namespace Fuc19
{
	public class Program
	{
		const int numCap = 46;
		public static void aMain()
		{

			

			string[] args = Console.ReadLine().Split(" ");

			int posA = int.Parse(args[0]);
			int posB = int.Parse(args[1]);


			int sum = 0;
			

			int index = 1;


			for (int i = 1; i <= numCap ; i++)
			{
				for (int k = 0; k < i  ; k++ , index++)
				{
					if (index >= posA && index <= posB)
					{
						sum += i;

					}

				}
			}

			Console.WriteLine(sum);
		}
	}
}
