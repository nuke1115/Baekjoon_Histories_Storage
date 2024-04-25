using System.Text;

namespace Fuc28
{
	public class Program
	{
		public static void aMain()
		{
			StringBuilder stringBuilder = new StringBuilder();
			string[] args = Console.ReadLine().Split(" ");
			

			int posA = int.Parse(args[0]);
			int posB = int.Parse(args[1]);


			int[,] matrixA = new int[posA, posB];
			int[,] matrixB = new int[posA, posB];
			int[,] matrixOutput = new int[posA, posB];
			

			for (int i = 0; i < posA; i++)
			{
				args = Console.ReadLine().Split();
				for (int k = 0; k < posB; k++)
				{
					matrixA[i , k] = int.Parse(args[k]);
				}
			}

			for (int i = 0; i < posA; i++)
			{
				args = Console.ReadLine().Split();
				for (int k = 0; k < posB; k++)
				{
					matrixB[i, k] = int.Parse(args[k]);
				}
			}

			for (int i = 0; i < posA; i++)
			{
				for (int k = 0; k < posB; k++)
				{
					matrixOutput[i, k] = matrixA[i, k] + matrixB[i,k];
				}
			}

			for (int i = 0; i < posA; i++)
			{
				for (int k = 0; k < posB; k++)
				{
					stringBuilder.Append($"{matrixOutput[i, k]} ");
				}
				stringBuilder.AppendLine();
			}
			Console.WriteLine(stringBuilder.ToString());

		}
	}
}
