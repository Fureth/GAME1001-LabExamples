//Prefix and postfix increments (also works with decrements)
#include <iostream>
using namespace std;

int main()
{
	int num = 4;

	//prefix and postfix
	cout << num		<< "  ";	//num printed is base number
	cout << num++	<< "  ";	//postfix - fixes after command execution. num printed is num before fixing via increment. "cout << num++ << num++" would make the second num effected by the postfix of the first num
	cout << num		<< "  ";	//displays postfixed number
	cout << ++num	<< "  ";	//prefix - fixes before. num printed is num after fixing via increment

	system("pause");

	return 0;
}