/* [ Rectangle 클래스 생성 ] */

# pragma region [0] include
	// # include <iostream> : 입출력 스트림 객체(cout)와 조작자(endl), 스트림 삽입 연산자(<<)를 사용하기 위해 iostream을 include함
# pragma endregion 
#include <iostream>

# pragma region [1] std 생략
	// std 이름 공간에 선언된 모든 이름에 대해 std::를 생략함
# pragma endregion
using namespace std;

# pragma region [2] 클래스 선언 
# pragma endregion
class Rectangle					// [ 클래스 선언부 ]
{
public:
	int width, height;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle()				
{
	width = height = 1;
}

Rectangle::Rectangle(int w, int h)
{
	width = w, height = h;
}

Rectangle::Rectangle(int length)
{
	width = height = 1;
}

bool Rectangle::isSquare()		// [ 클래스 구현부 ]
{
	if (width == height) return true;
	else return false;
}


int main()
{

# pragma region [3] 객체 생성 
# pragma endregion
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);


# pragma region [4] 멤버 함수 호출
# pragma endregion
	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;

	return 0;

}