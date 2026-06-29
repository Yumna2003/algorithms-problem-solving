// c5 problem 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadPostiveNumber(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int CalculateDigitFrequncy(int Number, short Digit)
{
    int Reminder = 0, Frequncy = 0;
    while (Number > 0)
    {
        Reminder = Number % 10;
        if (Reminder == Digit)
        {
            Frequncy++;
        }
        Number = Number / 10;
    }
    return Frequncy;
}
int main()
{
    int Number = ReadPostiveNumber("enter the main number");
    int Digit = ReadPostiveNumber("enter a digit");
    cout << "the frequncy of digit " << Digit << " = " << CalculateDigitFrequncy(Number, Digit);
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
