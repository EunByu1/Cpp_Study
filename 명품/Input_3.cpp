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
	cout << "�ּҸ� �Է��ϼ��� >> ";

	char address[100];
# pragma region [E] cin.getline()
	//     ��cin.getline(char buf[], int size, char delimitChar)��
	// ------------------------------------------------------------------
	// cin.getline() �Լ��� ������ �Ű����� delimitChar�� ������ �� ����
	// �� delimitChar�� ����Ʈ ���� '\n'�̱� ����
# pragma endregion
	cin.getline(address, 100, '\n');						// Ű����κ��� �ּ� �б�

	cout << "�ּҴ� " << address << "�Դϴ�." << endl;		// �ּ� ���

	return 0;
}
