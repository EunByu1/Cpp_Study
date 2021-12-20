#include <stdio.h>
#include <stdlib.h> 	// malloc, free, rand/srand
#include <memory.h>		// memset, memcpy
#include <time.h>

typedef unsigned char UCHAR;
typedef unsigned short USHART;
typedef unsigned short UINT; 

// --------------------------------------
// �Լ� ����  
// --------------------------------------
int*  Mem1DInt(int Size);							
int** Mem2DInt(int Row, int Col);  					// Row: Height(Y-axia), Col: Width(X-axis)
// [int]   iMem1D, iMem2D, uiMem1D, uiMem2D
// [char]  cMem1D, cMem2D, ucMem1D, ucMem2D
// [short] sMem1D, sMem2D, usMem1D, usMem2D
// [float] fMem1D, fMem2D

void Free1D(int*  Mem1D);							// 1D memory ���� 
void Free2D(int** Mem2D, int Row);					// 2D memory ����  

int   GetIntNum(int Min, int Max); 					// Min~Max ������ �� ���� ���� �������� 
int*  GetRandom(int* Mem1D, int Num, int Max); 		// 0~32767 ������ ���� �߿��� �ִ� Max �̳����� Num���� ���� �����ϰ� ��������   

void SortMINtoMax(int* list, int Size); 			// �������� �Լ� 
void SortMAXtoMIN(int* list, int Size); 			// �������� �Լ�  
void ShowArray(int* list, int Size); 				// �����͹迭�� ������ ���  

// --------------------------------------
// �Լ� ����  
// --------------------------------------
int* Mem1DInt(int Size)
{ 
	int* piMem1D = (int*)malloc(sizeof(int)*Size);
	memset(piMem1D, 0, sizeof(int)*Size);	
	return  piMem1D;
}

int** Mem2DInt(int Row, int Col)
{
	int** piMem2D = (int**)malloc(sizeof(int*) * Row); 
	for(int y=0; y<Row; y++)
	{
		piMem2D[y] = (int*)malloc(sizeof(int)*Col);
		memset(piMem2D[y], 0, sizeof(int)*Col);
	}
	
	return piMem2D;
}

void Free1D(int* Mem1D)
{
	free(Mem1D);
}

void Free2D(int** Mem2D, int Row)
{
	for(int y=0; y<Row; y++)
	{
		free(Mem2D[y]); 
	}	
	free(Mem2D);	
}

int GetIntNum(int Min, int Max)
{
	bool NumValidCheck = 0;     // bool Ÿ���� 0�� ����, 1�� �� (���� ���� "0"���� �ʱ�ȭ) 
	int iResult = 0;
	
	// ������ ������ 1~10�� ����	 
	do 
	{		
	    NumValidCheck = 0; // �ʱ�ȭ�� �ſ� �߿�!  
		printf("\nPlease, input number: ");  
		scanf("%d", &iResult); 		
		
		// �����ڰ� ������ ���ڰ� ������ ������ ������ ���ԵǴ����� ���� ��ȿ�� �˻� 
		if( (iResult > Max) || (iResult < Min) )	 
		{
			printf("\n[Error] This is an invalid number. You should input the number whose range is from %d to %d", Min, Max);
			printf("\n[Retry] Try again!");	
			NumValidCheck = 1;	 	
		}
	}while( NumValidCheck );  	
	
	return iResult;	
}

int* GetRandom(int* Mem1D, int Num, int Max)
{
	// -----------------------------------------------
	srand((UINT)time(NULL));	// ���� �ٸ� ���� �߻�
	
	// ������ Num���� ���� �߻� (0~Max)
	for(int i=0; i<Num; i++)
	{
		Mem1D[i] = rand()%(Max+1);
	}

	return Mem1D;
}

void SortMINtoMax(int* list, int Size)
{
	int iY, iX, iTmp;
	
	// �������� ���� �� ���
	for (iY = 0; iY < Size; iY++) 
	{	
		for (iX = 0; iX < Size-1; iX++) 
		{
			if (list[iX] > list[iX + 1]) 
			{				 
				iTmp 		 = list[iX];
				list[iX] 	 = list[iX + 1];
				list[iX + 1] = iTmp;
			}
		}
	}
		
	printf("\n������������(min -> max)�� ���ĵ�  ����� ����մϴ�.\n"); 
	ShowArray(list, Size);
}

void SortMAXtoMIN(int* list, int Size)
{
	int iY, iX, iTmp;
	
	// �������� ���� �� ��� 
	for (iY = 0; iY < Size; iY++) 
	{	
		for (iX = 0; iX < Size-1; iX++) 
		{
			if (list[iX] < list[iX + 1]) 
			{				 
				iTmp 		  = list[iX];
				list[iX] 	  = list[iX + 1];
				list[iX + 1]  = iTmp;
			}
		}
	}	
	
	printf("\n\n������������(max -> min)�� ���ĵ�  ����� ����մϴ�.\n"); 
	ShowArray(list, Size);
}

void ShowArray(int* list, int Size)
{
	int iX = 0;
	for (iX = 0; iX < Size; iX++)
	{
		printf("%d ", list[iX]);
	}	
}

