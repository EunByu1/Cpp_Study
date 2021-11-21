/* [ Compile Error ] */
#include <iostream>

using namespace std;

class PrivateAccessError
{
private:
	int a;
	void f();
	PrivateAccessError();

public:
	int b;
	PrivateAcccessError(int x);
	void g();
};

PrivateAccessError::PrivateAccessError()
{
	a = 1;
	b = 1;
}

PrivateAccessError::PrivateAccessError(int x)
{
	a = x;
	b = x;
}

void PrivateAccessError::f()
{
	a = 5;
	b = 5;
}

void PrivateAccessError::g()
{
	a = 6;
	b = 6;
}

int main()
{

# pragma region [*] Compile Error
	// ��� ���� �����ڰ� private�̸�, main()���� ȣ���� �� ����
# pragma endregion 
	PrivateAccessError objA;				// [ ��� ���� ������ : private ] 
	PrivateAccessError objB(100);			// [ ��� ���� ������ : public  ]
	objB.a = 10;							// [ ��� ���� ������ : private ]
	objB.b = 20;							// [ ��� ���� ������ : public  ]
	objB.f();								// [ ��� ���� ������ : private ]
	objB.g();								// [ ��� ���� ������ : public  ]

	return 0;

}