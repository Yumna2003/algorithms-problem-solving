// c5 problem 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
using namespace std;


enum enCharType { SmallLetter=1,CaptilLetter,SpecialLetter,Digit };

int RandomGenerator(int From, int To)
{
    int RandomNumber = rand() % (To-From + 1) + From;
    return RandomNumber;
}

char PrintRandomCharcter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
    {
        return char(RandomGenerator(97, 122));
        break;
    }

    case enCharType::CaptilLetter:
    {
        return char(RandomGenerator(65, 90));
        break;
    }
    case enCharType::SpecialLetter:
    {
        return char(RandomGenerator(33, 47));
        break;
    }
    case enCharType::Digit:
        return char (RandomGenerator(48, 57));
        break;
    }
    return 0;
}
int main()
{
    srand((unsigned)time(NULL));


   
    cout << PrintRandomCharcter(enCharType::SmallLetter) << endl;
    cout <<  PrintRandomCharcter(enCharType::CaptilLetter)<< endl;
    cout <<PrintRandomCharcter(enCharType::SpecialLetter)  << endl;
    cout << PrintRandomCharcter(enCharType::Digit);
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
