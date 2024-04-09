namespace Fuc10
{
	public class Program
	{
		public static void aMain()
		{
			string[] input = Console.ReadLine().Split(" ");
			int studentCount = int.Parse(input[0]);
			int time = int.Parse(input[1]);
			
			int[] students = new int[studentCount];
			int sum = 0;
			
			for (int i = 0; i < students.Length; i++)
			{
				students[i] = int.Parse(Console.ReadLine());
			}


			int repeatNum = 0;
			for (int i = 1; i <= time;  i++)
			{
				repeatNum = 0;
				for (; repeatNum < students.Length; repeatNum++)
				{
					if (i % students[repeatNum] == 0)//연산
					{
						sum++;
						break;
					}
				}
			}

			Console.WriteLine(sum);

		}
	}
}
//브루트 포-스