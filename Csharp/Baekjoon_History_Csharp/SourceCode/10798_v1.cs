using System.Text;

namespace Fuc30_v1
{
	public class Program
	{
		public static void aMain()
		{
			int[] charsCounts = new int[5];

			List<char>[] lists = new List<char>[5];
			


			StringBuilder sb = new StringBuilder();


			for (int i = 0; i < 5; i++)
			{
				char[] inputTmp = Console.ReadLine().ToCharArray();

				lists[i] = new List<char>();
				lists[i].AddRange(inputTmp);

				charsCounts[i] = inputTmp.Length;
			}


			int repeatNum = charsCounts.Max();
			for (int i = 0; i < repeatNum; i++)
			{
				for (int k = 0; k < lists.Length; k++)
				{
					if (lists[k].Count - 1 >= i)
					{
						sb.Append(lists[k][i]);
					}
				}
			}
			Console.WriteLine(sb.ToString());

		}
	}
}