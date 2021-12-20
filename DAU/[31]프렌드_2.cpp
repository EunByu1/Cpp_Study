// --------------------------------------------------------------------------------
// [C++]: friend 개념 및 friend 함수  
// --------------------------------------------------------------------------------

#include <iostream>
using namespace std; 

// ★★★ [ forward declaration ] ★★★
// ------------------------------------------------------------------
class Rect; 	// Rect이라는 클래스가 있다~ 	 
// ------------------------------------------------------------------

class RectCheck
{
public:		
	bool equal(Rect r1, Rect r2);
};


class Rect
{
private:
	int width, height;
public:	
	Rect(int x, int y) { width = x; height = y; }

	//  ★★★ [ friend 함수 선언 ] ★★★
	friend bool RectCheck::equal(Rect r1, Rect r2);	 
	
};

bool RectCheck::equal(Rect r1, Rect r2)
{
	if( (r1.width == r2.width) && (r1.height == r2.height) )	return true;
	else 														return false;
}



int main()
{
	
	Rect R1(3, 4); 
	Rect R2(3, 5);
	
	RectCheck RC;
	
	if ( RC.equal(R1, R2) ) cout <<"Equal" << endl;
	else				    cout <<"Not equal" << endl;
		
		
	return 0;
	
 } 
