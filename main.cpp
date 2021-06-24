#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Prompt the user to enter their word
    cout << "Enter your word: " << endl;
    string inputWord;
    //Take the entered word in a string
    cin >> inputWord;
    //Use the symmetry of palindromes, in order to determine if the entered word is a palindrome
    for (int i = 0; i < inputWord.size()/2; i++)
    {
        if (inputWord[i] != inputWord[inputWord.size()-1-i])
        {
            //Here, the program has to end and there is no need for the loop to check further
            cout << "The word is NOT a palindrome!" << endl;
            return 0;
        }
    }
    //If the program comes out of the loop, it means the entered word is a palindrome
    cout << "The word is a palindrome!" << endl;
    return 0;
}
