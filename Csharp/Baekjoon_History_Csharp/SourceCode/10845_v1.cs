using System.Text;

namespace Fuc26_v1
{
	public class Queue
	{
		private LinkedList<int> _internalLinkedList = new LinkedList<int>();
		private int _count = 0;

		public Queue()
		{

		}


		public void Push(int item)
		{
			_internalLinkedList.AddLast(item);
			_count++;
		}

		public int Pop()
		{
			int outTmp = -1;

			if (_count > 0)
			{
				outTmp = _internalLinkedList.First();
				_internalLinkedList.RemoveFirst();
				_count--;
			}


			return outTmp;
		}
		
		public int Size()
		{
			return _count;
		}

		public bool Empty()
		{
			return _count == 0;
		}

		public int Front()
		{
			int outTmp = -1;

			if (_count > 0)
			{
				outTmp = _internalLinkedList.First();
			}


			return outTmp;
		}

		public int Back()
		{
			int outTmp = -1;

			if (_count > 0)
			{
				outTmp = _internalLinkedList.Last();
			}


			return outTmp;
		}
	}


	public class Program
	{
		static StringBuilder sb = new StringBuilder();
		static Queue queue = new Queue();
		public static void aMain()
		{
			int testCases = int.Parse(Console.ReadLine());

			for (int i = 0; i < testCases; i++)
			{
				RunCommand();
			}
			Console.WriteLine(sb.ToString());
		}

		public static void RunCommand()
		{
			string[] args = Console.ReadLine().Split(" ");

			switch (args[0])
			{
				case "push":
					queue.Push(int.Parse(args[1]));
					break;
				case "pop":
					sb.AppendLine(queue.Pop().ToString());
					break;
				case "size":
					sb.AppendLine(queue.Size().ToString());
					break;
				case "empty":
					sb.AppendLine(queue.Empty() ? "1" : "0");
					break;
				case "front":
					sb.AppendLine(queue.Front().ToString());
					break;
				case "back":
					sb.AppendLine(queue.Back().ToString());
					break;
			}


		}
	}
}
