#include <iostream>
using namespace std; 

void swap1(int a, int b) 
{
	int tmp;
	tmp = a;
	a   = b;
	b   = tmp; 
	
	cout << endl;
	cout << "<Inside function>" << endl;
	cout << "iNum1: " << a << endl;
	cout << "iNum2: " << b << endl;		
}

void swap2(int *a, int *b) 	// 주소를 저장하기 위해 포인터변수 선언 
{
	int tmp;
	tmp  = *a;
	*a   = *b;
	*b   = tmp; 
	
	cout << endl;
	cout << "<Inside function>" << endl;
	cout << "iNum1: " << *a << endl;
	cout << "iNum2: " << *b << endl;		
}

void swap3(int &a, int &b)    // int &a : a에 대한 참조자  , int &b : b에 대한 참조자  
{		  					  // int &a = iNum1, int &b = iNum2
	int tmp;
	tmp = a;
	a   = b;
	b   = tmp; 
	
	cout << endl;
	cout << "<Inside function>" << endl;
	cout << "iNum1: " << a << endl;
	cout << "iNum2: " << b << endl;		
}


// --------------------------------------------------------------------------------
// [C++ 언어 함수 호출방식]
// (Step1) 값에   의한 호출 (call by value)
// (Step2) 주소에 의한 호출 (call by address / call by pointer)
// (Step3) 참조에 의한 호출 (call by reference)
// --------------------------------------------------------------------------------
int main()
{
	// ----------------------------------------------------
	// [Step1] 값에 의한 호출 (call by value)
	// ---------------------------------------------------- 
	int iNum1 = 10;
	int iNum2 = 20;
	
	cout << "<Before function>" << endl;
	cout << "iNum1: " << iNum1 << endl;
	cout << "iNum2: " << iNum2 << endl;	
	
	swap1(iNum1, iNum2);    	// 값만 넘겨줌  
	
	cout << endl;
	cout << "<After function>" << endl;
	cout << "iNum1: " << iNum1 << endl;
	cout << "iNum2: " << iNum2 << endl;
	
	
	
	// ----------------------------------------------------
	// [Step2] 주소에 의한 호출 (call by address / call by pointer)
	// ---------------------------------------------------- 
	cout << endl << endl;
	iNum1 = 10;
	iNum2 = 20;	
	
	cout << "<Before function>" << endl;
	cout << "iNum1: " << iNum1 << endl;
	cout << "iNum2: " << iNum2 << endl;	
	
	swap2(&iNum1, &iNum2);		// 주소를 넘겨줌 
	
	cout << endl;
	cout << "<After function>" << endl;
	cout << "iNum1: " << iNum1 << endl;
	cout << "iNum2: " << iNum2 << endl;
	
	
	
	// ----------------------------------------------------
	// [Step3] 참조에 의한 호출 (call by reference)
	// - 참조변수: 어느 한 변수의 다른 이름, 즉 별명 (ex., 유재석 별명: 메뚜기) 
	// - 참조변수 선언: "자료형& 참조변수이름 = 원래변수;" 
	// ---------------------------------------------------- 
	cout << endl << endl;
	iNum1 = 10;
	iNum2 = 20;	
			
	cout << "<Before function>" << endl;
	cout << "iNum1: " << iNum1 << endl;
	cout << "iNum2: " << iNum2 << endl;	
	
	swap3(iNum1, iNum2);
	
	cout << endl;
	cout << "<After function>" << endl;
	cout << "iNum1: " << iNum1 << endl;
	cout << "iNum2: " << iNum2 << endl;	

	return 0;
}
















































