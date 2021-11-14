/* [ 화면 입력 ] */

# pragma region [0] include
	// # include <iostream> : 입출력 스트림 객체(cout, cin)와 스트림 삽입 연산자(<< , >> )를 사용하기 위해 iostream을 include함
	// # include <string>	: string 클래스를 사용하기 위해 string 헤더 파일을 include함 
# pragma endregion 
# include <iostream>
# include <string>

# pragma region [1] std 생략
	// std 이름 공간에 선언된 모든 이름에 대해 std::를 생략함
# pragma endregion
using namespace std;

int main()
{

# pragma region [2] 문자열 선언 
# pragma endregion
	string song("Falling in love with you");	// 문자열 song
	string elvis("Elvis Presley");				// 문자열 elvis
	string singer;								// 문자열 singer

# pragma region [3] 화면 입출력
	// 데이터를 화면에 입출력할거임
# pragma endregion
	cout << song + "를 부른 가수는";					// +로 문자열 연결 
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")?";	// [] 연산자 사용

	getline(cin, singer);		// 문자열 입력 
		
	if (singer == elvis)		// 문자열 비교 
		cout << "맞았습니다.";
	else
		cout << "틀렸습니다. " + elvis + "입니다." << endl;

	return 0;
}