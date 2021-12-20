#include<iostream>
#include "MyTrueClass.h"

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)
      
int main()
{
//--------------------------------------------
//-----------Circle class 객체---------------- 
	Circle circle1;
	circle1.iRadius = 1;
	cout << "Circle1 area is " << circle1.getArea() << endl;
//--------------------------------------------
	
    cout << endl << endl;
	
//--------------------------------------------
//-----------Rectangle class 객체-------------
	Rectangle rect1;
	rect1.iHeight = 10;
	rect1.iWidth  = 10;
	cout << "rect1 area is " << rect1.getArea() << endl;
	 
	Rectangle rect2;
	rect2.iHeight = 78;
	rect2.iWidth  = 678;
	cout << "rect2 area is " << rect2.getArea() << endl;
//--------------------------------------------
	
 cout << endl << endl;

//--------------------------------------------
//-----------Cube class 객체------------------
	Cube cube1;
	cout << "cube1 volume is " << cube1.getvolume() << endl;
	
	Cube cube2(5,8,10);
	cout << "cube2 volume is " << cube2.getvolume() << endl;
	
	cube1.change(12,12,12);
	cube2.change(7,8,9);
	cout << endl << endl;
	cout << "cube1 volume is " << cube1.getvolume() << endl;
	cout << "cube2 volume is " << cube2.getvolume() << endl;
//--------------------------------------------
	
	return 0;
}
