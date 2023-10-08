#include<iostream>
using namespace std;

int main() {
	double num1, num2;
	char operation;

	cout << "Enter The Frist Name: ";
	cin >> num1;

	cout << "Enter The Second Name: ";
	cin >> num2;

	cout << "Enter The Operation: ";
	cin >> operation;

	switch (operation)
	{
	case '+':
		cout << num1 << '+' << num2 << '=' << (num1 + num2);
		break

	case '-':
		cout << num1 << '-' << num2 << '=' << (num1 - num2);
		break

	case '*':
		cout << num1 << '+' << num2 << '=' << (num1 * num2);
		break

	case '/':
		cout << num1 << '+' << num2 << '=' << (num1 / num2);
		break

	default:
		cout << "invaild operation!!";
		break;
	}

	return 0;
}