
namespace Fuc17_ver_2
{
	public class Program
	{
		public static void aMain()
		{
			string[] args = Console.ReadLine().Split(" ");

			char[] left = args[0].ToCharArray();
			char[] right = args[1].ToCharArray();


			long num1 = 0;
			long num2 = 0;


			for (int i = 0; i < left.Length; i++)
			{
				num1 += (long)Char.GetNumericValue(left[i]);
			}

			for (int i = 0; i < right.Length; i++)
			{
				num2 += (long)Char.GetNumericValue(right[i]);
			}

			Console.WriteLine(num1*num2);
		}
	}
}


/*


예를 들어 121×34는

1×3 + 1×4 + 2×3 + 2×4 + 1×3 + 1×4 = 28

(1*3) + (1*4) + (2*3) + (2*4) + (1*3) + (1*4)

(1+2+1)(3+4) = 28

분배법칙에 의해 밑의 식을 풀어보면 위의 식이 나온다
아주 기본적인 분배법칙




 */