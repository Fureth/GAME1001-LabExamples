//Brief introduction to programming loops (again)
#include <iostream>
using namespace std;

int main()
{
	//int count = 1;
	int userInput = 0;
	int sum = 0;

	//Sentinal Value (-1)

	while (true) // Infinite loop
	{
		//cout << "Hello ";
		//count ++; //count = count + 1;
		cout << "Enter a positive integer that will be added together. Type -1 to exit " << endl << endl;
		cin >> userInput;
		if (userInput == -1)
		{
			break; // immediately breaks out of the current loop or method it currently is executing
		}
		sum += userInput; // sum = sum + user
		cout << "Your added value is: " << sum << endl;
	}

	cout << "\nThat's All!\n";

	system("pause");

	return 0;
}