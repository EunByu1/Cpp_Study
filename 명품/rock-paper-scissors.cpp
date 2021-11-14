/* [ 가위, 바위, 보 게임 ] */

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

# pragma region [2] 문자열 변수 선언 
# pragma endregion
	string Romeo;
	string Juliet; 

# pragma region [3] 화면 입출력
	// 데이터를 화면에 입출력할거임
# pragma endregion
	cout << "가위 바위 보 게임을 합니다. " << "가위, 바위, 보 중에서 입력하세요." << endl;

	cout << "로미오 >> ";
	getline(cin, Romeo);

	cout << "줄리엣 >> ";
	getline(cin, Juliet);

# pragma region [4] 비교 
	// 승자를 결정하기 위해 비교함
# pragma endregion
	while (true)
	{
		if ((Romeo == "가위" && Juliet == "바위") or (Romeo == "바위" && Juliet == "보") or (Romeo == "보" && Juliet == "가위"))
		{
			cout << "줄리엣이 이겼습니다.";
			break;
		}
		else if ((Romeo == "바위" && Juliet == "가위") or (Romeo == "보" && Juliet == "바위") or (Romeo == "가위" && Juliet == "보"))
		{
			cout << "로미오가 이겼습니다.";
			break;
		}
		else if ((Romeo == "가위" && Juliet == "가위") or (Romeo == "바위" && Juliet == "바위") or (Romeo == "보" && Juliet == "보"))
		{
			cout << "비겼습니다.";
			break;
		}
		else
		{
			cout << "잘못된 입력입니다. " << "다시 입력해 주세요." << endl;

			cout << "로미오 >> ";
			getline(cin, Romeo);

			cout << "줄리엣 >> ";
			getline(cin, Juliet);

			continue;
		}
	}
	
	return 0;

}