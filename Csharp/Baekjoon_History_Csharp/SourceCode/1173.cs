namespace Fuc12
{
	public class Program
	{
		//N 원하는 시간, m 최소맥박, M 최대맥박, T 운동시 늘어나는 맥박, R 쉴때 줄어드는 맥박
		//m <= M 
		const int cantExercise = -1;
		public static void aMain()
		{
			int totalActionTime = 0;
			int totalExcersiseTime = 0;
			string[] input = Console.ReadLine().Split(" ");

			int targetTime = int.Parse(input[0]);
			int minimumPulse = int.Parse(input[1]);
			int maximumPulse = int.Parse(input[2]);
			int increasePulse = int.Parse(input[3]);
			int decreasePulse = int.Parse(input[4]);

			int nowPulse = minimumPulse;


			if ((nowPulse + increasePulse) <= maximumPulse)
			{


				while (totalExcersiseTime < targetTime)
				{


					if (nowPulse < minimumPulse)
					{
						nowPulse = minimumPulse;
					}

					if ((nowPulse + increasePulse) <= maximumPulse)
					{
						nowPulse += increasePulse;
						totalActionTime++;
						totalExcersiseTime++;
					}
					else
					{
						nowPulse -= decreasePulse;
						totalActionTime++;
					}
				}
				Console.WriteLine(totalActionTime);


			}
			else
			{
				Console.WriteLine(cantExercise);
			}
		}
	}
}