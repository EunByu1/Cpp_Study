/* [ �Ҽ����� ������ 5���� �Ǽ��� �Է� �޾� ���� ū ���� ȭ�鿡 ��� ] */

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
	double i1	= 0;
	double i2	= 0;
	double i3	= 0;
	double i4	= 0;
	double i5	= 0;
	double tmp  = 0;
	

# pragma region [3] �����
# pragma endregion
	cout << "5 ���� �Ǽ��� �Է��϶� >>";
	cin >> i1 >> i2 >> i3 >> i4 >> i5;
	

# pragma region [4] �� 
	// ���� ū ���� ���� tmp�� ���� 
# pragma endregion
	while (true)
	{
		if (tmp < i1)
		{
			tmp = i1;
		}
		else if (tmp < i2)
		{
			tmp = i2;
		}
		else if (tmp < i3)
		{
			tmp = i3;
		}
		else if (tmp < i4)
		{
			tmp = i4;
		}
		else if (tmp < i5)
		{
			tmp = i5;
		}
		else
		{
			break;
		}
	}


# pragma region [5] ��� 
	// ���� ū ���� ȭ�鿡 ���
# pragma endregion
	cout << "���� ū �� = " << tmp;
	

	return 0;

}