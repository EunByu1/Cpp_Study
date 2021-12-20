#include <iostream>
using namespace std; 

# include <memory.h>
# define SIZE 10
# define ROW  10
# define COL  10
# define PI   3.14

// ----------------------------------------------------------------------------
//	new와 delete 연산자를 이용한 C++ 동적할당 (new == malloc, delete == free) 
// ----------------------------------------------------------------------------
class Circle 
{
private:
	int iRadius;

public:
	Circle()						{ iRadius = 1; }
	Circle(int iRadius)				{ this->iRadius = iRadius; }
	~Circle()						{ iRadius = 0; }
	
	void SetRadius(int iRadius)		{ this->iRadius = iRadius; }
	float GetArea()					{ return PI*iRadius*iRadius; }
};


int main()
{
// -----------------------------------------------------------------------
	/* [ C언어 - 1D] 
		
		int* piMem1D = (int*)malloc(sizeof(int)*SIZE);
		piMem1D[0];	
		
		free(piMem1D);
	*/
	
	/* [ C언어 - 2D] 
		
		int** piMem2D = (int**)malloc(sizeof(int*)*Row);
		for (int y=0; y<Row; y++)
		{
			piMem2D[y] = (int*)malloc(sizeof(int)*Col);
			//memset(piMem2D[y], 0, sizeof(int)*Col);
		}
		
		for(int y=0; y<Row; y++)
		{
			free(piMem2D[y]);
		}
		free(piMem2D);
	*/
	
// -----------------------------------------------------------------------



	// ---------------------------------------------------
	// [Step 1] 1D 메모리 동적할당 (char, short, int, float) 
	// ---------------------------------------------------
	
	
	// 1D 동적메모리 할당  
	int* piMem1D = new int [SIZE];	// int형으로 SIZE만큼 메모리를 만들어라!  
	
	
	// 1D 동적메모리를 배열과 같이 사용 
	for (int i=0; i<SIZE; i++) 
	{
		piMem1D[i] = i;
		cout << piMem1D[i] << endl; 	
	}
	
	// 1D 동적메모리 해제 
	delete[] piMem1D; 				// 여러개 잡을 때는 '[]' 
	
	
	
	// ---------------------------------------------------
	// [Step 2] 2D 메모리 동적할당 (char, short, int, float) 
	// ---------------------------------------------------
	int **piMem2D = new int*[ROW];					// int형으로 ROW의 사이즈만큼 메모리를 만들어라! 
	for(int i=0; i<ROW; ++i)
	{
		piMem2D[i] = new int[COL];					// int형으로 COL의 사이즈만큼 메모리를 만들어라! 
		memset(piMem2D[i], 0 , sizeof(int)*COL); 	// 메모리 공간을 0으로 초기화 
	}
	
	// 2D 동적메모리를 배열과 같이 사용 
	for (int i=0; i<ROW; ++i)
	{
		for (int j=0; j<COL; ++j)
		{
			piMem2D[i][j] = i*COL + j;
		}
	} 
	 
	for (int i=0; i<ROW; ++i)
	{
		for (int j=0; j<COL; ++j)
		{
			cout << piMem2D[i][j] << "\t";
		}
		cout << endl;
	}
	
	// 2D 동적메모리 해제 
	for (int i=0; i<ROW; ++i)
	{
		delete [] piMem2D[i];
	}
	delete [] piMem2D;				// 여러개 잡을 때는 '[]' 
	
	
	
	// ---------------------------------------------------
	// [Step 3] 특정 클래스에 대한 메모리 동적할당 
	// ---------------------------------------------------
	
	// 클래스 한개에 대한 메모리 동적할당 
	    // Circle C1;   
		// 프로그램이 종료될때까지 끝까지 남아있게 됨
	Circle* C1 = new Circle;     			// new 생성자  
	Circle* C2 = new Circle(10);			// new 생성자  
	
	// [주의] 포인터로 클래스 한개에 대한 메모리 동적할당을 할 때는 "."이 아니라 "->"를 통해 멤버변수/멤버함수에 접근해야 함! 
	cout << C1->GetArea() << endl;
	cout << C2->GetArea() << endl;
	
	delete C1;		// 하나일때는 '[]'를 사용하지 않음! 
	delete C2; 		// 하나일때는 '[]'를 사용하지 않음! 
	
	// 클래스 여러개에 대한 메모리 동적할당을 할 때는 배열처럼 사용  
		// Circle C[SIZE];			// 멤머변수/멤버함수 10개씩 생성됨 [정적 메모리] 
	cout << endl << endl;
	// int* piMem1D = new int [SIZE];
	Circle* cPointer = new Circle[10];	// Circle형으로 10개를 잡음  
	for (int i=0; i<SIZE; i++)
	{
		cPointer[i].SetRadius(10*i);	// 2개 이상이면 "->"이 아니라 "."이다! 
		cout << cPointer[i].GetArea() << endl;
	}
	delete [] cPointer; 	// [주의] 포인터로 클래스 동적할당 시, 반드시 메모리 해제 
	
	return 0;
}
