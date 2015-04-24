#include <iostream>
using namespace std;
enum OpType { Add = '+', Sub = '-', Mul = '*', Dvd = '/'};
//This is my comment you can kiss my ass akhpar
//You have no HONOR! MURDERER! SODOMIZER!
int main()
{
	OpType op;
	double a;
	double b;
	char CharOp;
	

	cout << "Enter a: # \n";
	cin >> a;
	cout << "Enter operation: \n";
	cin >> CharOp;
	cout << "Enter b: # \n";
	cin >> b;

	op = static_cast<OpType>(CharOp);

	double res;
	switch (op)

	{
	case '+':
		res = a + b;
		cout << a << " + " << b << " = " << res << endl;
		break;

	case '-':
		res = a - b;
		cout << a << " - " << b << " = " << res << endl;
		break;

	case '*':
		res = a * b;
		cout << a << " * " << b << " = " << res << endl;
		break;

	case '/':
		res = a / b;
		cout << a << " / " << b << " = " << res << endl;

	default:
		cout << "Invalid operation entered!" << endl;

	}
}