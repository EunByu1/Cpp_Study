#include<stdio.h>
#include<stdlib.h>
#include<memory.h> 

typedef unsigned int UINT;
typedef unsigned short USHORT;

//..........................
//�Լ� ����
//..........................
//1Dint�� ���� �޸� �Ҵ�� ���� �Լ� 
int* Mem1Dint(int Size);
void Free1Dint(int*Mem1D);

int** Mem2Dint(int Row, int Col);
void Free2Dint(int**Mem2D, int Row);

//1Dchar�� ���� �޸� �Ҵ�� ���� �Լ�
char* Mem1Dchar(char Size);
void Free1Dchar(char*Mem1D);

//2Dchar�� ���� �޸� �Ҵ�� ���� �Լ�
char**Mem2Dchar(char Size);
void Free2Dchar(char*Mem2D, int Row);


//..........................
//�Լ� ���� 
//..........................

//1Dint�� ���� �޸� �Ҵ�� ���� �Լ� ���� 
int* Mem1Dint(int Size)
{
	// 1D memory
	int * piMem = (int*)malloc(sizeof(int)*Size);
	memset(piMem, 0, sizeof(int)*Size);
	return piMem;
}
void Free1Dint(int*Mem1D)
{
	free(Mem1D);
}

char* Mem1Dchar(char Size)
{
	char * piMem = (char*)malloc(sizeof(char)*Size);
	memset(piMem, 0, sizeof(char)*Size);
	return piMem;
}
void Free1Dchar(char*Mem1D)
{
	free(Mem1D);
}


 



//2Dint �޸� �Ҵ�� ���� �Լ� ����  
int** Mem2Dint(int Row, int Col)
{
	int **piMem2D = (int**)malloc(sizeof(int*)*Row);
	for(int y = 0; y<Row;y++)
	{
		piMem2D[y] = (int*)malloc(sizeof(int)*Col);
		memset(piMem2D[y], 0 ,sizeof(int*)*Col);
	}
	
	return piMem2D;
}
void Free2Dint(int**Mem2D, int Row)
{
	for(int y = 0; y < Row; y++)
	{
		free(Mem2D[y]);
	}
	free(Mem2D);
}
 
 

//2Dchar �޸� �Ҵ�� ���� �Լ� ����
char**Mem2Dchar(int Row,int col)
{
	char**piMem2D = (char**)malloc(sizeof(char*)*Row);
	for(int y = 0;y<Row;y++)
	{
		
	}
}
void Free2Dchar(char**Mem2D, int Row)
{
	for(int y = 0; y < Row; y++)
	{
		free(Mem2D[y]);
	}
	free(Mem2D);
}



