#include <string.h>
#include <stdio.h>
//재미있는 오류찾기 시잒ㄲㄲㄲㄲㄲ갇갇ㅈ기ㅏㄲㄲㄲㄲㄲㄲㄲㄲㄲㄲㄲㄲㄲㄲㄲㄲㄲㄲㄲㄲ
char opCodeTable[46][7] =
{
	"ADD",		"00000",
	"ADDC",		"00001",
	"SUB" ,		"00010",
	"SUBC",		"00011",
	"MOV",		"00100",
	"MOVC",		"00101",
	"AND",		"00110",
	"ANDC",		"00111",
	"OR",		"01000",
	"ORC",		"01001",
	"NOT",		"01010",
	"MULT",		"01100",
	"MULTC",	"01101",
	"LSFTL",	"01110",
	"LSFTLC",	"01111",
	"LSFTR",	"10000",
	"LSFTRC",	"10001",
	"ASFTR",	"10010",
	"ASFTRC",	"10011",
	"RL",		"10100",
	"RLC",		"10101",
	"RR",		"10110",
	"RRC",		"10111"

};//문제X

void DecToBin(int num, int option, char* bin)
{
	for (int i = option ? 3 : 2; i >= 0; i--, num /= 2)
	{
		bin[i] = num % 2 ? '1' : '0';
	}
}

void CopyString(char* destination, char* target, int destinationStartPoint, int destinationEndPoint)
{

	for (int i = destinationStartPoint, k = 0; i <= destinationEndPoint; i++, k++)
	{
		destination[i] = target[k];
	}
}

int amain()
{

	char machineCode[17] = "0000000000000000", instruction[7], bin[5] = "0000";
	int instructionCnt, rD, rA, thirdCode;
	scanf_s("%d", &instructionCnt);

	while (instructionCnt--)
	{
		scanf_s("%s%d%d%d", instruction , (unsigned int)sizeof(instruction), &rD, &rA, &thirdCode);


		for (int i = 0; i < 45; i += 2)
		{
			if (!strcmp(opCodeTable[i], instruction))
			{
				CopyString(machineCode, opCodeTable[i + 1], 0, 4);
			}
		}

		DecToBin(rD, 0, bin);
		CopyString(machineCode, bin, 6, 8);
		DecToBin(rA, 0, bin);
		CopyString(machineCode, bin, 9, 11);
		machineCode[4] == '0' ? DecToBin(thirdCode, 0, bin) : DecToBin(thirdCode, 1, bin);
		CopyString(machineCode, bin, 12, machineCode[4] == '0' ? 14 : 15);


		printf("%s\n", machineCode);

		for (int i = 0; i < 16; i++)
		{
			machineCode[i] = '0';
		}


	}



	return 0;
}

/*
반복문 범위를 1 낮게했네 에라이 이거때문에 3시간을 사투를했어 ㄹ암니뢰ㅏㅁ너오라ㅣㅁ너ㅗㅇ하ㅓㅣㅇㅁㄴ파ㅓㅣㅇ쿺라ㅓㅣㄴ아ㅣ러ㅜ나멍
*/

#pragma region oldCode

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
unordered_map<string, string> oinstructionTable;

string oDecToBin(int num, int option)
{
	string bin = option ? "0000" : "000";

	for (int i = option ? 3 : 2; i >= 0; i--, num /= 2)
	{
		bin[i] = num % 2 ? '1' : '0';
	}

	return bin;
}


int omain()
{
	
	oinstructionTable["ADD"] = "00000";
	oinstructionTable["ADDC"] = "00001";
	oinstructionTable["SUB"] = "00010";
	oinstructionTable["SUBC"] = "00011";
	oinstructionTable["MOV"] = "00100";
	oinstructionTable["MOVC"] = "00101";
	oinstructionTable["AND"] = "00110";
	oinstructionTable["ANDC"] = "00111";
	oinstructionTable["OR"] = "01000";
	oinstructionTable["ORC"] = "01001";
	oinstructionTable["NOT"] = "01010";
	oinstructionTable["MULT"] = "01100";
	oinstructionTable["MULTC"] = "01101";
	oinstructionTable["LSFTL"] = "01110";
	oinstructionTable["LSFTLC"] = "01111";
	oinstructionTable["LSFTR"] = "10000";
	oinstructionTable["LSFTRC"] = "10001";
	oinstructionTable["ASFTR"] = "10010";
	oinstructionTable["ASFTRC"] = "10011";
	oinstructionTable["RL"] = "10100";
	oinstructionTable["RLC"] = "10101";
	oinstructionTable["RR"] = "10110";
	oinstructionTable["RRC"] = "10111";


	int oinstructionCnt, orD, orA, othirdCode;
	string oinstruction, oinstructionCode;
	cin >> oinstructionCnt;

	while (oinstructionCnt--)
	{
		cin >> oinstruction;
		cin >> orD;
		cin >> orA;
		cin >> othirdCode;
		bool oenableRA = oinstruction.compare("MOV") || oinstruction.compare("MOVC") || oinstruction.compare("NOT");
		oinstructionCode = oinstructionTable[oinstruction];


		if (oinstructionCode[4] == '0')
		{
			cout << oinstructionCode << '0' << oDecToBin(orD, 0) << (oenableRA ? oDecToBin(orA, 0) : "000") << oDecToBin(othirdCode, 0) << '0' << '\n';
		}
		else
		{
			cout << oinstructionCode << '0' << oDecToBin(orD, 0) << (oenableRA ? oDecToBin(orA, 0) : "000") << oDecToBin(othirdCode, 1) << '\n';
		}
	}



	return 0;
}



#pragma endregion
