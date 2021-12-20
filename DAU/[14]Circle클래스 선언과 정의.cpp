#include<iostream>

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)
#define PI 3.14

class Circle
{
	int radiuos;       // default �� : private 
public:
	Circle()					 {radiuos = 1;}              // [ ������ ��]  
	Circle(int radiuos)			 {this->radiuos = radiuos;}  // [ ������ ��]  
                                                             // this-> : ��� ������ ����Ŵ  
	void setRadious(int radiuos) { this->radiuos = radiuos;}
	double getArea() {return PI*radiuos*radiuos;}
};

int main()
{
	Circle c1;        // [ ������ ��] 
	Circle c2(5);     // [ ������ ��]
	Circle c3(10);    // [ ������ ��]

	cout << "Area of c1 is " << c1.getArea() << endl;
	cout << "Area of c2 is " << c2.getArea() << endl;
	cout << "Area of c3 is " << c3.getArea() << endl;

	
}
