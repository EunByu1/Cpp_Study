#include<cstdio>         
#include<iostream>

using namespace std;	//std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용) 	
 
int main()
{
	
// [Step 1] 화면출력(문자열) -> printf("Hello!\n");
// std:: stdlid에 관련된 함수가 모두 정의되어 있는 namespace 

	std::cout << "Hello!\n";
	std::cout << "Hello!" << '\n';
	std::cout << "Hello!" << endl;
	
//[Step 2] 화면출력(변수) -> %d %f, %c
	int iSample = 562316;
	char cSample = '#';
	float fSample = 432.123456789;
	
	cout << "int    = " << iSample << endl;
	cout << "char   = " << cSample << endl;
	cout << "float  = " << fSample << endl;	//기본 precision 6자리(정수 + 소수) 
	cout.precision(5);     // 5개 정확도  
	cout << "float  = " << fSample << endl; //기본 precision 5자리(정수 + 소수) 
	
}
