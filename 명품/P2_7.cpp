/* [ "yes"�� �Էµ� ������ �������� �ʴ� ���α׷� �ۼ� ] */

# pragma region [0] include
	// # include <iostream> : ����� ��Ʈ�� ��ü(cout)�� ������(endl), ��Ʈ�� ���� ������(<<)�� ����ϱ� ���� iostream�� include��
	// # include <string>	: string Ŭ������ ����ϱ� ���� string ��������� include�� 
# pragma endregion 
#include <iostream>
#include <string>


# pragma region [1] std ����
	// std �̸� ������ ����� ��� �̸��� ���� std::�� ������
# pragma endregion
using namespace std;


int main()
{
# pragma region [2] ���� ����� 
# pragma endregion
	string sAnswer;
	bool bYes = true;

# pragma region [3] ���� �� ��� 
# pragma endregion 
	do {
		cout << "�����ϰ� ������ yes�� �Է��ϼ��� >>";
		getline(cin, sAnswer);

		if (sAnswer == "yes")
		{
			bYes = false;
		}
	} while (bYes);

	printf("�����մϴ�. . .");


	return 0;
}