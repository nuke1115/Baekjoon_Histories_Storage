#include <iostream>
#include <string>
#include <stack>
using namespace std;

int amain(void)
{
	const char zero = '0';
	string binNumA;
	string binNumB;
	stack<int> outPutStack;
	int testCase , carry;
	cin >> testCase;


	for (; testCase > 0; testCase--)
	{
		cin >> binNumA >> binNumB;
		
		carry = 0;
		int lengthA = binNumA.length() - 1, lengthB = binNumB.length() - 1;
		
		for (; lengthA >= 0 || lengthB>= 0; lengthA-- , lengthB--)
		{
			int numA = lengthA < 0 ? 0 : binNumA[lengthA] - zero;
			int numB = lengthB < 0 ? 0 : binNumB[lengthB] - zero;

			int outPut = (numA ^ numB) ^ carry;
			carry = ((numA ^ numB) && carry) || (numA && numB);
			outPutStack.push(outPut);
		}

		if (carry)
		{
			outPutStack.push(carry);
		}

		bool canPrint = false;

		while (!outPutStack.empty())
		{
			int tmp = outPutStack.top();
			outPutStack.pop();
			
			
			if (tmp)
			{
				canPrint = true;
			}

			if (!canPrint)
			{
				continue;
			}

			cout << tmp;
		}

		if (!canPrint)
		{
			cout << '0';
		}

		cout << endl;

	}
	


	return 0;
}