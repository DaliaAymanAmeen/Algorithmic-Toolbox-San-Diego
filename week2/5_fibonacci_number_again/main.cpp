#include <iostream>
using namespace std;

unsigned long long int get_len (unsigned long long int seq)
{
    unsigned long long int x=1;
    unsigned long long int y=1;
    unsigned long long int temp;
    unsigned long long int current , prev ;
    prev = 1;
    for (int i=0; i<seq*seq ;i++)
    {
        temp = y;
        y = (x + y)% seq ;
        x = temp;
        current = y ;
        if( prev == 0 && current == 1) return i+2;
        prev = current ;
    }

}

unsigned long long int fib (unsigned long long int n ,unsigned long long int given )
{
    unsigned long long int x=1;
    unsigned long long int y=1;
    unsigned long long int temp;
    if (n==0) { return 0;}
    if (n==1) { return 1;}
    for (int i=0 ; i<n-2 ; i++)
    {
        temp = y;
        y = (x + y)%given;
        x = temp;

    }

    return y;
}

int main()
{
    unsigned long long int x, y, len , result , new_fib , fib_res ;
    cin>>x>>y;
    len = get_len(y) ;
    new_fib = x % len ;
    fib_res = fib (new_fib , y);
    cout << fib_res ;


    return 0;
}

