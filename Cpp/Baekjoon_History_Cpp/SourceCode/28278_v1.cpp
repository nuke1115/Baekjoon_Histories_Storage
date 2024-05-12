#include <stdio.h>

class Stack
{
private:
	int index = -1;
	int internalArray[1000000];
public:
	Stack()
	{

	}

	void Push(int item)
	{
		index++;
		internalArray[index] = item;
		
	}

	int Top() const
	{
		if (index >= 0)
		{
			return internalArray[index];
		}
		else
		{
			return -1;
		}
	}

	int Count() const
	{
		return index + 1;
	}

	int Empty() const
	{
		return index < 0;
	}

	int Pop()
	{
		if (index >= 0)
		{
			int tmp = internalArray[index];
			internalArray[index] = -1;
			index--;
			return tmp;
		}
		else
		{
			return -1;
		}
	}
};

int amain()
{
	int testCase;
	scanf_s("%d",&testCase);
	Stack stack;
	int command;

	for (int i = 0; i < testCase; i++)
	{
		scanf_s("%d" , &command);
		if (command == 1)
		{
			scanf_s("%d" , &command);
			stack.Push(command);
		}
		else if (command == 2)
		{
			printf("%d\n" , stack.Pop());
		}
		else if (command == 3)
		{
			printf("%d\n" , stack.Count());
		}
		else if (command == 4)
		{
			printf("%d\n" , stack.Empty());
		}
		else if (command == 5)
		{
			printf("%d\n" , stack.Top());
		}
	}
	return 0;
}