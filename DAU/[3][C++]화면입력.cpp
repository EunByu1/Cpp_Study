#include<iostream>
#include"MyHeader.h"

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)

int main()
{
    
	int iNumber = 0;
	cout << "Your favoriate integer number?" << endl;
	cout << "Your favoriate integer number is " << iNumber << endl;
	cout << endl << endl;
	
	cout << "Your favoriate integer number?" << endl;
	iNumber = GetIntNum(1, 1000); 
	cout << "Your favoriate integer number is " << iNumber << endl;
	cout << endl << endl;
	 
//[Step 1] ȭ�� �Է� (cin) 
	
	cout << "Your favoriate integer number?" << endl;
	cin >> iNumber;
	cout << "Your favoriate integer number is " << iNumber << endl;
	cout << endl << endl;
	
}
