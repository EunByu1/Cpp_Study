/* [ 구구단 출력 ] */

# pragma region [0] include
	// # include <iostream> : 입출력 스트림 객체(cout)와 스트림 삽입 연산자(<<)를 사용하기 위해 iostream을 include함
# pragma endregion 
#include <iostream>

# pragma region [1] std 생략
	// std 이름 공간에 선언된 모든 이름에 대해 std::를 생략함
# pragma endregion
using namespace std;

int main()
{

# pragma region [2] 출력
# pragma endregion
	for(int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << j << 'x' << i << '=' << i * j << '\t';
		}
	
		cout << '\n';
	}

	return 0;

}