/* [ Circle Ŭ������ �Ҹ��� �ۼ� �� ���� ]*/

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
class Circle				// [ Ŭ���� ����� ]
{
public :
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle :: Circle()			// [ Ŭ���� ������ ]
{
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle :: Circle(int r)		// [ Ŭ���� ������ ]
{
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle :: ~Circle()			// [ Ŭ���� �Ҹ��� ]
{
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}

double Circle::getArea()	// [ Ŭ���� ������ ]
{
	return 3.14 * radius * radius;
}


int main()
{

# pragma region [3] ��ü ���� 
# pragma endregion
	Circle donut;
	Circle pizza(30);

	return 0;

}