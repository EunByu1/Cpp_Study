#include<iostream>
#include<string>

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)

//--------------------------------------------
//			Ŭ����/�Լ� ����
//--------------------------------------------
class Point        // Ŭ���� ����  
{
	int x, y;
public:
	void SetPostion(int x, int y) { this->x=x;this->y=y;}
	void ShowPoint()			  { cout << "X = " << x << ", Y = " << y << endl;}
};

class ColorPoint:public Point   // [ ��� ]  
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







