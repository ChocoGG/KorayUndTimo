# include <iostream>
using namespace std;
int main()
{
	char o;
	float num1, num2;
	int end;

	cout << "Enter operator either + or - or * or /: ";
	cin >> o;
	cout << "Enter two operands: ";
	cin >> num1 >> num2;
	switch (o) {
	case '+':
		cout << num1 + num2;
		cin >> end;
		break;
	case '-':
		cout << num1 - num2;
		cin >> end;
		break;
	case '*':
		cout << num1*num2;
		cin >> end;
		break;
	case '/':
		cout << num1 / num2;
		cin >> end;
		break;
	default:
		/* If operator is other than +, -, * or /, error message is shown */
		cout << "Error! operator is not correct";
		break;
	}
	return 0;
}
