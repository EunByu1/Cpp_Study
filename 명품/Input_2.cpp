/* [ 화면 입력 ] */

# pragma region [0] include
	// 입출력 스트림 객체(cout, cin)와 조작자 함수(endl), 스트림 삽입 연산자(<< , >> )를 사용하기 위해 iostream을 include함
# pragma endregion
# include <iostream>

# pragma region [1] std 생략
	// std 이름 공간에 선언된 모든 이름에 대해 std::를 생략함
# pragma endregion
using namespace std;

int main()
{

# pragma region [2] 화면 입출력 
	// 데이터를 화면에 입출력함 
# pragma endregion
	cout << "이름을 입력하세요 : ";

	char name[11];				// 한글은 5개, 영문은 10개까지 저장할 수 있음 
	cin >> name;				// 키보드로부터 문자열을 읽음 

	cout << "이름은 " << name << "입니다" << endl;

	return 0;

}