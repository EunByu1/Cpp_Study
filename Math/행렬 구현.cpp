# include<stdio.h>                 // ����� �Լ��� ����ϱ� ���� ��������� ������ 
# include<stdlib.h>
# include<math.h>                  // ���а� ���õ� �Լ��� ����ϱ� ���� ��������� ������ 
# include<memory.h>

typedef unsigned int UINT;         // �ڷ����� ������ 

UINT MatrixValue(UINT uiMatrixSize, UINT** Matrix);    // ����� ũ��� 2���� ����� ���ڷ� �޴� �Լ� ����  

int main()
{
// -------------------------- 
     // 1. ��� ���� //
// --------------------------


// �� ��İ� ���õ� ���� ����� 
    bool Matrix_state = true;               // ����� ���¿� ���õ� ����  
    UINT uiMatrixSize;                      // ����� ũ�⸦ ������ ����  
    UINT uiMatrixRow     = 0;               // ����� ���� ���� ���õ� ����    
    UINT uiMatrixColumn  = 0;               // ����� ���� ���� ���õ� ����  
    UINT uiMatrixElement = 0;               // ����� ��� ���� �����ϴ� ���� 
    UINT uiMatrixValue   = 0;               // ��Ľ��� ���� ���� �����ϴ� ����  
    UINT uiTmpValue      = 0;               // ����������� ���� ���� �ӽ÷� �����ϴ� ����  
    UINT** Matrix;                          // ��� Ʋ 



// �� ����� ũ�� �Է¹ޱ� ( 2 <= N(ũ��) < 10 )
    printf("����� ũ�⸦ �Է����ּ���. : ");   // ����ڿ��� ����� ũ�⸦ �Է¹ޱ� ���� ��Ʈ ���  
    scanf("%d", &uiMatrixSize);                 // ����ڿ��� �Է¹��� ���� ����� ũ��� ���õ� ������ ���� 

    do
    {

        if ((2 <= uiMatrixSize) && (uiMatrixSize < 10))   // ���� uiMatrixSize�ȿ� ����� ���� 2<=N<10�̸�(True), ���๮�� Ż����  
        {                                                 // �׷��� ������(False), �Է��� ��� �ؾ� ��  
            Matrix_state = false;
        }

        else
        {
            printf("����� ũ�⸦ �ٽ� �Է����ּ���. : ");   // ����ڿ��� ����� ũ�⸦ �ٽ� �Է¹ޱ� ���� ��Ʈ ���  
            scanf("%d", &uiMatrixSize);                      // ����ڿ��� �Է¹��� ���� ����� ũ��� ���õ� ������ ���� 
        }


    } while (Matrix_state);
    printf("\n");


// �� ����� ũ�� �����ؼ� ��� �����  
    Matrix = (UINT**)malloc(sizeof(UINT*) * uiMatrixSize);                      // ���� �������� UINT���� 2D �迭�� ����ǵ�, �迭�� �� ���ҵ��� UINT���� 1D�� ������� 

    for (uiMatrixColumn = 0; uiMatrixColumn < uiMatrixSize; uiMatrixColumn++)
    {
        Matrix[uiMatrixColumn] = (UINT*)malloc(sizeof(UINT) * uiMatrixSize);    // Ư�� �࿡ ���� ���� UINT���� 1D�迭�� ����ǵ�, �迭 �� �� ���ҵ��� UINT������ �������  
    } //for(uiMatrixColumn=0; uiMatrixColumn<uiMatrixSize; uiMatrixColumn++)


// �� ��Ŀ� �� �ֱ�  
    for (uiMatrixRow = 0; uiMatrixRow < uiMatrixSize; uiMatrixRow++)
    {
        for (uiMatrixColumn = 0; uiMatrixColumn < uiMatrixSize; uiMatrixColumn++)
        {
            printf("%d���� %d���� ���� ���� �Է����ּ��� : ", uiMatrixRow + 1, uiMatrixColumn + 1);
            scanf("%d", &Matrix[uiMatrixRow][uiMatrixColumn]);
        } //for(uiMatrixColumn=0; uiMatrixColumn<uiMatrixSize; uiMatrixColumn++) 

        printf("\n");

    }    // for(uiMatrixRow=0; uiMatrixRow<uiMatrixSize; uiMatrixRow++)


// �� ��� ����ϱ� 
    printf("\n������ ����� �Ʒ��� �����ϴ�.\n");
    for (uiMatrixRow = 0; uiMatrixRow < uiMatrixSize; uiMatrixRow++)
    {
        for (uiMatrixColumn = 0; uiMatrixColumn < uiMatrixSize; uiMatrixColumn++)
        {
            printf("%3d", Matrix[uiMatrixRow][uiMatrixColumn]);
        } //for(uiMatrixColumn=0; uiMatrixColumn<uiMatrixSize; uiMatrixColumn++)       
        printf("\n");
    }    // for(uiMatrixRow=0; uiMatrixRow<uiMatrixSize; uiMatrixRow++)



// �� �޸� ��ȯ�ϱ�     
    for (uiMatrixRow = 0; uiMatrixRow < uiMatrixSize; uiMatrixRow++)
    {
        free(Matrix[uiMatrixColumn]);
    }  // for (uiMatrixRow = 0; uiMatrixRow < uiMatrixSize; uiMatrixRow++)
    free(Matrix);

    return 0;
}

