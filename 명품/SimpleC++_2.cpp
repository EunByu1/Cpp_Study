/* [ 화면 출력 ] */

// [0] cout와 <<연산자를 사용하기 위해 iostream을 include함
# include <iostream>

// [1] 함수의 원형 선언 
double area(int r);


// [2] 함수 구현
double area(int r)
{
	return 3.14 * r * r;		// 반지름 r의 원 면적 return 
}



int main()
{

// [3] 변수 선언부
	int n = 3;
	char c = '#';

// [4] 데이터 출력 
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;		// true는 1로 출력됨
	std::cout << "n+5 = " << n + 5 << n;
	std::cout << "면적은" << area(n);

	return 0;

}