#include<iostream>
using namespace std;

//-----------------------------------------------------
class Adder
{
protected:
	int add(int a, int b) {return a+b;}
};
//-----------------------------------------------------

//-----------------------------------------------------
class Subtractor
{
protected:
	int minus(int a, int b){return a-b;}
};
//-----------------------------------------------------

//-----------------------------------------------------
class Calculator : public Adder, public Subtractor		// Calculator가 Adder, Subtractor 상속받음              
                                                        // [ 다중 상속 ]  
{
public:
	int calc(char opt, int a, int b);
};
//-----------------------------------------------------

//-----------------------------------------------------
int Calculator::calc(char opt, int a, int b)	
{
	int result=0;
	switch(opt)
	{
		case '+': result = add(a, b); break;
		case '-': result = minus(a, b);break;
	}
	return result;
}
//-----------------------------------------------------

//-----------------------------------------------------
int main()
{
	Calculator C;
	cout << C.calc('+',2,4) << endl;
	cout << C.calc('-',100, 8) << endl;
	
}
//-----------------------------------------------------

