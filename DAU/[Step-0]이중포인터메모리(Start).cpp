#include<stdio.h>   // 입출력하기 위해 stdio 헤더파일 include
#include<stdlib.h>  // malloc, free를 사용하기 위해 stdilib 헤더파일 include
#include<memory.h>  // memset,memcpy를 사용하기 위해 memory 헤더파일 include

typedef unsigned int UINT;
typedef unsigned short USHORT;

//..........................
//함수 선언
//..........................
//1Dint에 대한 메모리 할당과 해제 함수 
int* Mem1Dint(int Size);
        void Free1D(int*Mem1D);         //포인터로 1차원 배열 생성 [메모리 동적 할당]

int** Mem2Dint(int Row, int Col);       //포인터로 2차원 배열 생성
void Free2Dint(int**Mem2D, int Row);

//1Dchar에 대한 메모리 할당과 해제 함수
char* Mem1Dchar(char Size);
void Free1Dchar(char*Mem1D);

//2Dchar에 대한 메모리 할당과 해제 함수
char**Mem2Dchar(char Size);
void Free2Dchar(char*Mem2D, int Row);


//..........................
//함수 정의 
//..........................

//1Dint에 대한 메모리 할당과 해제 함수 정의 
int* Mem1Dint(int Size)     // 반환 : 1D
{
	// 1D memory
	int * piMem = (int*)malloc(sizeof(int)*Size);
	// → sizeof(int) * size만큼 int형의 메모리를 할당할거임 
	memset(piMem, 0, sizeof(int)*Size);
	// → piMeomry1D이름의 메모리 안의 값을 다 0으로 초기화할거임 
	return piMem;
}
void Free1D(int*Mem1D)
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


// ----------------------------------------------------------------------------------


//2Dint 메모리 할당과 해제 함수 정의  
int** Mem2Dint(int Row, int Col)
{
	int **piMem2D = (int**)malloc(sizeof(int*)*Row);
	// → sizeof(int*) * size => sizeof(int) * size 만큼 공간을 생성할건데
    //    그 공간은 (int*) 즉, 주소에 해당하는 공간으로 사용할거임 
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
	// 해제는 y값만 있으면 됨
	{
		free(Mem2D[y]);
	}
	free(Mem2D);
}
 
 

//2Dchar 메모리 할당과 해제 함수 정의
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



