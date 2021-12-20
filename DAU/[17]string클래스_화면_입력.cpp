#include<iostream>
#include<string>

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)


int main()
{
	
	string s3;
	
//string(1) 화면 출력 
	s3 = "I love you";
	cout << s3 << endl;
	s3 = "you love me?";
	cout << s3 << endl;
	s3 = "I am so happy.";
	cout << s3 << endl;


//string(2) 화면 입력 
	cout << endl << endl;
	getline(cin, s3, '\n');
	// '\n'이 나오기 전까지 값 읽음 
    // 해당 라인에 있는 값은 다 가져옴! 

	cout << s3 << endl;

    return 0;
    
}


 
