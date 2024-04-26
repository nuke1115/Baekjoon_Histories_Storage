using System.Text;

namespace Fuc30_v2
{
	public class Program
	{
		public static void aMain()
		{
			StringBuilder sb = new StringBuilder();

			string[] strings = new string[5];
			int repeatNums = 0;

			for (int i = 0; i < 5; i++)
			{
				strings[i] = Console.ReadLine();
				
				if (strings[i].Length > repeatNums)
				{
					repeatNums = strings[i].Length;
				}

			}

			
			for (int i = 0; i < repeatNums; i++)
			{
				for (int k = 0; k < 5; k++)
				{
					if (strings[k].Length - 1>= i)
					{
						sb.Append(strings[k][i]);
					}
				}
			}




			Console.WriteLine(sb.ToString());
		}
	}
}