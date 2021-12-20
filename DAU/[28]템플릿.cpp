// --------------------------------------------------------------------------------
// [C++ ���: template]
// (Step1) template��� template function (== generic function)  
// (Step2) template��� template class (== generic class)   
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
// �ڡڡ� [ ���ø� ] �ڡڡ�        
//--------------------------------------------
// �����ε���������, ���ø��� �������!  ( ���ø� = �Լ� ��ø �ذ� ) 
template <typename T>  		// == template <class T>  
							// template�̶�� �ϳ��� ������ ����ǵ�, type�̸��� T��.	
							// ������ �ڷ����� T�� ���� ����!
							
T sum(T a, T b)				// �׷��� T�� ���ĸ�, �Լ���!
							// T��� ���ø��� ���� a�� b !	
{
	return a+b;
}

/* [ ���� ]

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


// �ڷ����� T�θ� �ٲ��ָ� ��! 
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
	
	// �ڡڡ� [ Point Point1(10,20) ] �ڡڡ�
	// template�̱� ������, Error �߻�!!!
	 
	Point<int> Point1(10, 20);
	cout << Point1.GetAdd() << endl;
	
	Point<double> Point2(10.52, 20.24);
	cout << Point2.GetAdd() << endl;
	
// --------------------------------------------------	


	return 0;
}
