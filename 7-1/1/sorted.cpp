#include <iostream>
#include "sorted.h"
#include <algorithm>

using namespace std;

SortedArray::SortedArray(){
    vector<int> numbers_;
}
SortedArray::~SortedArray(){}


void SortedArray::AddNumber(int num)
{
    numbers_.push_back(num);
    return;
}
vector<int> SortedArray::GetSortedAscending(){
    sort(numbers_.begin(), numbers_.end());
    return numbers_;
}
vector<int> SortedArray::GetSortedDescending(){
    sort(numbers_.begin(), numbers_.end(), greater<int>());
    return numbers_;
}
int SortedArray::GetMax(){
    return *(max_element(numbers_.begin(), numbers_.end()));
}
int SortedArray::GetMin(){
    return *(min_element(numbers_.begin(), numbers_.end()));
}
