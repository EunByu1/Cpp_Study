/* [ 멤버 변수 초기화와 위임 생성자 활용 ] */

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
class Point			
{
	int x, y;
public:
	Point();
	Point(int a, int b);
};

# pragma region [*] 멤버 변수 초기화
# pragma endregion
Point::Point() : Point(0, 0) {}				// [ 위임 생성자 ]
Point::Point(int a, int b) : x(a), y(b)		// [ 타겟 생성자 ]
{
	cout << "(" << x << "," << y << ")" << endl;
}

int main()
{

# pragma region [3] 객체 생성 
# pragma endregion
	Point origin;
	Point target(10, 20);

	return 0;

}

