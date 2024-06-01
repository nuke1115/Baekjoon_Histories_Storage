#include <stdio.h>
int amain()
{
	//[ => 1 , ( => 2
	char word[102]{'\0'} , stack[101];
	
	while (true)
	{
		fgets(word, sizeof(word),stdin);
		bool isBalanced = true;
		int index = -1;
		if (word[0] == '.')
		{
			break;
		}

		for (int i = 0; word[i] != '.';i++)
		{
			if (word[i] != '(' && word[i] != ')' && word[i] != '[' && word[i] != ']')
			{
				continue;
			}

			if (word[i] == '[' || word[i] == ']')
			{
				if (word[i] == '[')
				{
					index++;
					stack[index] = 1;
					
					continue;
				}
				else if (word[i] == ']' && index >= 0 && stack[index] == 1)
				{
					index--;
					continue;
				}
				else
				{
					isBalanced = false;
					break;
				}
			}
			else
			{
				if (word[i] == '(')
				{
					index++;
					stack[index] = 2;
					continue;
				}
				else if (word[i] == ')' && index >= 0 && stack[index] == 2)
				{
					index--;
					continue;
				}
				else
				{
					isBalanced = false;
					break;
				}
				
			}
		}
		puts(isBalanced && index == -1 ? "yes" : "no");

	}


	return 0;
}