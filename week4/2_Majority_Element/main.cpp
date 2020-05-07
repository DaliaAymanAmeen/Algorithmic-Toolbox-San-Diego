#include <algorithm>
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <map>

using std::vector;

int main() {
    int n;
    std::cin >> n;
    vector<int> nums(n);
    for (size_t i = 0; i < nums.size(); ++i)
        std::cin >> nums[i];

    std::map <int, int> mymap;
    for (int i = 0 ; i <nums.size() ; i++)
    mymap[nums[i]]++; 

    for (auto i=mymap.begin() ; i!=mymap.end(); i++)
        if (i->second > nums.size()/2 ) {std::cout<<"1"; return 0;}

    std::cout<<"0";
}
