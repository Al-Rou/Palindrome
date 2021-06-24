#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter your word: " << endl;
    string inputWord;
    cin >> inputWord;
    for (int i = 0; i < inputWord.size()/2; i++)
    {
        if (inputWord[i] != inputWord[inputWord.size()-1-i])
        {
            cout << "The word is NOT a palindrome!" << endl;
            return 0;
        }
    }
    cout << "The word is a palindrome!" << endl;
    return 0;
}
