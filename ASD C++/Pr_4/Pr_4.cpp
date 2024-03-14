// Pr_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
using namespace std;

void FillArray(int array[], int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
		array[i] = rand() % 10;
}
void PrintArray(int array[], int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
		cout << array[i] << "\t";
}

int main()
{
    cout << "Pr_4!\n";

	srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];
	int consoleNumber, index = -1;
	bool sortedByIncrease = true, sortedByDecrease = true;

	FillArray(arr, SIZE);
	PrintArray(arr, SIZE);

	cout << "\nPut number: ";
	cin >> consoleNumber;

	for (int i = 0; i < SIZE; i++)
	{
		if (consoleNumber == arr[i])
		{
			index = i;
			cout << "Element: " << arr[index] << ". Index: " << index << endl;
			break;
		}
	}

	if (index == -1)
		cout << "There no element with this number." << endl;

	for (int i = 0; i < SIZE - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			sortedByIncrease = false;
			break;
		}
	}
	for (int i = 0; i < SIZE - 1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			sortedByDecrease = false;
			break;
		}
	}

	if (sortedByIncrease)
		cout << "Array is sorted by increase." << endl;
	else
		cout << "Array isn't sorted by increase." << endl;

	if (sortedByDecrease)
		cout << "Array is sorted by decrease.\n" << endl;
	else
		cout << "Array isn't sorted by decrease.\n" << endl;

	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i - 1] > arr[i])
		{
			for (int j = i; ; j--)
			{
				if (arr[j] > arr[j - 1])
					break;
				else
				{
					int box = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = box;
				}
			}
		}
	}
	PrintArray(arr, SIZE);
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
