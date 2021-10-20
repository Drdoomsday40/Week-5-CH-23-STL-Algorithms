// FILE:            Ex22_10_DisplayDuplicateWordsInAscendingOrder
// Written by:      Lucien Maurice
// Email:           luciencmaurice@gmail.com

#include <iostream>
#include <fstream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string fname;
    cout << "Enter a file name: ";
    cin >> fname;

    ifstream input(fname.c_str());

    multiset<string> s;
    string word;
    while (!input.eof())
    {
        input >> word;
        s.insert(word);
    }

    for (multiset<string>::iterator p = s.begin(); p != s.end(); p++)
    {
        cout << *p << " ";
    }

    return 0;
}
