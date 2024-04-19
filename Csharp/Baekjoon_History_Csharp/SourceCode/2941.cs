namespace Fuc21
{
	public class Program
	{
		static string[] croatiaAlphabetsEn = { "c=" , "c-" , "dz=" , "d-" , "lj" , "nj" , "s=" , "z="};


		public static void aMain()
		{
			string input = Console.ReadLine();

			ChangeAlphabets(ref input);



			Console.WriteLine(input.Length);

		}



		public static void ChangeAlphabets(ref string input)
		{
			foreach (string old in croatiaAlphabetsEn)
			{
				input = input.Replace(old , "F");
			}
		}
	}
}
