#include<cstdio>         
#include<iostream>

using namespace std;	//std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����) 	
 
int main()
{
	
// [Step 1] ȭ�����(���ڿ�) -> printf("Hello!\n");
// std:: stdlid�� ���õ� �Լ��� ��� ���ǵǾ� �ִ� namespace 

	std::cout << "Hello!\n";
	std::cout << "Hello!" << '\n';
	std::cout << "Hello!" << endl;
	
//[Step 2] ȭ�����(����) -> %d %f, %c
	int iSample = 562316;
	char cSample = '#';
	float fSample = 432.123456789;
	
	cout << "int    = " << iSample << endl;
	cout << "char   = " << cSample << endl;
	cout << "float  = " << fSample << endl;	//�⺻ precision 6�ڸ�(���� + �Ҽ�) 
	cout.precision(5);     // 5�� ��Ȯ��  
	cout << "float  = " << fSample << endl; //�⺻ precision 5�ڸ�(���� + �Ҽ�) 
	
}
