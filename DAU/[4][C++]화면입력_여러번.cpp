#include<iostream>
#include"MyHeader.h"

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)

int main()
{
	int iSample = 0;
	char cSample = 0;
	float fSample = 0.0;
	
	// std.cin   : �Է� 
    // std.cout : ���  
	cin >>iSample>>cSample>>fSample;       // cin == scanf 
	cout <<endl << iSample<<endl << cSample<< endl << fSample;
}
