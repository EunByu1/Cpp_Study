#include<iostream>
#include<fstream>
                 
using namespace std;        // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)

typedef unsigned int UINT;

int main()
{
// 변수 선언 및 데이터(학생정보)를 파일에 출력
// 변수 선언
	char cName[100], xDept[100];
	UINT uiStudentID = 0;
	float fGPA = 0.0;
// 화면 입출력 기반 변수에 데이터 삽입 
	cout << "Input your name: ";
	cin.getline(cName, 100, '\n');
	
	cout << "Input your department: ";
	cin.getline(xDept, 100, '\n');
	
	cout << "Input your Student ID: ";
	cin >> uiStudentID;
	
	cout << "Input your GPA: ";
	cin >> fGPA;
	
// 파일 생성 및 쓰기 


	ofstream fout;		// ofstream : output파일에 대한 stream 	[ ofstream 파일변수명 ] 
	a.open("student.txt");					// default -> ifstream: ios::in(파일 입력), ofstream: ios::out (파일출력) 
	//a.open("student.txt", ios::app);	 	// add	[ append의 약자 ], 파일내용 추가 하고 싶을 때 
	if(!fout) // 파일을 제대로 생성 X = NULL(=0) 
	{
		cout << "File Failed\n";
		return 0;
	} 
	
	a << cName << endl;
	a << xDept << endl;
	a << uiStudentID << endl;
	a << fGPA << endl;

	a.close(); 
}
