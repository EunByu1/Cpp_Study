// --------------------------------------------------------------------------------
// [C++]: friend ���� �� friend �Լ�  
// --------------------------------------------------------------------------------

#include <iostream>
using namespace std; 

// �ڡڡ� [ forward declaration ] �ڡڡ�
// ------------------------------------------------------------------
class Rect; 	// Rect�̶�� Ŭ������ �ִ�~ 	 
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

	//  �ڡڡ� [ friend �Լ� ���� ] �ڡڡ�
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
