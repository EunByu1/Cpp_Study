#include<iostream>
#include"MyHeader.h"

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)
      
int main()
{

//[Step 4] 문자열 화면입출력 
	char cName[20];
	cout << "Enter your name.\n";
	cin.getline(cName, 20, '\n');  // '\n'값 나오기 전까지 값 읽음 
                                   // 해당 라인에 있는 값은 다 가져옴  
	cout << "your name is " << cName<< "입니다." << endl;
	
	
}
