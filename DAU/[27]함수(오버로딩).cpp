#include <iostream>
using namespace std; 



// ★★★ [ 함수 오버로딩 ] ★★★   
// -----------------------------------------------------

// a에서 b까지 합하기  
int sum(int a, int b)
{
	int iResult = 0;
	for(int i=a; i<=b; i++)
	{
		iResult += i;
		// iResult = iResult + i; 

	}
	return iResult; 
}

// 0에서 a까지 합치기  
int sum(int a)
{
	int iResult = 0;
	for(int i=0; i<=a; i++)
	{
		iResult += i;
	}
	return iResult; 
}

// -----------------------------------------------------


// --------------------------------------------------------------------------------
// [C++ 언어 함수]
// (Step3) 함수 중복 (function overloading): 동일한 함수명, 다른 함수기능  
// 매개변수 개수나 타입이 서로 다른 동일한 이름의 복수개의 함수 사용이 가능함
// --------------------------------------------------------------------------------


int main()
{
	cout << sum(3, 5) << endl;
	cout << sum(10) << endl;
	cout << sum(100) << endl;
	 

	return 0;
}

/*


[ Error ] 

int sum(int a=1, int b=2)
{
	// ????
}


int sum(int a)
{
	// ?????

}



int main()
{
	sum(); 
	// default값이 모두 있기에, Error 발생!!
	return 0; 
}
 

*/
