#include<cstdio>
#include<iostream>
#include"MyHeader.h" 

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)

#define PI 3.141592

inline float CircleArea(int radious);   // �Լ�����  

inline float CircleArea(int radious)    // �Լ�����  
{
	return PI*radious*radious;
}
 
 int main()
 {
//[Step 3]ȭ�����(cout)�� �̿��� ���� ������ ���ϱ�
	int iRadious = GetIntNum(1, 100); 
	float fArea  = CircleArea(iRadious);     // �Լ�ȣ��  
	cout << "Area is " << fArea << endl;
	cout.precision(4);    // 4���� ��Ȯ�� 
	cout << "Area is " << fArea << endl;
 }
