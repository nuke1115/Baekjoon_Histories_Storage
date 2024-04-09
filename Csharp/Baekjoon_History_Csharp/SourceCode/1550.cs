namespace Fuc9
{
	public class Program
	{
		const int calibrationNum = 55;
		public static void aMain()
		{
			/*
			char[] inputHex = Console.ReadLine().ToCharArray();
			int sum = 0;
			int tmpNum = 0;

			int exponent = 0;
			for (int i = inputHex.Length - 1; i >= 0; i--)
			{
				if (Char.IsNumber(inputHex[i]))
				{
					tmpNum = (int)Char.GetNumericValue(inputHex[i]);
				}
				else
				{
					tmpNum = (int)inputHex[i] - calibrationNum;
				}


				sum += tmpNum*(int)Math.Pow(16,exponent);
				exponent++;
			}

			Console.WriteLine(sum);
			*/


			string hexInput = Console.ReadLine();
			Console.WriteLine(Convert.ToInt32(hexInput,16)); //이런게 있는줄 처음알았네...
		}
	}
}