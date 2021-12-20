#include<iostream>

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)

class Circle           // Ŭ���� ����  
{
public:
	int iRadius;
	float getArea();
};
//���簢�� Ŭ���� 
class Rectangle
{
public:
	int iWidth, iHeight;
	float getArea();
};

//CubeŬ����
class Cube
{
	int iWidth, iHeight, iDepth;       // default �� : private 
public:
	float getvolume();
	Cube();				// [ ������ ]
	~Cube();			// [ �Ҹ��� ] 
};

Cube::Cube()     // [ ������ ���� ] 
{
	iWidth = 10;
	iHeight = 10;
	iDepth = 10;
}
Cube::~Cube()   // [ �Ҹ��� ���� ] 
{
}
//���簢�� ����
float Cube::getvolume()
{
	return iWidth*iHeight*iDepth;
} 

//���簢�� ����
float Rectangle::getArea()
{
	return iWidth*iHeight;
}
 


float Circle::getArea()
{
	return 3.14*iRadius*iRadius;
}

int main()
{
	Circle circle1;   // CircleŬ������ circle1�̶�� �̸��� ��ü����  
	circle1.iRadius = 1;
	cout << "Circle1 area is " << circle1.getArea() << endl;
	
	Rectangle rect1;
	rect1.iHeight = 10;
	rect1.iWidth  = 10;
	cout << "rect1 area is " << rect1.getArea() << endl;
	
	Rectangle rect2;
	rect2.iHeight = 78;
	rect2.iWidth  = 678;
	cout << "rect2 area is " << rect2.getArea() << endl;
	
	Cube cube1;      // CubeŬ������ cube1�̶�� �̸��� ��ü����  

	cout << "cube1 volume is " << cube1.getvolume() << endl;
	
}
