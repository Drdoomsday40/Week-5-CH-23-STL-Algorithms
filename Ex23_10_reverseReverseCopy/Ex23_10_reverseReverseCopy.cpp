// FILE:            Ex23_10_reverseReverseCopy.cpp
// Written by:      Lucien Maurice
// Email:           luciencmaurice@gmail.com

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

template <typename BidirectionalIterator>
void reverse(BidirectionalIterator beg,
    BidirectionalIterator end);

template <typename BidirectionalIterator>
void reverse(BidirectionalIterator beg, BidirectionalIterator end);

template <typename BidirectionalIterator>
void reverse(BidirectionalIterator* beg, BidirectionalIterator* end)
{
    BidirectionalIterator* first = beg;
    BidirectionalIterator* last = end - 1;
    int count = (end - beg) / 2;
    int i = 0;
    while (i <= count)
    {
        BidirectionalIterator temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
        i++;
        cout << temp << endl;
    }
}

template <typename BidirectionalIterator, typename OutputIterator>
OutputIterator reverse_copy(BidirectionalIterator beg,
    BidirectionalIterator end, OutputIterator targetPosition);

template <typename BidirectionalIterator, typename OutputIterator>
OutputIterator reverse_copy(BidirectionalIterator beg,
    BidirectionalIterator end, OutputIterator targetPosition)
{
    for (BidirectionalIterator last = end - 1; last >= beg; last--, targetPosition++)
    {
        *targetPosition = *last;
    }

    return targetPosition;
}

int main()
{
    double values[] = { 143, 2, 3, 55, 41, 4, 777 };

    ostream_iterator<double> output(cout, " ");
    cout << "Initial contents of array values: ";
    copy(values, values + 7, output);

    cout << "\n";
    reverse(values, values + 7);
    cout << "\nAfter reversing array values: ";
    copy(values, values + 7, output);

    vector<double> v(10);

    reverse_copy(values, values + 7, v.begin());
    cout << "\nAfter reverse_copy of array values: ";
    copy(v.begin(), v.end(), output);

    return 0;
}
