#include<cstdio>
#include<iostream>

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)

#define PI 3.141592

float CircleArea(int radious);  // �Լ�����  

float CircleArea(int radious)   // �Լ�����  
{
	return PI*radious*radious;
}
 
 int main()
 {
 	//[Step 3]ȭ�����(cout)�� �̿��� ���� ������ ���ϱ�
	int iRadious = 5;
	float fArea  = CircleArea(iRadious);   // �Լ�ȣ�� 
	cout << "Area is " << fArea << endl;
	cout.precision(4);    // 4�� ��Ȯ��  
	cout << "Area is " << fArea << endl;
 }
