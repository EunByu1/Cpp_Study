// -------------------------------------
// -------------------------------------
/*
�� ��ü -> ��ȣ�ؾ��� 
   �� �׷��� ��ȣ�ϱ� ���� ĸ�����·� �ص�(ĸ��ȭ)
   
�� ������ ĸ���� ��ȣ�ϸ� ���� X 
   �� ���� �����ڷ� �Ϻδ� ����!
*/
// -------------------------------------
// -------------------------------------

#include<iostream>

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)

class Circle        // Ŭ���� ���� 
{
public:
	int iRadius;
	float getArea();
};

float Circle::getArea()       // Circle Ŭ������ ����Լ� getArea()����  
{
	return 3.14*iRadius*iRadius;
}

int main()
{
	Circle circle1;          // CircleŬ������ ��ü ����  
	circle1.iRadius = 1;     
	cout << "Circle1 area is " << circle1.getArea() << endl;
}



