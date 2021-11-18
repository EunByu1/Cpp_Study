/* [ 소수점을 가지는 5개의 실수를 입력 받아 제일 큰 수를 화면에 출력 ] */

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
	double i1	= 0;
	double i2	= 0;
	double i3	= 0;
	double i4	= 0;
	double i5	= 0;
	double tmp  = 0;
	

# pragma region [3] 입출력
# pragma endregion
	cout << "5 개의 실수를 입력하라 >>";
	cin >> i1 >> i2 >> i3 >> i4 >> i5;
	

# pragma region [4] 비교 
	// 제일 큰 수를 변수 tmp에 저장 
# pragma endregion
	while (true)
	{
		if (tmp < i1)
		{
			tmp = i1;
		}
		else if (tmp < i2)
		{
			tmp = i2;
		}
		else if (tmp < i3)
		{
			tmp = i3;
		}
		else if (tmp < i4)
		{
			tmp = i4;
		}
		else if (tmp < i5)
		{
			tmp = i5;
		}
		else
		{
			break;
		}
	}


# pragma region [5] 출력 
	// 제일 큰 수를 화면에 출력
# pragma endregion
	cout << "제일 큰 수 = " << tmp;
	

	return 0;

}