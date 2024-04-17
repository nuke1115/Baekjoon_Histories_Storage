#include <stdio.h>
#include <array>


int main()
{

	char input[6];

	int indexLeft = 0;
	int indexRight = 0;

	bool isPalindrome = true;

	while (true)
	{
		

		scanf_s("%s" , &input , sizeof(input));
		if (input[0] == '0')
		{
			break;
		}
		indexLeft = 0;
		
		indexRight = 

		isPalindrome = true;

		for (; indexLeft <= indexRight; indexLeft++ , indexRight --)
		{
			if (input[indexLeft] != input[indexRight])
			{
				isPalindrome = false;
			}
		}
		
		puts(isPalindrome ? "yes" : "no");


	}
	


	return 0;
}