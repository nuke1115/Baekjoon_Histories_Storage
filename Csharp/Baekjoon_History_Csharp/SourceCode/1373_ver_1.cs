using System.Text;

namespace Fuc23
{
	public class Program
	{
		public static void aMain()
		{

			string input = Console.ReadLine();
			if (input.Contains("1"))
			{
				StringBuilder stringBuilder = new StringBuilder();

				StringBuilder result = new StringBuilder();

				List<string> list = new List<string>();

				int count = 0;
				for (int i = input.Length - 1; i >= 0; i--)
				{
					stringBuilder.Insert(0, input[i].ToString());
					count++;
					if (count == 3)
					{
						byte binary = Convert.ToByte(stringBuilder.ToString(), 2);

						list.Add(binary.ToString());

						stringBuilder.Clear();
						count = 0;
					}
					else if (count != 3 && i == 0)
					{
						byte binary = Convert.ToByte(stringBuilder.ToString(), 2);

						if (binary == 0)
						{
							list.Add("");
						}
						else
						{
							list.Add(binary.ToString());
						}

					}

				}

				for (int i = list.Count - 1; i >= 0; i--)
				{
					result.Append(list[i]);
				}
				Console.WriteLine(result.ToString());
			}
			else
			{
				Console.WriteLine("0");
			}
		}
	}
}