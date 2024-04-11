using System.Text;

namespace Fuc13
{
	public class Program
	{
		const string noSong = "!";
		const string overTwo = "?";
		public static void aMain()
		{
			string[] input = Console.ReadLine().Split(" ");
			string[] inputTmp;

			int inputCount = int.Parse(input[0]);
			int testCases = int.Parse(input[1]);
			StringBuilder result = new StringBuilder();
			string equalSongName = null;

			SongDataBase[] songDataBases = new SongDataBase[inputCount];


			for (int i = 0; i < inputCount; i++)
			{
				inputTmp = Console.ReadLine().Split(" ");
				songDataBases[i] = new SongDataBase(inputTmp[0], inputTmp[1], inputTmp[2], inputTmp[3], inputTmp[4]);
			}

			int duplicateCounter = 0;

			for (int i = 0; i < testCases; i++)
			{
				duplicateCounter = 0;

				inputTmp = Console.ReadLine().Split(" ");

				for (int k = 0; k < songDataBases.Length; k++)
				{
					if (songDataBases[k].checkSongNotes(inputTmp))
					{
						duplicateCounter++;
						equalSongName = songDataBases[k].songName;
					}
				}

				if (duplicateCounter > 1)
				{
					equalSongName = overTwo;
				}
				else if (duplicateCounter < 1)
				{
					equalSongName = noSong;
				}

				result.AppendLine(equalSongName);

			}
			Console.WriteLine(result.ToString());






		}
	}



	public class SongDataBase
	{
		public string songName;
		public int songNameCount;
		public string[] notes = new string[3];

		public SongDataBase(string songNameCount, string songName , string firstNote, string secondNote, string thirdNote)
		{
			this.songName = songName;
			this.songNameCount = int.Parse(songNameCount);
			notes[0] = firstNote;
			notes[1] = secondNote;
			notes[2] = thirdNote;
		}

		public bool checkSongNotes(string[] compareNotes)
		{
			return notes.SequenceEqual(compareNotes);
		}

	}


}