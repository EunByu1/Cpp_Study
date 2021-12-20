#include<iostream>
#include"MyHeader.h"

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)

int main()
{
	int iSample = 0;
	char cSample = 0;
	float fSample = 0.0;
	
	// std.cin   : 입력 
    // std.cout : 출력  
	cin >>iSample>>cSample>>fSample;       // cin == scanf 
	cout <<endl << iSample<<endl << cSample<< endl << fSample;
}
