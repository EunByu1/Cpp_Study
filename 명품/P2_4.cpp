/* [ 키보드로부터 두 개의 정수를 읽어 큰 수를 화면에 출력 ] */

# pragma region [0] include
	// # include <iostream> : 입출력 스트림 객체(cout, cin)와 스트림 삽입 연산자(<<, >>)를 사용하기 위해 iostream을 include함
# pragma endregion 
#include <iostream>

# pragma region [1] std 생략
	// std 이름 공간에 선언된 모든 이름에 대해 std::를 생략함
# pragma endregion
using namespace std;

int main()
{

# pragma region [2] 변수 선언부
# pragma endregion
	int iFirst  = 0;
	int iSecond = 0;


# pragma region [3] 데이터 입력
# pragma endregion
	cin >> iFirst >> iSecond;


# pragma region [4] 비교
	// 키보드로부터 입력받은 두 개의 정수를 비교
# pragma endregion
	if (iFirst < iSecond)
	{
		cout << "큰 수 = " << iSecond;
	}
	else
	{
		cout << "큰 수 = " << iFirst;
	}
	

	return 0;

}