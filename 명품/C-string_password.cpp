/* [ C-String을 이용하여 암호가 정확하게 입력되면 프로그램을 종료하는 프로그램 ] */

# pragma region [0] include
	// # include <iostream> : 입출력 스트림 객체(cout, cin)와 조작자 함수(endl), 스트림 삽입 연산자(<< , >> )를 사용하기 위해 iostream을 include함
	// # include <cstring>  : strcmp()함수를 사용하기 위해 cstring을 include함 
# pragma endregion
# include <iostream>
# include <cstring>

# pragma region [1] std 생략
	// std 이름 공간에 선언된 모든 이름에 대해 std::를 생략함
# pragma endregion 
using namespace std;

int main()
{

# pragma region [2] 변수 선언
	// 문자열 변수 password를 선언함
# pragma endregion
	char password[11];
	
# pragma region [3] 화면 입출력
	// 정확한 암호를 입력받을 때까지 무한루프 
# pragma endregion 
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	
	while (true)
	{
		cout << "암호 >>";
		
		cin >> password;

		if(strcmp(password, "C++") == 0)
		{
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}	// if
		else
		{
			cout << "암호가 틀립니다." << endl;
		}	// else
	}		// while (true)

	return 0;
}