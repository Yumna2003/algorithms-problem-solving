

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
void PrintInvertedLettersPattern(int Number)
{
   

    for (int i=65+Number-1;i>=65;i--)
    {
        
        for (int a=1;a<=Number-((65+Number-1)-i);a++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}
int main()
{
    PrintInvertedLettersPattern(ReadPostiveNumber("enter number"));
}


