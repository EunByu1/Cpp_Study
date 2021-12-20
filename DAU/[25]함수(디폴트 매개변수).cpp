#include <iostream>
using namespace std; 



// int GetRectArea1 (int width, int height)		// �Ϲ����� �Լ� ���� �� ����
int GetRectArea1 (int width=10, int height=10) 	// ����Ʈ �Ű����� ���� (default parameter)
{												// ���� ���ָ�, 10���� ������  
	return width*height;
}

// �ڡڡ� ���� �ڡڡ� 
// int GetRectArea2 (int width=10, int height) 	// Error
// default �Ű������� �׻� �ڿ��� �����ؾ���! 
int GetRectArea2 (int width, int height=10) 	// Correct
{
	return width*height;
}


// --------------------------------------------------------------------------------
// [C++ ��� �Լ�]
// (Step1) ����Ʈ �Ű����� (default parameter)�� ������ �Լ�  
// �Լ��� �Ű� ���� ���� ���޵��� �ʴ� ���, ����Ʈ ���� ���޵ǵ��� �Լ� ����
// --------------------------------------------------------------------------------

int main()
{
	int iWidth  = 100;
	int iHeight = 200;
	
// ------------------------------------------------------------------------------------------------------------	
	
	cout << "Rect Area: " << GetRectArea1(iWidth, iHeight) << endl;		// GetRectArea1(100, 200)
	cout << "Rect Area: " << GetRectArea1() << endl;  					// GetRectArea1(10,10) 
	cout << "Rect Area: " << GetRectArea1(5) << endl;					// GetRectArea1(5, 10)
																		// �Ϻθ� �־ default ������ �Ű������� ������  
	cout << "Rect Area: " << GetRectArea1(5, 7) << endl;				// GetRectArea1(5,7) 
	
// ------------------------------------------------------------------------------------------------------------	
	
	// (����) ����Ʈ �Ű������� ��� �� �ʿ� ���� ����
	cout << endl << endl;
	//cout << "Rect Area: " << GetRectArea2() << endl;				// Error
	cout << "Rect Area: " << GetRectArea2(5) << endl;				// // GetRectArea1(5,10)
	cout << "Rect Area: " << GetRectArea2(5, 100) << endl;			// // GetRectArea1(5,100)
	
		
	return 0;
}
