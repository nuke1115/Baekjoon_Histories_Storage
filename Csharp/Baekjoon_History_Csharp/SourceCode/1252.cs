using System.Numerics;
using System.Text;

namespace Fuc18
{
	public class Program
	{
		public static void aMain()
		{

			string[] args = Console.ReadLine().Split(" ");
			BigInteger num1 = ConvertBinaryToDecimal(args[0].ToCharArray());
			BigInteger num2 = ConvertBinaryToDecimal(args[1].ToCharArray());

			if (num1 != 0 || num2 != 0)
			{
				
				StringBuilder stringBuilder = new StringBuilder();

				stringBuilder.AppendJoin(null, ConvertDecimalToBinary(num1 + num2));
				Console.WriteLine(stringBuilder.ToString());
			}
			else
			{
				Console.WriteLine(0);
			}

		}

		public static BigInteger ConvertBinaryToDecimal(char[] input)
		{
			BigInteger result = 0;

			for (int i = input.Length - 1 , k = 1; i >= 0; i-- , k++)
			{
				if (input[i] == '1')
				{
					result += BigInteger.Pow(2, k - 1);
				}
			}
			return result;
		}
		
		public static char[] ConvertDecimalToBinary(BigInteger input)
		{

			

			Stack<char> stack = new Stack<char>();


			while (input > 0)
			{
				stack.Push((char)(input % 2 + 48));
				input /= 2;
			}

			char[] result = new char[stack.Count];

			int repeatNum = stack.Count;

			for (int i = 0; i < repeatNum; i++)
			{
				result[i] = stack.Pop();
			}

			return result;
		}


	}
}
/*
 * 
 * 문제상황 1:
 * 오버플로 문제
 * 
 * 해결 => int를 BigInteger로 변환해 해결
 * 
 * 
 * 문제상황 2:
 * 답이 0일경우 출력이 안나오는 문제
 * 
 * 해결 => 처음 이진수를 정수로 변환했을때 둘 다 0이 아닐때만 십진수로 변환하는 작업을 거치고, 아닐경우 바로 0을 출력하게 변경
 * 
 * 
 * 
 */