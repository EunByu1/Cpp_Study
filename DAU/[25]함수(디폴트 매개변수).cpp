#include <iostream>
using namespace std; 



// int GetRectArea1 (int width, int height)		// 일반적인 함수 선언 및 구현
int GetRectArea1 (int width=10, int height=10) 	// 디폴트 매개변수 설정 (default parameter)
{												// 값을 안주면, 10으로 설정됨  
	return width*height;
}

// ★★★ 주의 ★★★ 
// int GetRectArea2 (int width=10, int height) 	// Error
// default 매개변수는 항상 뒤에서 선언해야함! 
int GetRectArea2 (int width, int height=10) 	// Correct
{
	return width*height;
}


// --------------------------------------------------------------------------------
// [C++ 언어 함수]
// (Step1) 디폴트 매개변수 (default parameter)를 가지는 함수  
// 함수에 매개 변수 값이 전달되지 않는 경우, 디폴트 값이 전달되도록 함수 설정
// --------------------------------------------------------------------------------

int main()
{
	int iWidth  = 100;
	int iHeight = 200;
	
// ------------------------------------------------------------------------------------------------------------	
	
	cout << "Rect Area: " << GetRectArea1(iWidth, iHeight) << endl;		// GetRectArea1(100, 200)
	cout << "Rect Area: " << GetRectArea1() << endl;  					// GetRectArea1(10,10) 
	cout << "Rect Area: " << GetRectArea1(5) << endl;					// GetRectArea1(5, 10)
																		// 일부만 넣어도 default 값으로 매개변수가 설정됨  
	cout << "Rect Area: " << GetRectArea1(5, 7) << endl;				// GetRectArea1(5,7) 
	
// ------------------------------------------------------------------------------------------------------------	
	
	// (주의) 디폴트 매개변수는 모두 끝 쪽에 몰려 선언
	cout << endl << endl;
	//cout << "Rect Area: " << GetRectArea2() << endl;				// Error
	cout << "Rect Area: " << GetRectArea2(5) << endl;				// // GetRectArea1(5,10)
	cout << "Rect Area: " << GetRectArea2(5, 100) << endl;			// // GetRectArea1(5,100)
	
		
	return 0;
}
