/* [ "yes"가 입력될 때까지 종료하지 않는 프로그램 작성 ] */

# pragma region [0] include
	// # include <iostream> : 입출력 스트림 객체(cout)와 조작자(endl), 스트림 삽입 연산자(<<)를 사용하기 위해 iostream을 include함
	// # include <string>	: string 클래스를 사용하기 위해 string 헤더파일을 include함 
# pragma endregion 
#include <iostream>
#include <string>


# pragma region [1] std 생략
	// std 이름 공간에 선언된 모든 이름에 대해 std::를 생략함
# pragma endregion
using namespace std;


int main()
{
# pragma region [2] 변수 선언부 
# pragma endregion
	string sAnswer;
	bool bYes = true;

# pragma region [3] 조건 및 출력 
# pragma endregion 
	do {
		cout << "종료하고 싶으면 yes를 입력하세요 >>";
		getline(cin, sAnswer);

		if (sAnswer == "yes")
		{
			bYes = false;
		}
	} while (bYes);

	printf("종료합니다. . .");


	return 0;
}