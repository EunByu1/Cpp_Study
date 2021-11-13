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
	cout << "너비를 입력하세요 >> ";

	int width;
	cin >> width;

	cout << "높이를 입력하세요 >> ";

	int height;
	cin >> height;

	int area = width * height;
	cout << "면적은 " << area << endl;

	return 0;

}