#include <iostream>
using namespace std; 


class Parent 
{
public:
	void message(void) { cout << "Parent 클래스의 message 함수 호출!" << endl; }
//  == void message()
};



class Child : public Parent 		// [ 상속 ]  
{
public:
	void message(void) 
	{ 	

// ★★★ [ 함수 오버라이딩 ]  ★★★ 
// ------------------------------------------------------------------------
// 부모클래스의 message()함수 기능 + 새로운 기능 ( cout부분 )  

		Parent::message();		// 부모클래스의 message()함수 호출  
		cout << "Child 클래스의 message 함수 호출!" << endl; 
		
// ------------------------------------------------------------------------

	}
};



// ----------------------------------------------------------------------------------------
// [C++ 언어 함수]
// (Step2) 함수 재정의 (function overriding): 부모 클래스 함수를 상속 클래스에서 재정의  
// ----------------------------------------------------------------------------------------

int main()
{
	
	Parent cParent;
	cParent.message();
	
	cout << endl << endl;
	Child cChild;
	cChild.message();

	
	
	return 0;
}

