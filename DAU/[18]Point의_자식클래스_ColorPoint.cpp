#include<iostream>
#include<string>

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)

//--------------------------------------------
//			클래스/함수 선언
//--------------------------------------------
class Point        // 클래스 선언  
{
	int x, y;
public:
	void SetPostion(int x, int y) { this->x=x;this->y=y;}
	void ShowPoint()			  { cout << "X = " << x << ", Y = " << y << endl;}
};

class ColorPoint:public Point   // [ 상속 ]  
{
	string color;
public:
	void SetColor(string color) {this->color = color;}
	void ShowColorPoint();
};

void ColorPoint::ShowColorPoint()
{
	cout << color;
	ShowPoint();
}
//--------------------------------------------


int main()
{
    
	ColorPoint Cp1;
	Cp1.SetPostion(1,2);
	Cp1.SetColor("red: ");
	Cp1.ShowColorPoint();
	
	return 0;
	
}







