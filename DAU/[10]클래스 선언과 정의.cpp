// -------------------------------------
// -------------------------------------
/*
ⓛ 객체 -> 보호해야함 
   → 그래서 보호하기 위해 캡슐형태로 해둠(캡슐화)
   
② 완전히 캡슐로 보호하면 공유 X 
   → 접근 지정자로 일부는 공유!
*/
// -------------------------------------
// -------------------------------------

#include<iostream>

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)

class Circle        // 클래스 선언 
{
public:
	int iRadius;
	float getArea();
};

float Circle::getArea()       // Circle 클래스에 멤버함수 getArea()정의  
{
	return 3.14*iRadius*iRadius;
}

int main()
{
	Circle circle1;          // Circle클래스의 객체 생성  
	circle1.iRadius = 1;     
	cout << "Circle1 area is " << circle1.getArea() << endl;
}



