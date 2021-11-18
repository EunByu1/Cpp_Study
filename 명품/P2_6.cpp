/* [ 'x'의 개수를 화면에 출력 ] */

# pragma region [0] include
	// # include <iostream> : 입출력 스트림 객체(cout, cin)와 스트림 삽입 연산자(<<, >>)를 사용하기 위해 iostream을 include함
# pragma endregion 
#include <iostream>

#define SIZE 100

# pragma region [1] std 생략
	// std 이름 공간에 선언된 모든 이름에 대해 std::를 생략함
# pragma endregion
using namespace std; 

int main()
{

# pragma region [2] 변수 선언부 
# pragma endregion
	int icount = 0;
	char cValue[SIZE];


# pragma region [3] 화면 입출력
# pragma endregion
	cout << "문자들을 입력하라(100개 미만)." << endl;
	cin.getline(cValue, 100, '\n');


# pragma region [4] 탐색
	// 'x'의 개수를 변수 icount에 저장
# pragma endregion
	for (int i = 0; i < SIZE; i++)
	{
		if (cValue[i] == 'x')
		{
			icount += 1;
		}
	}


# pragma region [5] 출력 
	// 'x'의 개수를 화면에 출력
# pragma endregion
	cout << "x의 개수는 " << icount;


	return 0;

} 