/* [ Ű����κ��� �� ���� ������ �о� ū ���� ȭ�鿡 ��� ] */

# pragma region [0] include
	// # include <iostream> : ����� ��Ʈ�� ��ü(cout, cin)�� ��Ʈ�� ���� ������(<<, >>)�� ����ϱ� ���� iostream�� include��
# pragma endregion 
#include <iostream>

# pragma region [1] std ����
	// std �̸� ������ ����� ��� �̸��� ���� std::�� ������
# pragma endregion
using namespace std;

int main()
{

# pragma region [2] ���� �����
# pragma endregion
	int iFirst  = 0;
	int iSecond = 0;


# pragma region [3] ������ �Է�
# pragma endregion
	cin >> iFirst >> iSecond;


# pragma region [4] ��
	// Ű����κ��� �Է¹��� �� ���� ������ ��
# pragma endregion
	if (iFirst < iSecond)
	{
		cout << "ū �� = " << iSecond;
	}
	else
	{
		cout << "ū �� = " << iFirst;
	}
	

	return 0;

}