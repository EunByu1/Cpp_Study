/* [ 2개의 생성자를 가진 Circle 클래스 ] */

# pragma region [0] include
	// # include <iostream> : 입출력 스트림 객체(cout)와 조작자(endl), 스트림 삽입 연산자(<<)를 사용하기 위해 iostream을 include함
# pragma endregion 
#include <iostream>

# pragma region [1] std 생략
	// std 이름 공간에 선언된 모든 이름에 대해 std::를 생략함
# pragma endregion
using namespace std;

# pragma region [2] 클래스 선언 
	// 클래스는 클래스 선언부, 클래스 구현부로 나뉨 
# pragma endregion
class Circle						// [ 클래스 선언부 ] 
{
public:
	int radius;
	Circle();
	Circle(int r);
	
	double getArea();
};

# pragma region [3-1] 생성자 구현
	// 매개 변수 없는 생성자 구현 
# pragma endregion
Circle::Circle()
{
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

# pragma region [3-2] 생성자 구현
	// 매개 변수 있는 생성자 구현 
# pragma endregion
Circle::Circle(int r)
{
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea()			// [ 클래스 구현부 ] 
{
	return 3.14 * radius * radius;
}

int main()
{

# pragma region [4-1] 객체 생성 
	// 객체 donut를 생성함 
	// donut.getArea() : donut객체의 멤버 함수를 호출함
# pragma endregion
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;


# pragma region [4-2] 객체 생성 
	// 객체 pizza를 생성함 
	// pizza.getArea() : pizza객체의 멤버 함수를 호출함
# pragma endregion
	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

	return 0;

}