/* [ 'x'�� ������ ȭ�鿡 ��� ] */

# pragma region [0] include
	// # include <iostream> : ����� ��Ʈ�� ��ü(cout, cin)�� ��Ʈ�� ���� ������(<<, >>)�� ����ϱ� ���� iostream�� include��
# pragma endregion 
#include <iostream>

#define SIZE 100

# pragma region [1] std ����
	// std �̸� ������ ����� ��� �̸��� ���� std::�� ������
# pragma endregion
using namespace std; 

int main()
{

# pragma region [2] ���� ����� 
# pragma endregion
	int icount = 0;
	char cValue[SIZE];


# pragma region [3] ȭ�� �����
# pragma endregion
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	cin.getline(cValue, 100, '\n');


# pragma region [4] Ž��
	// 'x'�� ������ ���� icount�� ����
# pragma endregion
	for (int i = 0; i < SIZE; i++)
	{
		if (cValue[i] == 'x')
		{
			icount += 1;
		}
	}


# pragma region [5] ��� 
	// 'x'�� ������ ȭ�鿡 ���
# pragma endregion
	cout << "x�� ������ " << icount;


	return 0;

} 