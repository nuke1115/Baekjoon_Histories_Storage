using System.Text;

namespace Fuc33
{
	public class Program
	{
		public static void aMain()
		{
			string[] args = new string[2];

			int a = 0;
			int b = 0;

			StringBuilder stringBuilder = new StringBuilder();


			while (true)
			{
				args = Console.ReadLine().Split(" ");

				if (args[0] == "0")
				{
					break;
				}

				a = int.Parse(args[0]);
				b = int.Parse(args[1]);
				
				if (a % b == 0)
				{
					stringBuilder.AppendLine("multiple");
				}
				else if (b % a == 0)
				{
					stringBuilder.AppendLine("factor");
				}
				else
				{
					stringBuilder.AppendLine("neither");
				}


			}

			Console.WriteLine(stringBuilder.ToString());
		}
	}
}
//const를 쓸때의 성능저하의 원인 찾기
/*
 추정되는 원인
const를 쓰면 그 변수가 들어간곳에 하드코딩되는식으로 최적화가 진행되는데,
그것이 백준같은 여러 테스트케이스를 반복해서 받는곳에서는 하드코딩되는 시간으로 인해 성능(시간)저하가 일어나는것으로 추정
 */