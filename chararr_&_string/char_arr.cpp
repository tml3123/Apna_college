
#include <bits/stdc++.h> // Include the correct header for strlen

using namespace std;

int main()
{
    char arr[50] = {'c', 'o', 'd', 'e', '\0'};
    char sentance[30];

    cout << strlen(arr); // This will print the length of the string

    // input
    char word[30];
    cout << endl;

    cin >> word;

    cout << "your word was:" << word << endl; // it ignored the word after spaces
    cout << "your word length was:" << strlen(word) << endl;

    // if we use
    

    cin.getline(sentance, 30,'/');

    cout << "your sentence was:" << sentance << endl; 
    cout << "your sentence length was:" << strlen(sentance) << endl;


    return 0;
}