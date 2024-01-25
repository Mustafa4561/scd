#include<iostream>
using namespace std;

class Calculator()
{
private:
double num1;
double num2;

public:
Calculator();
double Sum(double x,double y);
double Minus(double x,double y);
double Multiplication(double x,double y);
double Division(double x,double y);
};

Calculator::Division(double x,double y)
{
	return x/y;

}
Calculator::Multiplication(double x,double y)
{
	return x*y;

}



int main()
{

return 0;
}
