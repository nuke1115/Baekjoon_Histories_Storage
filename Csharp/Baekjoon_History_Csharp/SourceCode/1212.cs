
using System.Text;

namespace Fuc_8
{
	public class Program
	{
		
		public static void aMain()
		{

			string[] binaryWithZero = { "001" , "010" , "011" , "100" , "101" , "110" , "111" , "000"};
			string[] binaryWithOutZero = { "1", "10", "11", "100", "101", "110", "111" , "0"};

			char[] octalNums = Console.ReadLine().ToCharArray();

			StringBuilder result = new StringBuilder();

			int index = (int)Char.GetNumericValue(octalNums[0]) - 1;

			if (index >= 0)
			{
				result.Append(binaryWithOutZero[index]);
			}
			else
			{
				result.Append(binaryWithOutZero[7]);
			}

			for (int i = 1; i < octalNums.Length; i++)
			{
				index = (int)Char.GetNumericValue(octalNums[i]) - 1;
				if (index >= 0)
				{
					result.Append(binaryWithZero[index]);
				}
				else
				{
					result.Append(binaryWithZero[7]);
				}
			}

			Console.WriteLine(result.ToString());


		}
	}
}

//fuckkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkit
