#include <iostream>
using namespace std; 



// �ڡڡ� [ �Լ� �����ε� ] �ڡڡ�   
// -----------------------------------------------------

// a���� b���� ���ϱ�  
int sum(int a, int b)
{
	int iResult = 0;
	for(int i=a; i<=b; i++)
	{
		iResult += i;
		// iResult = iResult + i; 

	}
	return iResult; 
}

// 0���� a���� ��ġ��  
int sum(int a)
{
	int iResult = 0;
	for(int i=0; i<=a; i++)
	{
		iResult += i;
	}
	return iResult; 
}

// -----------------------------------------------------


// --------------------------------------------------------------------------------
// [C++ ��� �Լ�]
// (Step3) �Լ� �ߺ� (function overloading): ������ �Լ���, �ٸ� �Լ����  
// �Ű����� ������ Ÿ���� ���� �ٸ� ������ �̸��� �������� �Լ� ����� ������
// --------------------------------------------------------------------------------


int main()
{
	cout << sum(3, 5) << endl;
	cout << sum(10) << endl;
	cout << sum(100) << endl;
	 

	return 0;
}

/*


[ Error ] 

int sum(int a=1, int b=2)
{
	// ????
}


int sum(int a)
{
	// ?????

}



int main()
{
	sum(); 
	// default���� ��� �ֱ⿡, Error �߻�!!
	return 0; 
}
 

*/
