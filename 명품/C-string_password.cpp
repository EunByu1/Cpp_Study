/* [ C-String�� �̿��Ͽ� ��ȣ�� ��Ȯ�ϰ� �ԷµǸ� ���α׷��� �����ϴ� ���α׷� ] */

# pragma region [0] include
	// # include <iostream> : ����� ��Ʈ�� ��ü(cout, cin)�� ������ �Լ�(endl), ��Ʈ�� ���� ������(<< , >> )�� ����ϱ� ���� iostream�� include��
	// # include <cstring>  : strcmp()�Լ��� ����ϱ� ���� cstring�� include�� 
# pragma endregion
# include <iostream>
# include <cstring>

# pragma region [1] std ����
	// std �̸� ������ ����� ��� �̸��� ���� std::�� ������
# pragma endregion 
using namespace std;

int main()
{

# pragma region [2] ���� ����
	// ���ڿ� ���� password�� ������
# pragma endregion
	char password[11];
	
# pragma region [3] ȭ�� �����
	// ��Ȯ�� ��ȣ�� �Է¹��� ������ ���ѷ��� 
# pragma endregion 
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	
	while (true)
	{
		cout << "��ȣ >>";
		
		cin >> password;

		if(strcmp(password, "C++") == 0)
		{
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}	// if
		else
		{
			cout << "��ȣ�� Ʋ���ϴ�." << endl;
		}	// else
	}		// while (true)

	return 0;
}