/* [ ȭ�� �Է� ] */

# pragma region [0] include
	// ����� ��Ʈ�� ��ü(cout, cin)�� ������ �Լ�(endl), ��Ʈ�� ���� ������(<< , >> )�� ����ϱ� ���� iostream�� include��
# pragma endregion
# include <iostream>

# pragma region [1] std ����
	// std �̸� ������ ����� ��� �̸��� ���� std::�� ������
# pragma endregion
using namespace std;

int main()
{

# pragma region [2] ȭ�� ����� 
	// �����͸� ȭ�鿡 ������� 
# pragma endregion
	cout << "�̸��� �Է��ϼ��� : ";

	char name[11];				// �ѱ��� 5��, ������ 10������ ������ �� ���� 
	cin >> name;				// Ű����κ��� ���ڿ��� ���� 

	cout << "�̸��� " << name << "�Դϴ�" << endl;

	return 0;

}