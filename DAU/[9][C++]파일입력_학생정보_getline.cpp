#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;	//std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용) 
typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main()
{
	// 변수 선언  
	char cName[100], cDept[100];
	UINT uiStudentID = 0;
	float fGPA 		 = 0.0;
	
	// 화면 입출력 기반 변수에 데이터 삽입 
	cout << "Your name: ";
	//cin  >> cName;
	cin.getline(cName, 100);
	
	cout << "Your department: ";
	//cin  >> cDept;
	cin.getline(cDept, 100);
	
	cout << "Your Student ID: ";
	cin  >> uiStudentID;
	
	cout << "Your GPA: ";
	cin  >> fGPA;
	
//	// Debug
//	cout.precision(3);
//	cout <<endl;
//	cout << "<Student Information>\n";
//	cout << "Name:" << cName << endl;	
//	cout << "Dept:" << cDept << endl;
//	cout << "ID:"   << uiStudentID << endl;
//	cout << "GPA:"  << fGPA << endl;

	// 파일 생성 및 쓰기
//	FILE* fp = fopen("Sample.txt", "w"); // w:write, a: add, r: read
//	if(fp==NULL)			// 파일을 제대로 만들었는지 여부 확인  
//	{
//		printf("File Failed\n");
//		return 0;	
//	}

	ofstream fout;		// ofstream : output파일에 대한 stream 	[ ofstream 파일변수명 ] 
	fout.open("student.txt");					// default -> ifstream: ios::in(파일 입력), ofstream: ios::out (파일출력) 
	//fout.open("student.txt", ios::app);	 	// add	[ append의 약자 ], 파일내용 추가 하고 싶을 때 
	if(!fout) // 파일을 제대로 생성 X = NULL(=0) 
	{
		cout << "File Failed\n";
		return 0s;
	}
	
	// 파일에 대한 출력  
	fout << cName << endl;
	fout << cDept << endl;
	fout << uiStudentID << endl;
	fout << fGPA << endl;
	
	fout.close();
	return 0;
}



