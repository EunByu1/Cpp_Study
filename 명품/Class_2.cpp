/* [ class�� �̿��Ͽ� �簢�� ���� ���ϱ� ] */

# pragma region [0] include
	// # include <iostream> : ����� ��Ʈ�� ��ü(cout)�� ������(endl), ��Ʈ�� ���� ������(<<)�� ����ϱ� ���� iostream�� include��
# pragma endregion 
#include <iostream>

# pragma region [1] std ����
	// std �̸� ������ ����� ��� �̸��� ���� std::�� ������
# pragma endregion
using namespace std;

# pragma region [2] Ŭ���� ���� 
// Ŭ������ Ŭ���� �����, Ŭ���� �����η� ���� 
# pragma endregion
class Rectangle				// [ Ŭ���� ����� ] 
{
public:
	int width  = 0;
	int height = 0;

	int getArea();
};

int Rectangle::getArea()	// [ Ŭ���� ������ ] 
{
	return width * height;
}

int main()
{

# pragma region [3-1] ��ü ���� 
	// ��ü rect�� ������ 
	// rect.width	   : rect��ü�� ��� ������ ������
	// rect.height     : rect��ü�� ��� ������ ������
	// rect.getArea()  : rect��ü�� ��� �Լ��� ȣ����
# pragma endregion
	Rectangle rect;
	rect.width  = 3;
	rect.height = 5;
	cout << "�簢���� ������ " << rect.getArea() << endl;

	return 0;

}