using System.Text;

namespace Fuc15
{
	public class Program
	{
		public static void Main()
		{
			int testCases = int.Parse(Console.ReadLine());

			string[] args = new string[2];


			StringBuilder sb = new StringBuilder();

			int num1 = 0;
			int num2 = 0;
			int gcd = 0;

			int result = 0;



			for (int i = 0; i < testCases; i++)
			{
				args = Console.ReadLine().Split(" ");
				num1 = int.Parse(args[0]);
				num2 = int.Parse(args[1]);




				gcd = getGCD(num1 , num2);




				result = (num1 / gcd) * num2;

				


				sb.AppendLine(result.ToString());
			}

			Console.WriteLine(sb.ToString());
		}

		public static int getGCD(int numA , int numB)
		{
			int tmpC = 0;
			if (numB > numA)
			{
				tmpC = numA;
				numA = numB;
				numB = tmpC;
			}

			while (numA % numB != 0)
			{
				if (numB > numA)
				{
					tmpC = numA;
					numA = numB;
					numB = tmpC;
				}

				numA %= numB;
			}

			return numB;
		}
	}
}
//만약 맞았다면 맞았어도 찝찝해서 나중에 다시 풀러 올거같은 코드
//유클리드 호제법
//유클리드 호제법
//유클리드 호제법
//유클리드 호제법
//유클리드 호제법
//유클리드 호제법

//유클리드 호제법

//유클리드 호제법

//유클리드 호제법