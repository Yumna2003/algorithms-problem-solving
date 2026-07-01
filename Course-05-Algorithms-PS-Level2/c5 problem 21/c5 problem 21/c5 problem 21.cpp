// c5 problem 21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType{SmallLetter=1,CaptailLetter,SpechialCharcter,Digit};
int Random(int From,int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}
char PrintRandomCharcter(enCharType Char)
{
    switch (Char)
    {
    case enCharType::SmallLetter:
    { return (char)Random(97, 122); }
    case enCharType::CaptailLetter:
    { return (char)Random(65, 90); }
    case enCharType::SpechialCharcter:
    { return (char)Random(33, 47); }
    case enCharType::Digit:
    { return (char)Random(48, 57); }

    }
    return 0;
}
int ReadPostiveNumber(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
string MakeGenerateWord(enCharType Char, short WordLength)
{
    string Word = "";
     
    for (int i = 1;i <= WordLength;i++)
    {
        Word=Word + PrintRandomCharcter(Char);
    }
    return Word;
}
string MakeGenerateKey()
{
    string Key = "";
    Key = MakeGenerateWord(enCharType::CaptailLetter, 4) + "-";
    Key=Key+ MakeGenerateWord(enCharType::CaptailLetter, 4) + "-";
    Key = Key + MakeGenerateWord(enCharType::CaptailLetter, 4) + "-";
    Key = Key + MakeGenerateWord(enCharType::CaptailLetter, 4) + "-";
    return Key;

}
void PrintGeneratedKey(int Counter)
{
    

    for (int i = 1;i <= Counter;i++)
    {   
        
        cout << "key [" << i << "] :" << MakeGenerateKey() << endl; 
        
    }
   
}

int main()
{
    srand((unsigned)time(NULL));

     PrintGeneratedKey(ReadPostiveNumber("how many key do you want to generate"));
}


