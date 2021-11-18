/* [ 1 ~ 100까지 정수를 한 줄에 10개씩 출력 ] */

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
	// 1 ~ 100까지 정수를 한 줄에 10개씩 출력
# pragma endregion
	for (int i = 1; i < 100 + 1; i++)
	{
		cout << i << "\t";

		if ((i % 10) == 0)
		{
			cout << "\n";
		}
	}

	return 0; 

}