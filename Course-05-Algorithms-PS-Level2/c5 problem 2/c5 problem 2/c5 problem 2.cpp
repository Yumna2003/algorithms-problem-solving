// c5 problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

# include <iostream>
using namespace std;
enum enIsNumPrime{Prime=1,NotPrime};
int ReadPostivieNumber(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
enIsNumPrime TestNumber(int Number)
{
    int HalfNum = round(Number / 2);
    for (int i = 2;i <= HalfNum;i++)
    {
        if (Number % i == 0)
        
            return enIsNumPrime::NotPrime;
            
        
        
    }

            return enIsNumPrime::Prime;
}
void PrintPrimeNumber(int Number )
{
    cout << "prime number from 1 to" << Number << endl;

    
        for (int i = 1;i <= Number;i++)
        {
            if (TestNumber(i) == enIsNumPrime ::Prime)
                cout << i << endl;
            
        }

}

int main()
{
     PrintPrimeNumber(ReadPostivieNumber("enter postive number"));
    
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
