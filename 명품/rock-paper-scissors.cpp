/* [ ����, ����, �� ���� ] */

# pragma region [0] include
	// # include <iostream> : ����� ��Ʈ�� ��ü(cout, cin)�� ��Ʈ�� ���� ������(<< , >> )�� ����ϱ� ���� iostream�� include��
	// # include <string>	: string Ŭ������ ����ϱ� ���� string ��� ������ include�� 
# pragma endregion 
# include <iostream>
# include <string>

# pragma region [1] std ����
	// std �̸� ������ ����� ��� �̸��� ���� std::�� ������
# pragma endregion
using namespace std;

int main()
{

# pragma region [2] ���ڿ� ���� ���� 
# pragma endregion
	string Romeo;
	string Juliet; 

# pragma region [3] ȭ�� �����
	// �����͸� ȭ�鿡 ������Ұ���
# pragma endregion
	cout << "���� ���� �� ������ �մϴ�. " << "����, ����, �� �߿��� �Է��ϼ���." << endl;

	cout << "�ι̿� >> ";
	getline(cin, Romeo);

	cout << "�ٸ��� >> ";
	getline(cin, Juliet);

# pragma region [4] �� 
	// ���ڸ� �����ϱ� ���� ����
# pragma endregion
	while (true)
	{
		if ((Romeo == "����" && Juliet == "����") or (Romeo == "����" && Juliet == "��") or (Romeo == "��" && Juliet == "����"))
		{
			cout << "�ٸ����� �̰���ϴ�.";
			break;
		}
		else if ((Romeo == "����" && Juliet == "����") or (Romeo == "��" && Juliet == "����") or (Romeo == "����" && Juliet == "��"))
		{
			cout << "�ι̿��� �̰���ϴ�.";
			break;
		}
		else if ((Romeo == "����" && Juliet == "����") or (Romeo == "����" && Juliet == "����") or (Romeo == "��" && Juliet == "��"))
		{
			cout << "�����ϴ�.";
			break;
		}
		else
		{
			cout << "�߸��� �Է��Դϴ�. " << "�ٽ� �Է��� �ּ���." << endl;

			cout << "�ι̿� >> ";
			getline(cin, Romeo);

			cout << "�ٸ��� >> ";
			getline(cin, Juliet);

			continue;
		}
	}
	
	return 0;

}