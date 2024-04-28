namespace Fuc31
{
	public class Program
	{
		public static void aMain()
		{
			int num = int.Parse(Console.ReadLine());
			string[] input = Console.ReadLine().Split(" ");

			int lowestNum = 1000001;
			int highestNum = int.Parse(input[0]);
			int tmp = 0;




			for (int i = 0; i < num; i++)
			{
				tmp = int.Parse(input[i]);


				if (tmp < lowestNum)
				{
					lowestNum = tmp;
				}
				
				if (tmp > highestNum)
				{
					highestNum = tmp;
				}

			}
			
			Console.WriteLine(lowestNum*highestNum);



		}
	}
}
/*
어떤 수 N의 약수들(1과 N 자기 자신 제외)중 가장 작은것과 가장 큰것을 곱하면 N이 나오는 이유 


 */