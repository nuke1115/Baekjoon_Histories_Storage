#include <stdio.h>
#include <list>
#include <cstring>


using namespace std;




class Stack
{
private:
	list<int> _internalList;


public:
	Stack()
	{

	}

	void push(int item)
	{
		_internalList.push_back(item);
	}

	int pop()
	{
		int tmp = -1;

		if (!_internalList.empty())
		{
			tmp = _internalList.back();
			_internalList.pop_back();
		}

		return tmp;
	}

	int size() const
	{
		return _internalList.size();
	}

	bool empty() const
	{
		bool isEmpty = true;

		if (!_internalList.empty())
		{
			isEmpty = false;
		}
		return isEmpty;
	}

	int top() const
	{
		int tmp = -1;

		if (!_internalList.empty())
		{
			tmp = _internalList.back();
		}
		return tmp;
	}

};

void runCommand(Stack* stack, char command[], int item);

bool canHaveSecondArg(char command[]);


int main()
{
	Stack stack = Stack();

	int testCases;
	char command[6];
	int item;


	scanf_s("%d" , &testCases);

	for (int i = 0; i < testCases; i++)
	{
		item = -1;

		scanf_s("%s" , &command , (uint16_t)sizeof(command));

		if (canHaveSecondArg(command))
		{
			scanf_s("%d" , &item);
		}

		runCommand(&stack , command , item);
		
	}


}

bool canHaveSecondArg(char command[])
{
	if (!strcmp(command , "push"))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void runCommand(Stack *stack,char command[] , int item)
{
	
	if (!strcmp(command , "push"))
	{
		stack->push(item);
	}
	else if (!strcmp(command, "pop"))
	{
		printf("%d\n" , stack->pop());
	}
	else if (!strcmp(command, "size"))
	{
		printf("%d\n", stack->size());
	}
	else if (!strcmp(command, "empty"))
	{
		printf("%d\n", stack->empty());
	}
	else if (!strcmp(command, "top"))
	{
		printf("%d\n", stack->top());
	}
}