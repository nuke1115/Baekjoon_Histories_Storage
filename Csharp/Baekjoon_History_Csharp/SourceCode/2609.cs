namespace Fuc24
{
	public class Program
	{
		public static void aMain()
		{
			string[] input = Console.ReadLine().Split(" ");
			int numA = int.Parse(input[0]);
			int numB = int.Parse(input[1]);

			int gcd = GetGCD(numA , numB);

			Console.WriteLine(gcd);
			Console.WriteLine((numA*numB)/gcd);





		}


		static int GetGCD(int numA, int numB)
		{

			
			while (numA % numB != 0)
			{
				if (numA < numB)
				{
					int tmp = numA;
					numA = numB;
					numB = tmp;
				}

				numA %= numB;

			}

			return numB;


		}
	}
}

//유
//클
//리
//드
//호
//제
//법
//아
//시
//는
//구
//나