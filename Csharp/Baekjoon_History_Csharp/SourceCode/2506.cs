namespace Fuc6
{
	public class Program
	{
		const int scoreWeight = 1;
		const char correct = '1';
		public static void aMain()
		{
			int problems = int.Parse(Console.ReadLine());
			char[] _internalArr = Console.ReadLine().ToCharArray();
			int _index = 0;
			int scoreSum = 0;
			int scoreComboScore = 1;

			for (;_index < _internalArr.Length; _index += 2)
			{
				if (_internalArr[_index] == correct)
				{
					scoreSum += scoreComboScore;
					scoreComboScore += scoreWeight;
				}
				else
				{
					scoreComboScore = 1;
				}
			}
			Console.WriteLine(scoreSum);



		}
	}
}


/*
 
시간이 int배열과 char배열보다 string배열로 한것이 시간이 더 적은지

메모리는 char < int < string 배열 순으로 많이쓰는지 이유가 뭘까




 
 
 */