/* [ ��� ���� �ʱ�ȭ�� ���� ������ Ȱ�� ] */

# pragma region [0] include
	// # include <iostream> : ����� ��Ʈ�� ��ü(cout)�� ������(endl), ��Ʈ�� ���� ������(<<)�� ����ϱ� ���� iostream�� include��
# pragma endregion 
#include <iostream>

# pragma region [1] std ����
	// std �̸� ������ ����� ��� �̸��� ���� std::�� ������
# pragma endregion
using namespace std;

# pragma region [2] Ŭ���� ����
# pragma endregion
class Point			
{
	int x, y;
public:
	Point();
	Point(int a, int b);
};

# pragma region [*] ��� ���� �ʱ�ȭ
# pragma endregion
Point::Point() : Point(0, 0) {}				// [ ���� ������ ]
Point::Point(int a, int b) : x(a), y(b)		// [ Ÿ�� ������ ]
{
	cout << "(" << x << "," << y << ")" << endl;
}

int main()
{

# pragma region [3] ��ü ���� 
# pragma endregion
	Point origin;
	Point target(10, 20);

	return 0;

}

