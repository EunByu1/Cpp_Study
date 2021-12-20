// --------------------------------------------------------------------------------
// [C++]: friend ���� �� friend �Լ�  
// --------------------------------------------------------------------------------


#include <iostream>
using namespace std; 


// (Step1) Ŭ���� �ܺο� �ۼ��� �Լ� equal()�� friend �Լ��� ����  
class Rect
{
private:
	int width, height;
public:	
	Rect(int x, int y) { width = x; height = y; }
	friend bool equal(Rect r1, Rect r2);			// friend �Լ� ����  		 
};


bool equal(Rect r1, Rect r2)
{
/*---------------------------------------------------------------------
	// [ ��� 1 ] 
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
	// [ ��� 2 ] 	
	
	if( (r1.width == r2.width) && (r1.height == r2.height) )
		return true;
	else
		return false;					
---------------------------------------------------------------------*/


	// [ ��� 3 ]  
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
