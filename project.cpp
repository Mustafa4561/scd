#include<iostream>
using namespace std;

class Calculator()
{
private:
double num1;
double num2;

public:
Calculator();
double addition(double x,double y);
double subtraction(double x,double y);
double Multiplication(double x,double y);
double Division(double x,double y);
};

double Calculator::Division(double x,double y)
{
	return x/y;

}

Calculator::Multiplication(double x,double y)
{
	return x*y;
}
double Calculator::addition(double x,double y)
{
	return x+y;

}
double Calculator::subtraction(double x,double y)
{
	return x-y;

}
Calculator::Calculator();



int main()
{

return 0;
}
