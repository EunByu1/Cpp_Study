/* [ Circle Ŭ������ ��ü ���� �� Ȱ�� ] */


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
	double getArea();
};	// class Circle
double Circle::getArea()			// [ Ŭ���� ������ ] 
{
	return 3.14 * radius * radius;
}	// double Circle::getArea()

int main()
{
# pragma region [3-1] ��ü ���� 
	// ��ü donut�� ������ 
	// donut.radius	   : donut��ü�� ��� ������ ������
	// donut.getArea() : donut��ü�� ��� �Լ��� ȣ����
# pragma endregion
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;


# pragma region [3-2] ��ü ���� 
	// ��ü pizza�� ������ 
	// pizza.radius	   : pizza��ü�� ��� ������ ������
	// pizza.getArea() : pizza��ü�� ��� �Լ��� ȣ����
# pragma endregion
	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;


	return 0;

}