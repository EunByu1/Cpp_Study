#include<iostream>

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)

class Parent    // 클래스 선언 
{
	int Private, Protected;
public:
	int Public;
	Parent();
	void AccessMembers(int x, int y);
	void PrintParentMembers();
};
Parent::Parent()       // [생성자 정의] 
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
