#include <iostream>
using namespace std; 

# include <memory.h>
# define SIZE 10
# define ROW  10
# define COL  10
# define PI   3.14

// ----------------------------------------------------------------------------
//	new�� delete �����ڸ� �̿��� C++ �����Ҵ� (new == malloc, delete == free) 
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
	/* [ C��� - 1D] 
		
		int* piMem1D = (int*)malloc(sizeof(int)*SIZE);
		piMem1D[0];	
		
		free(piMem1D);
	*/
	
	/* [ C��� - 2D] 
		
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
	// [Step 1] 1D �޸� �����Ҵ� (char, short, int, float) 
	// ---------------------------------------------------
	
	
	// 1D �����޸� �Ҵ�  
	int* piMem1D = new int [SIZE];	// int������ SIZE��ŭ �޸𸮸� ������!  
	
	
	// 1D �����޸𸮸� �迭�� ���� ��� 
	for (int i=0; i<SIZE; i++) 
	{
		piMem1D[i] = i;
		cout << piMem1D[i] << endl; 	
	}
	
	// 1D �����޸� ���� 
	delete[] piMem1D; 				// ������ ���� ���� '[]' 
	
	
	
	// ---------------------------------------------------
	// [Step 2] 2D �޸� �����Ҵ� (char, short, int, float) 
	// ---------------------------------------------------
	int **piMem2D = new int*[ROW];					// int������ ROW�� �����ŭ �޸𸮸� ������! 
	for(int i=0; i<ROW; ++i)
	{
		piMem2D[i] = new int[COL];					// int������ COL�� �����ŭ �޸𸮸� ������! 
		memset(piMem2D[i], 0 , sizeof(int)*COL); 	// �޸� ������ 0���� �ʱ�ȭ 
	}
	
	// 2D �����޸𸮸� �迭�� ���� ��� 
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
	
	// 2D �����޸� ���� 
	for (int i=0; i<ROW; ++i)
	{
		delete [] piMem2D[i];
	}
	delete [] piMem2D;				// ������ ���� ���� '[]' 
	
	
	
	// ---------------------------------------------------
	// [Step 3] Ư�� Ŭ������ ���� �޸� �����Ҵ� 
	// ---------------------------------------------------
	
	// Ŭ���� �Ѱ��� ���� �޸� �����Ҵ� 
	    // Circle C1;   
		// ���α׷��� ����ɶ����� ������ �����ְ� ��
	Circle* C1 = new Circle;     			// new ������  
	Circle* C2 = new Circle(10);			// new ������  
	
	// [����] �����ͷ� Ŭ���� �Ѱ��� ���� �޸� �����Ҵ��� �� ���� "."�� �ƴ϶� "->"�� ���� �������/����Լ��� �����ؾ� ��! 
	cout << C1->GetArea() << endl;
	cout << C2->GetArea() << endl;
	
	delete C1;		// �ϳ��϶��� '[]'�� ������� ����! 
	delete C2; 		// �ϳ��϶��� '[]'�� ������� ����! 
	
	// Ŭ���� �������� ���� �޸� �����Ҵ��� �� ���� �迭ó�� ���  
		// Circle C[SIZE];			// ��Ӻ���/����Լ� 10���� ������ [���� �޸�] 
	cout << endl << endl;
	// int* piMem1D = new int [SIZE];
	Circle* cPointer = new Circle[10];	// Circle������ 10���� ����  
	for (int i=0; i<SIZE; i++)
	{
		cPointer[i].SetRadius(10*i);	// 2�� �̻��̸� "->"�� �ƴ϶� "."�̴�! 
		cout << cPointer[i].GetArea() << endl;
	}
	delete [] cPointer; 	// [����] �����ͷ� Ŭ���� �����Ҵ� ��, �ݵ�� �޸� ���� 
	
	return 0;
}
