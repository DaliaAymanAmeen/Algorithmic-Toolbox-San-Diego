/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm> 
using namespace std;
#include <vector>
int main()
{
    int n;
    cin >>n;
    vector <long long int> arr;
    arr.resize(n);
    long long int max_pair;
    for (int i=0; i<n ;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    max_pair = arr[n-1] * arr[n-2];
    cout<<max_pair;

    return 0;
}
