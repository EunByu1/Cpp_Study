/* [ Circle 클래스에 소멸자 작성 및 실행 ]*/

# pragma region [0] include
	// # include <iostream> : 입출력 스트림 객체(cout)와 조작자(endl), 스트림 삽입 연산자(<<)를 사용하기 위해 iostream을 include함
# pragma endregion 
#include <iostream>

# pragma region [1] std 생략
	// std 이름 공간에 선언된 모든 이름에 대해 std::를 생략함
# pragma endregion
using namespace std; 

# pragma region [2] 클래스 생성
# pragma endregion
class Circle				// [ 클래스 선언부 ]
{
public :
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle :: Circle()			// [ 클래스 생성자 ]
{
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle :: Circle(int r)		// [ 클래스 생성자 ]
{
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle :: ~Circle()			// [ 클래스 소멸자 ]
{
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea()	// [ 클래스 구현부 ]
{
	return 3.14 * radius * radius;
}


int main()
{

# pragma region [3] 객체 생성 
# pragma endregion
	Circle donut;
	Circle pizza(30);

	return 0;

}