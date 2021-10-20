// FILE:            Ex22_3_OccurrencesOfTheValue
// Written by:      Lucien Maurice
// Email:           luciencmaurice@gmail.com

#include <iostream>
#include <vector>
using namespace std;

template<typename ElementType, typename ContainerType>
int countElement(ContainerType& container, const ElementType& value)
{
    int count = 0;
    for (int i = 0; i < container.size(); i++)
        if (container[i] == value)
            count++;

    return count;
}

int main()
{
    int list1[] = { 3, 7, 7, 8, 2, 1, 7, 6 };
    vector<int> intVector(list1, list1 + 8);
    cout << "The maximum value in list1 is: " << (countElement<int, vector<int> >(intVector, 7));
    return 0;
}
