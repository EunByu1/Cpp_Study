/* [ ȭ�� ��� ] */

// [0] cout�� <<�����ڸ� ����ϱ� ���� iostream�� include��
# include <iostream>

// [1] �Լ��� ���� ���� 
double area(int r);


// [2] �Լ� ����
double area(int r)
{
	return 3.14 * r * r;		// ������ r�� �� ���� return 
}



int main()
{

// [3] ���� �����
	int n = 3;
	char c = '#';

// [4] ������ ��� 
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;		// true�� 1�� ��µ�
	std::cout << "n+5 = " << n + 5 << n;
	std::cout << "������" << area(n);

	return 0;

}