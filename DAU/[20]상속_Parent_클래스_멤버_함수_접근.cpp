#include<iostream>

using namespace std;    // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)

class Parent    // Ŭ���� ���� 
{
	int Private;
	void PrivateMsg() { cout << "Private Message\n";}
protected:
	int Protected;
	void ProtectedMsg() { cout << "Protected Message\n";}
public:
	int Public;
	Parent();
	int GetPrivate() { return Private;}      //  private�� ����Լ��� ���ؼ� ����! 
	void AccessMembers(int x, int y);
	void PrintParentMembers();
	
	void CallPrivateMsg() { PrivateMsg();}
};


class Child:public Parent
{
	int x, y, z;
public:
	void AccessParentMembers();
	void PrintChildMembers();
	void CallProtectedMsg(){ProtectedMsg();}
};

//-------------------------------------------
//Ŭ���� ���Ǻκ�
//-------------------------------------------

//(1) Parent class ������(���Ǻ�) 
Parent::Parent()
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
	cout << "Parent Private: "   << Private   << endl;
	cout << "Parent Protected: " << Protected << endl;
	cout << "Parent Public: "    << Public    << endl;
}
//-------------------------------------------

//-------------------------------------------
//(2) Child class ������(���Ǻ�)
void Child::AccessParentMembers()
{
	x = GetPrivate();
	y = Protected;
	z = Public;
}
void Child::PrintChildMembers()
{
	cout << "Child X: "<< x << endl;
	cout << "Child Y: "<< y << endl;
	cout << "Child Z: "<< z << endl;
}
//-------------------------------------------
//-------------------------------------------

int main()
{
	Child C;
//------------------------------------------------------------
// �θ� Ŭ����  
	//�θ�Ŭ������ �ɹ� ���� ���Parent. PrintParentMembers()
	C.PrintParentMembers();
	
	cout << endl << endl;
	//�ڽ�Ŭ������ ��� ���� ��� C.[x,y,z] 
	C.PrintChildMembers();
	
	cout << endl << endl;
	C.AccessParentMembers();
	C.PrintChildMembers();
// -----------------------------------------------------------
// �ڽ� Ŭ���� 	
	cout << endl << endl;
	C.AccessMembers(100, 100);
	C.Public = 100;
	C.PrintParentMembers();
	
	cout << endl << endl;
	C.AccessParentMembers();
	C.PrintChildMembers();
	
	cout << endl << endl;
//	C.ProtectedMsg();	//error. 
	C.CallPrivateMsg();
	C.CallProtectedMsg();
	return 0;
}
