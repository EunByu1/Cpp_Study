/* [ 1 ~ 100���� ������ �� �ٿ� 10���� ��� ] */

# pragma region [0] include
	// # include <iostream> : ����� ��Ʈ�� ��ü(cout)�� ��Ʈ�� ���� ������(<<)�� ����ϱ� ���� iostream�� include��
# pragma endregion 
#include <iostream>

# pragma region [1] std ����
	// std �̸� ������ ����� ��� �̸��� ���� std::�� ������
# pragma endregion
using namespace std; 

int main()
{

# pragma region [2] ���
	// 1 ~ 100���� ������ �� �ٿ� 10���� ���
# pragma endregion
	for (int i = 1; i < 100 + 1; i++)
	{
		cout << i << "\t";

		if ((i % 10) == 0)
		{
			cout << "\n";
		}
	}

	return 0; 

}