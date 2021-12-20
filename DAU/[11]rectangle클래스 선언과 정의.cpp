#include<iostream>

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)

class Circle           // 클래스 선언  
{
public:
	int iRadius;
	float getArea();
};
//직사각형 클래스 
class Rectangle
{
public:
	int iWidth, iHeight;
	float getArea();
};

//Cube클래스
class Cube
{
	int iWidth, iHeight, iDepth;       // default 값 : private 
public:
	float getvolume();
	Cube();				// [ 생성자 ]
	~Cube();			// [ 소멸자 ] 
};

Cube::Cube()     // [ 생성자 정의 ] 
{
	iWidth = 10;
	iHeight = 10;
	iDepth = 10;
}
Cube::~Cube()   // [ 소멸자 정의 ] 
{
}
//직사각형 넓이
float Cube::getvolume()
{
	return iWidth*iHeight*iDepth;
} 

//직사각형 넓이
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
	Circle circle1;   // Circle클래스에 circle1이라는 이름의 객체생성  
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
	
	Cube cube1;      // Cube클래스에 cube1이라는 이름의 객체생성  

	cout << "cube1 volume is " << cube1.getvolume() << endl;
	
}
