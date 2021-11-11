# include<stdio.h>                 // 입출력 함수를 사용하기 위해 헤더파일을 가져옴 
# include<stdlib.h>
# include<math.h>                  // 수학과 관련된 함수를 사용하기 위해 헤더파일을 가져옴 
# include<memory.h>

typedef unsigned int UINT;         // 자료형을 정의함 

UINT MatrixValue(UINT uiMatrixSize, UINT** Matrix);    // 행렬의 크기와 2차원 행렬을 인자로 받는 함수 선언  

int main()
{
// -------------------------- 
     // 1. 행렬 구현 //
// --------------------------


// ① 행렬과 관련된 변수 선언부 
    bool Matrix_state = true;               // 행렬의 상태와 관련된 변수  
    UINT uiMatrixSize;                      // 행렬의 크기를 저장할 변수  
    UINT uiMatrixRow     = 0;               // 행렬의 행의 값과 관련된 변수    
    UINT uiMatrixColumn  = 0;               // 행렬의 열의 값과 관련된 변수  
    UINT uiMatrixElement = 0;               // 행렬의 요소 값을 저장하는 변수 
    UINT uiMatrixValue   = 0;               // 행렬식의 최종 값을 저장하는 변수  
    UINT uiTmpValue      = 0;               // 연산과정에서 나온 값을 임시로 저장하는 변수  
    UINT** Matrix;                          // 행렬 틀 



// ② 행렬의 크기 입력받기 ( 2 <= N(크기) < 10 )
    printf("행렬을 크기를 입력해주세요. : ");   // 사용자에게 행렬의 크기를 입력받기 위해 멘트 출력  
    scanf("%d", &uiMatrixSize);                 // 사용자에게 입력받은 값을 행렬의 크기와 관련된 변수에 저장 

    do
    {

        if ((2 <= uiMatrixSize) && (uiMatrixSize < 10))   // 만약 uiMatrixSize안에 저장된 값이 2<=N<10이면(True), 실행문을 탈출함  
        {                                                 // 그렇지 않으면(False), 입력을 계속 해야 함  
            Matrix_state = false;
        }

        else
        {
            printf("행렬을 크기를 다시 입력해주세요. : ");   // 사용자에게 행렬의 크기를 다시 입력받기 위해 멘트 출력  
            scanf("%d", &uiMatrixSize);                      // 사용자에게 입력받은 값을 행렬의 크기와 관련된 변수에 저장 
        }


    } while (Matrix_state);
    printf("\n");


// ③ 행렬의 크기 적용해서 행렬 만들기  
    Matrix = (UINT**)malloc(sizeof(UINT*) * uiMatrixSize);                      // 행을 기준으로 UINT형의 2D 배열을 만들건데, 배열안 각 원소들을 UINT형의 1D로 만들거임 

    for (uiMatrixColumn = 0; uiMatrixColumn < uiMatrixSize; uiMatrixColumn++)
    {
        Matrix[uiMatrixColumn] = (UINT*)malloc(sizeof(UINT) * uiMatrixSize);    // 특정 행에 대해 각각 UINT형의 1D배열을 만들건데, 배열 안 각 원소들은 UINT형으로 만들거임  
    } //for(uiMatrixColumn=0; uiMatrixColumn<uiMatrixSize; uiMatrixColumn++)


// ④ 행렬에 값 넣기  
    for (uiMatrixRow = 0; uiMatrixRow < uiMatrixSize; uiMatrixRow++)
    {
        for (uiMatrixColumn = 0; uiMatrixColumn < uiMatrixSize; uiMatrixColumn++)
        {
            printf("%d행의 %d열에 넣을 값을 입력해주세요 : ", uiMatrixRow + 1, uiMatrixColumn + 1);
            scanf("%d", &Matrix[uiMatrixRow][uiMatrixColumn]);
        } //for(uiMatrixColumn=0; uiMatrixColumn<uiMatrixSize; uiMatrixColumn++) 

        printf("\n");

    }    // for(uiMatrixRow=0; uiMatrixRow<uiMatrixSize; uiMatrixRow++)


// ⑤ 행렬 출력하기 
    printf("\n생성된 행렬은 아래와 같습니다.\n");
    for (uiMatrixRow = 0; uiMatrixRow < uiMatrixSize; uiMatrixRow++)
    {
        for (uiMatrixColumn = 0; uiMatrixColumn < uiMatrixSize; uiMatrixColumn++)
        {
            printf("%3d", Matrix[uiMatrixRow][uiMatrixColumn]);
        } //for(uiMatrixColumn=0; uiMatrixColumn<uiMatrixSize; uiMatrixColumn++)       
        printf("\n");
    }    // for(uiMatrixRow=0; uiMatrixRow<uiMatrixSize; uiMatrixRow++)



// ⑥ 메모리 반환하기     
    for (uiMatrixRow = 0; uiMatrixRow < uiMatrixSize; uiMatrixRow++)
    {
        free(Matrix[uiMatrixColumn]);
    }  // for (uiMatrixRow = 0; uiMatrixRow < uiMatrixSize; uiMatrixRow++)
    free(Matrix);

    return 0;
}

