// c5 problem 17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
string ReadWords(string Message)
{
    string Words = "";
    cout << Message << endl;
    cin >> Words;
    return Words;
}
bool PrintAllFromAAAToZZZ(const string& Password)
{
    string Word = "";
    int Trails = 1;
    for (int i = 65;i <= 90;i++)
    {
        for (int x = 65;x <= 90;x++)
        {
            for (int y = 65;y <= 90;y++)
            {
                Word = Word + char(i);
                Word = Word + char(x);
                Word = Word + char(y);

                cout << "trail [" << Trails << "] :" << Word << endl;

                if (Word == Password)
                {
                    cout << "password is " << Word << endl;
                    cout << "found after " << Trails << " trails \n";
                    return true;
                }
                Word = "";
                Trails++;
            }
        }
        
    }
return false;
}


int main()
{
    cout<< PrintAllFromAAAToZZZ(ReadWords("enter 3 letters password"));
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
