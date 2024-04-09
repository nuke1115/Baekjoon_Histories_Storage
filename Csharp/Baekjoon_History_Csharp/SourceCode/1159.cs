using System.Text;

namespace Fuc11
{
	public class Program
	{
		const int calibrationNum = 97;
		const int alphabetStart = 97;
		const int alphabetEnd = 122;
		const string giveUp = "PREDAJA";
		const int minimumMemberCount = 5;
		public static void aMain()
		{
			int[] count = new int[26];
			int repeatNum = int.Parse(Console.ReadLine());
			StringBuilder sb = new StringBuilder();

			bool canIParticipate = false;

			string nameTmp = null;

			for (int i = 0; i < repeatNum; i++)
			{
				nameTmp = Console.ReadLine();

				for (int k = alphabetStart; k <= alphabetEnd; k++)
				{
					if (nameTmp[0] == (char)k)
					{
						count[k - calibrationNum]++;
					}
				}
			}

			for (int i = 0; i < count.Length; i++)
			{
				if (count[i] >= minimumMemberCount)
				{
					canIParticipate = true;
					sb.Append((char)(i + calibrationNum));
				}
			}

			Console.WriteLine(canIParticipate ? sb.ToString() : giveUp);
			




		}
	}
}