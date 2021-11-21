/* [ Circle 클래스를 C++ 구조체를 이용하여 재작성 ] */

# pragma region [0] include
	// # include <iostream> : 입출력 스트림 객체(cout)와 조작자(endl), 스트림 삽입 연산자(<<)를 사용하기 위해 iostream을 include함
# pragma endregion 
#include <iostream>

# pragma region [1] std 생략
	// std 이름 공간에 선언된 모든 이름에 대해 std::를 생략함
# pragma endregion
using namespace std;

# pragma region [2] struct 생성
# pragma endregion
struct StructCircle
{
private:
	int radius;

public:
	StructCircle(int r)
	{
		radius = r;
	}
	double getArea();
};

double StructCircle::getArea()
{
	return 3.14 * radius * radius;
}


int main()
{

# pragma region [3] struct 객체 생성
# pragma endregion 
	StructCircle waffle(3);
	cout << "면적은 " << waffle.getArea();

	return 0;

}