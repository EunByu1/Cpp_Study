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
	// 멤버 접근 지정자가 private이면, main()에서 호출할 수 없음
# pragma endregion 
	PrivateAccessError objA;				// [ 멤버 접근 지정자 : private ] 
	PrivateAccessError objB(100);			// [ 멤버 접근 지정자 : public  ]
	objB.a = 10;							// [ 멤버 접근 지저자 : private ]
	objB.b = 20;							// [ 멤버 접근 지정자 : public  ]
	objB.f();								// [ 멤버 접근 지정자 : private ]
	objB.g();								// [ 멤버 접근 지정자 : public  ]

	return 0;

}