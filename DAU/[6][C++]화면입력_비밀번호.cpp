#include<iostream>
#include<cstring>
#include"MyHeader.h"

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)


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
