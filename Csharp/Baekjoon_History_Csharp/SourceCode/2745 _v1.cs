namespace Fuc7_v1
{
	public class Program
	{
		const int invalidNum = -1;
		public static void aMain()
		{
			string[] input = Console.ReadLine().Split(" ");
			char[] nums = input[0].ToCharArray();
			int Formation = int.Parse(input[1]);
			int number = 0;
			int sum = 0;


			int k = 0;
			for (int i = nums.Length - 1; i >= 0; i-- , k++)
			{
				number = (int)Char.GetNumericValue(nums[i]);
				if (number == invalidNum)
				{
					number = convertAlphabetToNum(nums[i]);
				}


				sum += number * (int)(Math.Pow(Formation , k));


			}
			Console.WriteLine(sum);
		}


		public static int convertAlphabetToNum(char alphabet)
		{



			switch (alphabet)
			{
				case 'A':
					return (int)over10Formation.A;
				case 'B':
					return (int)over10Formation.B;
				case 'C':
					return (int)over10Formation.C;
				case 'D':
					return (int)over10Formation.D;
				case 'E':
					return (int)over10Formation.E;
				case 'F':
					return (int)over10Formation.F;
				case 'G':
					return (int)over10Formation.G;
				case 'H':
					return (int)over10Formation.H;
				case 'I':
					return (int)over10Formation.I;
				case 'J':
					return (int)over10Formation.J;
				case 'K':
					return (int)over10Formation.K;
				case 'L':
					return (int)over10Formation.L;
				case 'M':
					return (int)over10Formation.M;
				case 'N':
					return(int)over10Formation.N;
				case 'O':
					return (int)over10Formation.O;
				case 'P':
					return (int)over10Formation.P;
				case 'Q':
					return (int)over10Formation.Q;
				case 'R':
					return (int)over10Formation.R;
				case 'S':
					return (int)over10Formation.S;
				case 'T':
					return (int)over10Formation.T;
				case 'U':
					return (int)over10Formation.U;
				case 'V':
					return (int)over10Formation.V;
				case 'W':
					return (int)over10Formation.W;
				case 'X':
					return (int)over10Formation.X;
				case 'Y':
					return (int)over10Formation.Y;
				case 'Z':
					return (int)over10Formation.Z;
				default:
					return -1;
			}




		}
	}

	public enum over10Formation : int
	{

		A = 10,
		B,
		C,
		D,
		E,
		F,
		G,
		H,
		I,
		J,
		K,
		L,
		M,
		N,
		O,
		P,
		Q,
		R,
		S,
		T,
		U,
		V,
		W,
		X,
		Y,
		Z




	}

}


// n^y 와 Math.Pow(n , y); 차이점