#include<iostream>

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)
#define PI 3.14

class Circle
{
	int radiuos;       // default 값 : private 
public:
	Circle()					 {radiuos = 1;}              // [ 생성자 ⓛ]  
	Circle(int radiuos)			 {this->radiuos = radiuos;}  // [ 생성자 ②]  
                                                             // this-> : 멤버 변수를 가리킴  
	void setRadious(int radiuos) { this->radiuos = radiuos;}
	double getArea() {return PI*radiuos*radiuos;}
};

int main()
{
	Circle c1;        // [ 생성자 ⓛ] 
	Circle c2(5);     // [ 생성자 ②]
	Circle c3(10);    // [ 생성자 ②]

	cout << "Area of c1 is " << c1.getArea() << endl;
	cout << "Area of c2 is " << c2.getArea() << endl;
	cout << "Area of c3 is " << c3.getArea() << endl;

	
}
