/* [ Circle Ŭ������ C++ ����ü�� �̿��Ͽ� ���ۼ� ] */

# pragma region [0] include
	// # include <iostream> : ����� ��Ʈ�� ��ü(cout)�� ������(endl), ��Ʈ�� ���� ������(<<)�� ����ϱ� ���� iostream�� include��
# pragma endregion 
#include <iostream>

# pragma region [1] std ����
	// std �̸� ������ ����� ��� �̸��� ���� std::�� ������
# pragma endregion
using namespace std;

# pragma region [2] struct ����
# pragma endregion
struct StructCircle
{
private:
	int radius;

public:
	StructCircle(int r)
	{
		radius = r;
	}
	double getArea();
};

double StructCircle::getArea()
{
	return 3.14 * radius * radius;
}


int main()
{

# pragma region [3] struct ��ü ����
# pragma endregion 
	StructCircle waffle(3);
	cout << "������ " << waffle.getArea();

	return 0;

}