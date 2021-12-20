#include<iostream>
#include<fstream>

using namespace std;        // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)
typedef unsigned int UINT;

int main()
{
//���� ���� �� ������(�л�����)�� ���Ͽ� ���
//(1) ���� ����
	char cName[100], xDept[100];
	UINT uiStudentID = 0;
	float fGPA = 0.0;
//(2) ȭ�� ����� ��� ������ ������ ���� 
	ifstream fin;
	fin.open("Student.txt");
	if(!fin)
	{
		cout << "File Failed\n";
		return 0;
	}
	
	/*
	�����Է� ��Ʈ����ü�� >> �����ڷ� ������ ���� ������ ����
	������ �����ϰ� �����ϱ� ������ �����Է� fin�� ��� �Խ�
	getline�� ���ؼ� fin�� ������ �� ���ο���
	*/ 
	fin.getline(cName, 100);
	fin.getline(xDept, 100);
	fin >> uiStudentID;
	fin >> fGPA;
	
	cout << cName << endl;
	cout << xDept << endl;
	cout << uiStudentID << endl;
	cout << fGPA << endl;
	
	
//(3) ���� ���� �� ���� 

	ofstream fout;		// ofstream : output���Ͽ� ���� stream 	[ ofstream ���Ϻ����� ] 
	a.open("student.txt");					// default -> ifstream: ios::in(���� �Է�), ofstream: ios::out (�������) 
	//a.open("student.txt", ios::app);	 	// add	[ append�� ���� ], ���ϳ��� �߰� �ϰ� ���� �� 
	if(!fout) // ������ ����� ���� X = NULL(=0) 
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

