#include <iostream>
using namespace std; 


class Parent 
{
public:
	void message(void) { cout << "Parent Ŭ������ message �Լ� ȣ��!" << endl; }
//  == void message()
};



class Child : public Parent 		// [ ��� ]  
{
public:
	void message(void) 
	{ 	

// �ڡڡ� [ �Լ� �������̵� ]  �ڡڡ� 
// ------------------------------------------------------------------------
// �θ�Ŭ������ message()�Լ� ��� + ���ο� ��� ( cout�κ� )  

		Parent::message();		// �θ�Ŭ������ message()�Լ� ȣ��  
		cout << "Child Ŭ������ message �Լ� ȣ��!" << endl; 
		
// ------------------------------------------------------------------------

	}
};



// ----------------------------------------------------------------------------------------
// [C++ ��� �Լ�]
// (Step2) �Լ� ������ (function overriding): �θ� Ŭ���� �Լ��� ��� Ŭ�������� ������  
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

