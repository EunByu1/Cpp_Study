#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;	//std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����) 
typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main()
{
	// ���� ����  
	char cName[100], cDept[100];
	UINT uiStudentID = 0;
	float fGPA 		 = 0.0;
	
	// ȭ�� ����� ��� ������ ������ ���� 
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

	// ���� ���� �� ����
//	FILE* fp = fopen("Sample.txt", "w"); // w:write, a: add, r: read
//	if(fp==NULL)			// ������ ����� ��������� ���� Ȯ��  
//	{
//		printf("File Failed\n");
//		return 0;	
//	}

	ofstream fout;		// ofstream : output���Ͽ� ���� stream 	[ ofstream ���Ϻ����� ] 
	fout.open("student.txt");					// default -> ifstream: ios::in(���� �Է�), ofstream: ios::out (�������) 
	//fout.open("student.txt", ios::app);	 	// add	[ append�� ���� ], ���ϳ��� �߰� �ϰ� ���� �� 
	if(!fout) // ������ ����� ���� X = NULL(=0) 
	{
		cout << "File Failed\n";
		return 0s;
	}
	
	// ���Ͽ� ���� ���  
	fout << cName << endl;
	fout << cDept << endl;
	fout << uiStudentID << endl;
	fout << fGPA << endl;
	
	fout.close();
	return 0;
}



