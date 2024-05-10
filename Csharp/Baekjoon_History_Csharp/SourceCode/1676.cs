namespace Fuc34k
{
	public class Program
	{
		public static void aMain()
		{
			int num = int.Parse(Console.ReadLine());
			int num2 = num;
			int num3 = num;

			num /= 5;
			num2 /= 25;
			num3 /= 125;

			Console.WriteLine(num+num2+num3);
		}
		
	}
}
/*
1:  n!에서 5가 더해질떄마다 0이 하나씩 는다
2: n이 5^k의 배수가 되는 주기는 k씩 는다
 */