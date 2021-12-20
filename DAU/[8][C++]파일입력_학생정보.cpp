#include<iostream>
#include<fstream>

using namespace std;        // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)
typedef unsigned int UINT;

int main()
{
//변수 선언 및 데이터(학생정보)를 파일에 출력
//(1) 변수 선언
	char cName[100], xDept[100];
	UINT uiStudentID = 0;
	float fGPA = 0.0;
//(2) 화면 입출력 기반 변수에 데이터 삽입 
	ifstream fin;
	fin.open("Student.txt");
	if(!fin)
	{
		cout << "File Failed\n";
		return 0;
	}
	
	/*
	파일입력 스트림객체는 >> 연산자로 변수에 값을 저장할 때는
	공백을 제외하고 저장하기 때문에 파일입력 fin의 멤버 함쉰
	getline을 통해서 fin이 파일의 한 라인에서
	*/ 
	fin.getline(cName, 100);
	fin.getline(xDept, 100);
	fin >> uiStudentID;
	fin >> fGPA;
	
	cout << cName << endl;
	cout << xDept << endl;
	cout << uiStudentID << endl;
	cout << fGPA << endl;
	
	
//(3) 파일 생성 및 쓰기 

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

