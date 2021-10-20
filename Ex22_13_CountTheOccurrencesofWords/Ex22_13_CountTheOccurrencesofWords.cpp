// FILE:            Ex22_13_CountTheOccurrencesofWords
// Written by:      Lucien Maurice
// Email:           luciencmaurice@gmail.com

#include <iostream>
#include <string>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    ifstream input;

    string fname;
    cout << "Enter a file name: ";
    cin >> fname;

    input.open(fname.c_str());

    if (input.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    map<string, int> map1;
    map<string, int>::iterator p;
    string word;

    while (!input.eof())
    {
        input >> word;
        p = map1.find(word);
        if (p == map1.end()) // word not in map1
        {
            map1.insert(map<string, int>::value_type(word, 1));
        }
        else
        {
            int count = p->second;
            count++;
            map1.erase(word);
            map1.insert(map<string, int>::value_type(word, count));
        }
    }

    for (p = map1.begin(); p != map1.end(); p++)
        cout << "number of occurrences for " << p->first << " is " << p->second << endl;

    return 0;
}
