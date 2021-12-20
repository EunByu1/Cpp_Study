#include<iostream>

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)

class Parent    // Ŭ���� ���� 
{
	int Private, Protected;
public:
	int Public;
	Parent();
	void AccessMembers(int x, int y);
	void PrintParentMembers();
};
Parent::Parent()       // [������ ����] 
{
	Private   = -10;
	Protected = -10;
	Public    = -10;
}

void Parent::AccessMembers(int x, int y)
{
	Private   = x;
	Protected = y;
}

void Parent::PrintParentMembers()
{
	cout << "Parent Private: " << Private << endl;
	cout << "Parent Protected: " << Protected << endl;
	cout << "Parent Public: " << Public << endl;
}

int main()
{
	Parent P;
	P.PrintParentMembers();
	
	cout << endl << endl;
	P.AccessMembers(3, 4);
	P.PrintParentMembers();
	
	cout << endl << endl;
	P.Public = 100;
	P.PrintParentMembers();
	
	return 0; 
}
