/* [ Rectangle Ŭ���� ���� ] */

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
class Rectangle					// [ Ŭ���� ����� ]
{
public:
	int width, height;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle()				
{
	width = height = 1;
}

Rectangle::Rectangle(int w, int h)
{
	width = w, height = h;
}

Rectangle::Rectangle(int length)
{
	width = height = 1;
}

bool Rectangle::isSquare()		// [ Ŭ���� ������ ]
{
	if (width == height) return true;
	else return false;
}


int main()
{

# pragma region [3] ��ü ���� 
# pragma endregion
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);


# pragma region [4] ��� �Լ� ȣ��
# pragma endregion
	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;

	return 0;

}