#include <iostream>
using namespace std; 

void swap1(int a, int b) 
{
	int tmp;
	tmp = a;
	a   = b;
	b   = tmp; 
	
	cout << endl;
	cout << "<Inside function>" << endl;
	cout << "iNum1: " << a << endl;
	cout << "iNum2: " << b << endl;		
}

void swap2(int *a, int *b) 	// �ּҸ� �����ϱ� ���� �����ͺ��� ���� 
{
	int tmp;
	tmp  = *a;
	*a   = *b;
	*b   = tmp; 
	
	cout << endl;
	cout << "<Inside function>" << endl;
	cout << "iNum1: " << *a << endl;
	cout << "iNum2: " << *b << endl;		
}

void swap3(int &a, int &b)    // int &a : a�� ���� ������  , int &b : b�� ���� ������  
{		  					  // int &a = iNum1, int &b = iNum2
	int tmp;
	tmp = a;
	a   = b;
	b   = tmp; 
	
	cout << endl;
	cout << "<Inside function>" << endl;
	cout << "iNum1: " << a << endl;
	cout << "iNum2: " << b << endl;		
}


// --------------------------------------------------------------------------------
// [C++ ��� �Լ� ȣ����]
// (Step1) ����   ���� ȣ�� (call by value)
// (Step2) �ּҿ� ���� ȣ�� (call by address / call by pointer)
// (Step3) ������ ���� ȣ�� (call by reference)
// --------------------------------------------------------------------------------
int main()
{
	// ----------------------------------------------------
	// [Step1] ���� ���� ȣ�� (call by value)
	// ---------------------------------------------------- 
	int iNum1 = 10;
	int iNum2 = 20;
	
	cout << "<Before function>" << endl;
	cout << "iNum1: " << iNum1 << endl;
	cout << "iNum2: " << iNum2 << endl;	
	
	swap1(iNum1, iNum2);    	// ���� �Ѱ���  
	
	cout << endl;
	cout << "<After function>" << endl;
	cout << "iNum1: " << iNum1 << endl;
	cout << "iNum2: " << iNum2 << endl;
	
	
	
	// ----------------------------------------------------
	// [Step2] �ּҿ� ���� ȣ�� (call by address / call by pointer)
	// ---------------------------------------------------- 
	cout << endl << endl;
	iNum1 = 10;
	iNum2 = 20;	
	
	cout << "<Before function>" << endl;
	cout << "iNum1: " << iNum1 << endl;
	cout << "iNum2: " << iNum2 << endl;	
	
	swap2(&iNum1, &iNum2);		// �ּҸ� �Ѱ��� 
	
	cout << endl;
	cout << "<After function>" << endl;
	cout << "iNum1: " << iNum1 << endl;
	cout << "iNum2: " << iNum2 << endl;
	
	
	
	// ----------------------------------------------------
	// [Step3] ������ ���� ȣ�� (call by reference)
	// - ��������: ��� �� ������ �ٸ� �̸�, �� ���� (ex., ���缮 ����: �޶ѱ�) 
	// - �������� ����: "�ڷ���& ���������̸� = ��������;" 
	// ---------------------------------------------------- 
	cout << endl << endl;
	iNum1 = 10;
	iNum2 = 20;	
			
	cout << "<Before function>" << endl;
	cout << "iNum1: " << iNum1 << endl;
	cout << "iNum2: " << iNum2 << endl;	
	
	swap3(iNum1, iNum2);
	
	cout << endl;
	cout << "<After function>" << endl;
	cout << "iNum1: " << iNum1 << endl;
	cout << "iNum2: " << iNum2 << endl;	

	return 0;
}
















































