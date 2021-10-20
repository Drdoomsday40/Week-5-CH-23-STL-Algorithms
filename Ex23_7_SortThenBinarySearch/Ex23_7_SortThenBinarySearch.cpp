// FILE:            Ex23_7_SortThenBinarySearch
// Written by:      Lucien Maurice
// Email:           luciencmaurice@gmail.com

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <set>
#include <list>
using namespace std;

bool lessThan2(double value)
{
    return value < 2;
}

bool greaterThan4(double value)
{
    return value > 4;
}

bool condition(double value)
{
    return value > 1.3;
}

int main()
{
    double values[] = { 2.4, 1.3, 2.4, 2.4, 4.5, 6.7, 4.5, 9.0 };

    ostream_iterator<double> output(cout, " ");
    cout << "Initial contents of Vector values: ";
    copy(values, values + 8, output);

    sort(values, values + 8);

    cout << "\nAfter sorting: ";
    copy(values, values + 8, output);

    cout << (binary_search(values, values + 8, 6.7) ?
        "\n6.7 appears in Vector values" : "\n6.7 does not appear in Vector values");

    cout << (binary_search(values, values + 8, 4.3) ?
        "\n4.3 appears in Vector values" : "\n4.3 does not appear in Vector values");

    return 0;
}

