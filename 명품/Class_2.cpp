/* [ class를 이용하여 사각형 면적 구하기 ] */

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
class Rectangle				// [ 클래스 선언부 ] 
{
public:
	int width  = 0;
	int height = 0;

	int getArea();
};

int Rectangle::getArea()	// [ 클래스 구현부 ] 
{
	return width * height;
}

int main()
{

# pragma region [3-1] 객체 생성 
	// 객체 rect를 생성함 
	// rect.width	   : rect객체의 멤버 변수에 접근함
	// rect.height     : rect객체의 멤버 변수에 접근함
	// rect.getArea()  : rect객체의 멤버 함수를 호출함
# pragma endregion
	Rectangle rect;
	rect.width  = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;

	return 0;

}