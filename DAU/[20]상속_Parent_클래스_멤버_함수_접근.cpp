#include<iostream>

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)

class Parent    // 클래스 선언 
{
	int Private;
	void PrivateMsg() { cout << "Private Message\n";}
protected:
	int Protected;
	void ProtectedMsg() { cout << "Protected Message\n";}
public:
	int Public;
	Parent();
	int GetPrivate() { return Private;}      //  private는 멤버함수를 통해서 접근! 
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
//클래스 정의부분
//-------------------------------------------

//(1) Parent class 구현부(정의부) 
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
//(2) Child class 구현부(정의부)
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
// 부모 클래스  
	//부모클래스의 맴버 변수 출력Parent. PrintParentMembers()
	C.PrintParentMembers();
	
	cout << endl << endl;
	//자식클래스의 멤버 변수 출력 C.[x,y,z] 
	C.PrintChildMembers();
	
	cout << endl << endl;
	C.AccessParentMembers();
	C.PrintChildMembers();
// -----------------------------------------------------------
// 자식 클래스 	
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
