#include<iostream>
#include<string>

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)

int main()
{
	string s3;
	
	s3 = "I love you";
	cout << s3 << endl;
	s3 = "you love me?";
	cout << s3 << endl;
	s3 = "I am so happy.";
	cout << s3 << endl;
}
