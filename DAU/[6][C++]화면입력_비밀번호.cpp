#include<iostream>
#include<cstring>
#include"MyHeader.h"

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)


int main()
{
	char cPassword[10];
	cout < "Enter your password to teminte the program.\n";
	while(1)
	{
		cout << "PW: ";
		cin >> cPassword;
		if(strcmp(cPassword, "AI604") == 0)
		{
			cout << "Program is  terminated." << endl;
			break;
		}
		else
		{
			cout << "Try again\n";
			continue;
		}
	}
}
