#include<iostream>
#include<string>

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)


int main()
{
	
	string s3;
	
//string(1) ȭ�� ��� 
	s3 = "I love you";
	cout << s3 << endl;
	s3 = "you love me?";
	cout << s3 << endl;
	s3 = "I am so happy.";
	cout << s3 << endl;


//string(2) ȭ�� �Է� 
	cout << endl << endl;
	getline(cin, s3, '\n');
	// '\n'�� ������ ������ �� ���� 
    // �ش� ���ο� �ִ� ���� �� ������! 

	cout << s3 << endl;

    return 0;
    
}


 
