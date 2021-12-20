// --------------------------------------------------------------------------------
// [C++]: friend 개념 및 friend 함수  
// --------------------------------------------------------------------------------


#include <iostream>
using namespace std; 


// (Step1) 클래스 외부에 작성된 함수 equal()를 friend 함수로 선언  
class Rect
{
private:
	int width, height;
public:	
	Rect(int x, int y) { width = x; height = y; }
	friend bool equal(Rect r1, Rect r2);			// friend 함수 선언  		 
};


bool equal(Rect r1, Rect r2)
{
/*---------------------------------------------------------------------
	// [ 방법 1 ] 
	if( (r1.width == r2.width) && (r1.height == r2.height) )	
	{
		return true;
	}
	else 
	{
		return false;
	}
---------------------------------------------------------------------*/


/*---------------------------------------------------------------------
	// [ 방법 2 ] 	
	
	if( (r1.width == r2.width) && (r1.height == r2.height) )
		return true;
	else
		return false;					
---------------------------------------------------------------------*/


	// [ 방법 3 ]  
	if( (r1.width == r2.width) && (r1.height == r2.height) )	return true;
	else 														return false;

}



int main()
{
	// (Step1)  
	Rect R1(3, 4); 
	Rect R2(3, 4);

	if ( equal(R1, R2) ) cout <<"Equal" << endl;
	else				 cout <<"Not equal" << endl;	
	
	return 0;
}
