/* [ ������ ��� ] */

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
# pragma endregion
	for(int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << j << 'x' << i << '=' << i * j << '\t';
		}
	
		cout << '\n';
	}

	return 0;

}