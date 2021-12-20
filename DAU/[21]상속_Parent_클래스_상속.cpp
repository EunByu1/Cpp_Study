#include <iostream>

using namespace std;   // std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostream ���� ��� Ŭ����/�Լ��� ����)

// --------------------------------------------
// Ŭ����/�Լ� ���� 
// --------------------------------------------
class Parent
{
private: 
	int Private;

protected:
	int Protected;

public:
	int Public;
	
	Parent();		// ������  
	int GetPrivate()	{ return Private; } 
	void AccessMembers(int x, int y);
	void PrintParentMembers();
};

class Child : public Parent
{
private:
	int x, y, z; 
public: 
	void AccessParentMembers();
	void PrintChildMembers();	
};

// --------------------------------------------

// --------------------------------------------
// Ŭ���� ����Լ� �Ǵ� �Ϲ��Լ� ����(����) 
// --------------------------------------------

Parent::Parent()
{
	Private    = -10;
	Protected  = -10;
	Public     = -10;
}	// Parent::Parent()

void Parent::AccessMembers(int x, int y)
{
	Private    = x;
	Protected  = y;
}  // void Parent::AccessMembers(int x, int y)


void Parent::PrintParentMembers()
{
	cout << "Parent Privates: "  << Private    << endl;
	cout << "Parent Protected: " << Protected  << endl;
	cout << "Parent Public: "	 << Public    << endl;
}  // void Parent::PrintParentMembers()

void Child::AccessParentMembers()
{
	// x = Private;			// private ���� ���� �Ұ���  
	x = GetPrivate();		// == x = this -> GetPrivate();
	y = Protected;
	z = Public;
}  // void Child::AccessMembers()

void Child::PrintChildMembers()
{
	cout << "Child x: " << x << endl;
	cout << "Child y: " << y << endl;
	cout << "Child z: " << z << endl;
	
}   // void Child::PrintParentMembers()
// --------------------------------------------


int main()
{
   // (Step1) Parent Ŭ���� �� ��ü����                  
	Parent P;
	P.PrintParentMembers();
	
	cout << endl << endl;
	P.AccessMembers(3,4);
	P.PrintParentMembers();
	
	cout << endl << endl;
	P.Public = 100;
	P.PrintParentMembers();
	
	// (Step2) 
	Child C;
	C.PrintParentMembers();
	
	cout << endl << endl;
	C.PrintChildMembers();
	
	cout << endl << endl;
	C.AccessParentMembers();
	
	// (Step3) �ǽ� 
		/* 
		
		[����]
			P.AccessMembers(100,100);		// �θ� Ŭ���� ���� �� �ڽ� Ŭ���� ����   
			P.Public = 100;					
			P.PrintParentMembers();
			
			cout << endl << endl;
			C.AccessParentMembers();0
			C.PrintChildMembers();
		
		*/ 
	
	
	C.AccessMembers(100,100);		
	C.Public = 100;
	C.PrintParentMembers();
	
	cout << endl << endl;
	C.AccessParentMembers();
	C.PrintChildMembers();
	
   return 0;
}

