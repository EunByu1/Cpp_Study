// --------------------------------------------------------------------------------
// [C++]: friend 개념 및 friend 함수  
// --------------------------------------------------------------------------------

#include <iostream>
using namespace std; 

 
class Rect;

class RectCheck
{
public:		
	bool equal(Rect r1, Rect r2);
	void copy(Rect& dest, Rect& src);
};

// 다른 클래스의 "모든" 멤버 함수를 한번에 friend 함수로 선언  
class Rect
{
private:
	int width, height;
public:	
	Rect(int x, int y) { width = x; height = y; }

//  RectCheck 클래스의 모든 함수를 Rect 클래스의 friend 함수로 선언 ★★★★★★ 
	friend RectCheck;
};

bool RectCheck::equal(Rect r1, Rect r2)
{
	if( (r1.width == r2.width) && (r1.height == r2.height) )	return true;
	else 														return false;
}

void RectCheck::copy(Rect& dest, Rect& src)
{
	dest.width  = src.width;	// R1.width  = R2.width;
	dest.height = src.height;	// R1.height = R2. height  
}

int main()
{
	
	Rect R1(3, 4); 
	Rect R2(5, 6);
	RectCheck RC;
 	
	if ( RC.equal(R1, R2) ) cout <<"Equal" << endl;
	else				    cout <<"Not equal" << endl;
	
	RC.copy(R1, R2);
	if ( RC.equal(R1, R2) ) cout <<"Equal" << endl;
	else				    cout <<"Not equal" << endl;
		
	return 0;
	
}



