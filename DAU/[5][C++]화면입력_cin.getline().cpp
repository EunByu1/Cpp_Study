#include<iostream>
#include"MyHeader.h"

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)
      
int main()
{

//[Step 4] ���ڿ� ȭ������� 
	char cName[20];
	cout << "Enter your name.\n";
	cin.getline(cName, 20, '\n');  // '\n'�� ������ ������ �� ���� 
                                   // �ش� ���ο� �ִ� ���� �� ������  
	cout << "your name is " << cName<< "�Դϴ�." << endl;
	
	
}
