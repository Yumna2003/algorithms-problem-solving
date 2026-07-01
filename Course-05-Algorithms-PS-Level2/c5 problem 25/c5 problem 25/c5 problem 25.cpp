// c5 problem 25.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
int RandomNumber(int From, int To)
{
    int Num = rand() % (To - From + 1) + From;
    return Num;
}
void FillArrayWithRandomNumber(int Array[], int ArraySize)
{
    for (int i = 0;i < ArraySize;i++)
    {
        Array[i] = RandomNumber(1, 100);
    }
}
void PrintArrayWithRandomNumber(int Array[], int ArraySize)
{
    for (int i = 0;i < ArraySize;i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}
int MinArrayNumber(int Array[], int ArraySize)
{
    int MinNumber = Array[0];
    for (int i = 0;i < ArraySize;i++)
    {
        if (MinNumber > Array[ i])
        {
            MinNumber = Array[i];
        }
    }
    return MinNumber;
}
int main()
{
    int Array[100];
    srand((unsigned)time(NULL));
    int ArraySize = ReadPositiveNumber("enter how many number you want to generate ?");
    FillArrayWithRandomNumber(Array, ArraySize);
    cout << "array elemnts :";PrintArrayWithRandomNumber(Array, ArraySize);
    cout << "\n min number is : " << MinArrayNumber(Array, ArraySize);
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
