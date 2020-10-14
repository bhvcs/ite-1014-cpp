#pragma once
#include <vector>

using namespace std;


class SortedArray
{
public:
    SortedArray();
    ~SortedArray();

    bool compare(int a, int b);
    void AddNumber(int num);
    vector<int> GetSortedAscending();
    vector<int> GetSortedDescending();
    int GetMax();
    int GetMin();

private:
    vector<int> numbers_;
};

