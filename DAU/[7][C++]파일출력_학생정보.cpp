#include<iostream>
#include<fstream>
                 
using namespace std;        // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)

typedef unsigned int UINT;

int main()
{
// ���� ���� �� ������(�л�����)�� ���Ͽ� ���
// ���� ����
	char cName[100], xDept[100];
	UINT uiStudentID = 0;
	float fGPA = 0.0;
// ȭ�� ����� ��� ������ ������ ���� 
	cout << "Input your name: ";
	cin.getline(cName, 100, '\n');
	
	cout << "Input your department: ";
	cin.getline(xDept, 100, '\n');
	
	cout << "Input your Student ID: ";
	cin >> uiStudentID;
	
	cout << "Input your GPA: ";
	cin >> fGPA;
	
// ���� ���� �� ���� 


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
