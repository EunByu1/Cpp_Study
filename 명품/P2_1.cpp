/* [ �� ��� ] */

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

# pragma region [2] �� ��� 
	// ���� for���� �̿��Ͽ� �� ��� 
# pragma endregion
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;

}