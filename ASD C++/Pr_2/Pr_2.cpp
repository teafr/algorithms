// Pr_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Pr_2\n";

    //1 task
    int const SIZE = 19;
    int X[SIZE] = { 34,7,8,23,7,3,-1,-43,0,3,-2,94,3,0,-2,1,-34,2,1 };
    int Y[SIZE]{}, M, count = 0;

    cout << "M: ";
    cin >> M;

    for (int i = 0; i < SIZE; i++)
    {
        if (abs(X[i]) > M)
        {
            Y[count] = X[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++)
        cout << Y[i] << " ";
    cout << endl;

    //2 task
    for (int i = 0; i < SIZE; i++)
    {
        cout << X[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (X[i] < 0)
        {
            X[i] = abs(X[i]);
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << X[i] << " ";
    }
    //3 task
    int banknotes[] = { 1000, 500,  200, 100, 50, 20, 10, 5, 2, 1 }, sum;

    cout << "\n\nSum: ";
    cin >> sum;

    for (int i = 0; i < size(banknotes); i++)
    {
        for (; sum >= banknotes[i]; sum -= banknotes[i])
        {
            cout << "You've got " << banknotes[i] << " banknote." << endl;
        }
    }

    //4 task
    int arr1[] = { 4,6,2 }, arr2[] = { 2,3,1,0 };
    int const newSIZE = size(arr1) + size(arr2);
    int newArr[newSIZE]{};

    for (int i = 0; i < size(arr1); i++)
    {
        newArr[i] = arr1[i];
    }
    for (int i = size(arr1), j = 0; i < newSIZE; i++, j++)
    {
        newArr[i] = arr2[j];
    }

    for (int i = 1; i < newSIZE; i++)
    {
        if (newArr[i - 1] > newArr[i])
        {
            for (int j = i; ; j--)
            {
                if (newArr[j] < newArr[j - 1])
                {
                    int box = newArr[j];
                    newArr[j] = newArr[j - 1];
                    newArr[j - 1] = box;
                }
                else
                    break;
            }
        }
    }

    for (int i = 0; i < newSIZE; i++)
    {
        cout << newArr[i] << "\t";
    }

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
