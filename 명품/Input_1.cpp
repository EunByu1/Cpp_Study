/* [ ȭ�� �Է� ] */

# pragma region [0] include
	// ����� ��Ʈ�� ��ü(cout, cin)�� ��Ʈ�� ���� ������(<< , >> )�� ����ϱ� ���� iostream�� include��
# pragma endregion
# include <iostream>

# pragma region [1] std ����
	// std �̸� ������ ����� ��� �̸��� ���� std::�� ������
# pragma endregion
using namespace std;

int main()
{

# pragma region [2] ȭ�� �����
	// �����͸� ȭ�鿡 ������Ұ���
# pragma endregion
	cout << "�ʺ� �Է��ϼ��� >> ";

	int width;
	cin >> width;

	cout << "���̸� �Է��ϼ��� >> ";

	int height;
	cin >> height;

	int area = width * height;
	cout << "������ " << area << endl;

	return 0;

}