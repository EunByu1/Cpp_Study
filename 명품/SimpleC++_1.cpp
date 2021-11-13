/* [ 화면 출력 ] */

// [0] cout와 <<연산자를 사용하기 위해 iostream을 include함
# include <iostream>


int main()						// C++ 프로그램은 main()함수에서부터 실행을 시작함
{	
	
// [1] cout와 <<연산자를 이용하여 화면에 출력함  
	std::cout << "Hello\n";		//화면에 Hello를 출력하고 다음 줄로 넘어감
	std::cout << "첫 번째 맛보기입니다.";

	return 0;					// main()함수가 종료되면, 프로그램이 종료됨 
}