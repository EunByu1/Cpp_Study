#include <iostream>

using namespace std;   // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)

// --------------------------------------------
// 클래스/함수 선언 
// --------------------------------------------
class Parent
{
private: 
	int Private;

protected:
	int Protected;

public:
	int Public;
	
	Parent();		// 생성자  
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
// 클래스 멤버함수 또는 일반함수 정의(구현) 
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
	// x = Private;			// private 변수 접근 불가능  
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
   // (Step1) Parent 클래스 및 객체생성                  
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
	
	// (Step3) 실습 
		/* 
		
		[예외]
			P.AccessMembers(100,100);		// 부모 클래스 변경 후 자식 클래스 변경   
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

