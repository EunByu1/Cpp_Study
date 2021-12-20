#include<iostream>

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)

//--------------------------------------------
//			클래스/함수 선언
//--------------------------------------------
class Point
{
	int x, y;
public:
	void SetPostion(int x, int y) { this->x=x;this->y=y;}
	void ShowPoint()			  { cout << "X = " << x << ", Y = " << y << endl;}
};
//--------------------------------------------


//--------------------------------------------
//클래스 멤버함수 또는 일반함수 정의(구현) 
//--------------------------------------------

//--------------------------------------------


int main()
{
	Point P1;     // Point 클래스의 P1 객체 생성 ! 
	P1.SetPostion(3, 5);
	P1.ShowPoint();
	P1.SetPostion(13, 15);
	P1.ShowPoint();
	
	return 0;
}
