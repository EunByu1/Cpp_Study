// --------------------------------------------------------------------------------
// [C++ 언어: template]
// (Step1) template기반 template function (== generic function)  
// (Step2) template기반 template class (== generic class)   
// --------------------------------------------------------------------------------

#include <iostream>
using namespace std; 


//--------------------------------------------

/* [ function overloading ]

char sum(char a, cahr b)
{
	return a+b;
} 
short sum(short a, short b)
{
	return a+b;
} 
int sum(int a, int b)
{
	return a+b;
} 
double sum(double a, double b)
{
	return a+b;
} */

//--------------------------------------------


//---------------------------------------------------------------
// ★★★ [ 템플릿 ] ★★★        
//--------------------------------------------
// 오버로딩하지말고, 템플릿을 사용하자!  ( 템플릿 = 함수 중첩 해결 ) 
template <typename T>  		// == template <class T>  
							// template이라는 하나의 원형을 만들건데, type이름은 T다.	
							// 임의의 자료형이 T에 들어가는 거임!
							
T sum(T a, T b)				// 그래서 T가 뭐냐면, 함수다!
							// T라는 템플릿의 인자 a와 b !	
{
	return a+b;
}

/* [ 응용 ]

template <typename SUM> // == template <class SUM>
SUM sum(SUM a, SUM b)
{
	return a+b;
} 
*/
//---------------------------------------------------------------


//--------------------------------------------
/* [ template class ]

class Point
{
private:
	int x, y;
public:	
	Point(int x, int y) 	{ this->x = x; this->y = y; }
	int GetAdd() 			{ return x+y; }
};

class Point
{
private:
	double x, y;
public:	
	Point(double x, double y) 	{ this->x = x; this->y = y; }
	double GetAdd() 			{ return x+y; }
}; */
//--------------------------------------------


// 자료형을 T로만 바꿔주면 됨! 
template <typename T>
class Point 
{
private:
	T x, y;
public:	
	Point(T x, T y) 	{ this->x = x; this->y = y; }
	T GetAdd() 				{ return x+y; }
};




int main() 
{
	// template funstion
	cout << sum(3, 5) 		<< endl;
	cout << sum(3.45, 5.67) << endl;	
	
	// template class 
	// class template
	cout << endl << endl;
	
// --------------------------------------------------	
	
	// ★★★ [ Point Point1(10,20) ] ★★★
	// template이기 때문에, Error 발생!!!
	 
	Point<int> Point1(10, 20);
	cout << Point1.GetAdd() << endl;
	
	Point<double> Point2(10.52, 20.24);
	cout << Point2.GetAdd() << endl;
	
// --------------------------------------------------	


	return 0;
}
