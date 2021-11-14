/* [ 화면 입력 ] */

# pragma region [0] include
	// 입출력 스트림 객체(cout, cin)와 스트림 삽입 연산자(<< , >> )를 사용하기 위해 iostream을 include함
# pragma endregion 
# include <iostream>

# pragma region [1] std 생략
	// std 이름 공간에 선언된 모든 이름에 대해 std::를 생략함
# pragma endregion
using namespace std;

int main()
{

# pragma region [2] 화면 입출력
	// 데이터를 화면에 입출력할거임
# pragma endregion
	cout << "주소를 입력하세요 >> ";

	char address[100];
# pragma region [E] cin.getline()
	//     【cin.getline(char buf[], int size, char delimitChar)】
	// ------------------------------------------------------------------
	// cin.getline() 함수의 마지막 매개변수 delimitChar는 생략할 수 있음
	// → delimitChar의 디폴트 값이 '\n'이기 때문
# pragma endregion
	cin.getline(address, 100, '\n');						// 키보드로부터 주소 읽기

	cout << "주소는 " << address << "입니다." << endl;		// 주소 출력

	return 0;
}
