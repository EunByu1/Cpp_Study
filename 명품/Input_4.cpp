/* [ ȭ�� �Է� ] */

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

# pragma region [2] ���ڿ� ���� 
# pragma endregion
	string song("Falling in love with you");	// ���ڿ� song
	string elvis("Elvis Presley");				// ���ڿ� elvis
	string singer;								// ���ڿ� singer

# pragma region [3] ȭ�� �����
	// �����͸� ȭ�鿡 ������Ұ���
# pragma endregion
	cout << song + "�� �θ� ������";					// +�� ���ڿ� ���� 
	cout << "(��Ʈ : ù���ڴ� " << elvis[0] << ")?";	// [] ������ ���

	getline(cin, singer);		// ���ڿ� �Է� 
		
	if (singer == elvis)		// ���ڿ� �� 
		cout << "�¾ҽ��ϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�." << endl;

	return 0;
}