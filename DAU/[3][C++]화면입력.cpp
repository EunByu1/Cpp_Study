#include<iostream>
#include"MyHeader.h"

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)

int main()
{
    
	int iNumber = 0;
	cout << "Your favoriate integer number?" << endl;
	cout << "Your favoriate integer number is " << iNumber << endl;
	cout << endl << endl;
	
	cout << "Your favoriate integer number?" << endl;
	iNumber = GetIntNum(1, 1000); 
	cout << "Your favoriate integer number is " << iNumber << endl;
	cout << endl << endl;
	 
//[Step 1] 화면 입력 (cin) 
	
	cout << "Your favoriate integer number?" << endl;
	cin >> iNumber;
	cout << "Your favoriate integer number is " << iNumber << endl;
	cout << endl << endl;
	
}
