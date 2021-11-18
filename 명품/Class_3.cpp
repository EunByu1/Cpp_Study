/* [ 2���� �����ڸ� ���� Circle Ŭ���� ] */

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
class Circle						// [ Ŭ���� ����� ] 
{
public:
	int radius;
	Circle();
	Circle(int r);
	
	double getArea();
};

# pragma region [3-1] ������ ����
	// �Ű� ���� ���� ������ ���� 
# pragma endregion
Circle::Circle()
{
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

# pragma region [3-2] ������ ����
	// �Ű� ���� �ִ� ������ ���� 
# pragma endregion
Circle::Circle(int r)
{
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea()			// [ Ŭ���� ������ ] 
{
	return 3.14 * radius * radius;
}

int main()
{

# pragma region [4-1] ��ü ���� 
	// ��ü donut�� ������ 
	// donut.getArea() : donut��ü�� ��� �Լ��� ȣ����
# pragma endregion
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;


# pragma region [4-2] ��ü ���� 
	// ��ü pizza�� ������ 
	// pizza.getArea() : pizza��ü�� ��� �Լ��� ȣ����
# pragma endregion
	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

	return 0;

}