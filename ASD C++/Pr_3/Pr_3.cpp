// Pr_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Pr_3\n";

	int const SIZE = 10;
	int arr[SIZE];
	int consoleNumber, index = -1, countOfEvenNumbers = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << " element: ";
		cin >> arr[i];

		if (arr[i] % 2 == 0)
			countOfEvenNumbers++;
	}

	cout << "\nPut number: ";
	cin >> consoleNumber;

	for (int i = 0; i < SIZE; i++)
	{
		if (consoleNumber == arr[i])
		{
			index = i;
			break;
		}
	}

	if (index > -1)
	{
		cout << "Element " << arr[index] << " in index " << index << endl;
	}
	else
	{
		cout << "There no element with this number." << endl;
	}
	cout << "Count of even numbers: " << countOfEvenNumbers << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
