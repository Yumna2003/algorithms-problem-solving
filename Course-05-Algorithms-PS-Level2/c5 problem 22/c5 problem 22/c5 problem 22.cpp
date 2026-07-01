// c5 problem 22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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

void StoreArrayElemnts(int Array[] ,int NumberOfElemnts)
{
    
   
    for (int i = 0;i < NumberOfElemnts;i++)
    {
        
        cout << "enter array elemnts [" << i + 1 << "] :";
        cin >> Array[i];
    }
    
}


void PrintArray(int Array[], int NumberOfElemnts)
{
    for (int i = 0;i < NumberOfElemnts;i++)
    {
        cout <<  Array[i];
    }
}
void CheckRepeatedNumber(int Array[],int NumberOfElemts)
{
    int NumberToCheck = ReadPositiveNumber("enter a number to check");
    int Counter = 0;
    for (int i = 0;i < NumberOfElemts;i++)
    {   
        if (NumberToCheck == Array[i])
        {
            Counter++;
            
        }
        
        
    }
    cout << NumberToCheck << " is repeated " << Counter << " times\n";
}



int main()
{
    int Array[100];
    int NumberOfElemnts = ReadPositiveNumber("how many elemnts you want to store");
    StoreArrayElemnts(Array, NumberOfElemnts);
    cout << "original array :"; PrintArray(Array, NumberOfElemnts);
    cout << endl;
    CheckRepeatedNumber(Array, NumberOfElemnts);
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
