// tim loh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
using namespace std;

int Sum(int a, int b)
{
    return a + b;
}

int main()
{
    cout << "pr_1!\n";

    int N;
    int arrayOfNumbers[3];

    cout << "Write N number: ";
    cin >> N;

    cout << "Write three numbers: " << endl;

    for (int i = 0; i < size(arrayOfNumbers); i++)
    {
        cout << i + 1 << ": ";
        cin >> arrayOfNumbers[i];
    }

    //1 task
    for (int i = 0; i < size(arrayOfNumbers); i++)
    {
        if (arrayOfNumbers[i] > 0 && arrayOfNumbers[i] < N + 1)
        {
            cout << "Number " << i + 1 << " belong to interval.\n";
        }
    }

    //2 task
    int minNumber = arrayOfNumbers[0];
    int maxNumber = arrayOfNumbers[0];

    for (int i = 0; i < size(arrayOfNumbers); i++)
    {
        if (minNumber > arrayOfNumbers[i])
        {
            minNumber = arrayOfNumbers[i];
        }
        if (maxNumber < arrayOfNumbers[i])
        {
            maxNumber = arrayOfNumbers[i];
        }
    }
    cout << "Min number: " << minNumber << endl;
    cout << "Max number: " << maxNumber << endl;

    //3 task
    int n;
    double sum = 0, number = 0.5;

    cout << "N number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        sum += number;
        number *= 0.5;
    }
    cout << "Sum: " << sum << endl;

    //4 task
    int consoleNumber;
    int minDivider;

    cout << "Number: ";
    cin >> consoleNumber;

    int i = 2;
    while (i < consoleNumber+1)
    {
        if (consoleNumber % i == 0)
        {
            minDivider = i;
            break;
        }
        i++;
    }
    cout << "Min divider: " << minDivider << endl;

    //5 task
    int number1 = 0, number2 = 1;

    cout << "N number: ";
    cin >> N;

    for (int i = 1; i < N; i++)
    {
        if (number1 < number2)
        {
            number1 = Sum(number1, number2);
        }
        else
        {
            number2 = Sum(number1, number2);
        }
    }

    int result = 0;

    if (number1 > number2)
    {
        result = number1;
    }
    else
    {
        result = number2;
    }
    cout << "Result: " << result;

    //6 task
    srand(time(NULL));

    int randomNumber = rand() % 20, guessNumber, count = 0;

    cout << "\nPut number from 0 to 20: ";
    
    while (true)
    {
        cin >> guessNumber;
        if (guessNumber > 20 || guessNumber < 0)
        {
            cout << "Incorrect value!" << endl;
        }
        else if (guessNumber < randomNumber)
        {
            cout << "It has to be bigger." << endl;
        }
        else if (guessNumber > randomNumber)
        {
            cout << "It has to be smaller." << endl;
        }
        else
        {
            count++;
            cout << "You guesed! There were " << count << " tries" << endl;
            break;
        }
        count++;
        cout << "Try again: ";
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
