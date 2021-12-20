#include<cstdio>
#include<iostream>

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)

#define PI 3.141592

float CircleArea(int radious);  // 함수선언  

float CircleArea(int radious)   // 함수정의  
{
	return PI*radious*radious;
}
 
 int main()
 {
 	//[Step 3]화면출력(cout)을 이용한 원의 반지름 구하기
	int iRadious = 5;
	float fArea  = CircleArea(iRadious);   // 함수호출 
	cout << "Area is " << fArea << endl;
	cout.precision(4);    // 4개 정확도  
	cout << "Area is " << fArea << endl;
 }
