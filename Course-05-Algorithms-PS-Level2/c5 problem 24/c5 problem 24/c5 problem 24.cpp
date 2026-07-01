// c5 problem 24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int GenerateRandomNumber(int From, int To)
{
    int Num = rand() % (To - From + 1) + From;
    return Num;
}
void FillArrayWithRandomNumber(int Array[], int ArraySize)
{
    for (int i = 0;i < ArraySize;i++)
    {
        Array[i] = GenerateRandomNumber(1, 100);
    }
}
void PrintArrayElemnts(int Array[], int ArraySize)
{
    for (int i = 0;i < ArraySize;i++)
    {
        cout << Array[i] << " ";
    }
}
int FindArrayMaxNumber(int Array[], int ArraySize)
{
    int MaxNumber = Array[0];
    for (int i = 0;i < ArraySize;i++)
    {
        if ( MaxNumber<Array[i])
        {
            MaxNumber = Array[i];
        }
        

    }
    return MaxNumber;
}

int main()
{
    srand((unsigned)time(NULL));
    int Array[100];
    int ArraySize = ReadPositiveNumber("enter how many number to generate?");
    FillArrayWithRandomNumber(Array, ArraySize);
    cout << "the original array elements :"; PrintArrayElemnts(Array, ArraySize);
    cout << "\nthe max number is :" << FindArrayMaxNumber(Array, ArraySize);
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
