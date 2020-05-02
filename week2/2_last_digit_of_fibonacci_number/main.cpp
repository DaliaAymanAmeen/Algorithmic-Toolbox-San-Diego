#include <iostream>
using namespace std;

int main()
{
    unsigned long long int x=1;
    unsigned long long int y=1;
    unsigned long long int temp;
    int num;
    cin>>num;
    if (num==0) { cout<<"0"; return 0;}
    if (num==1) { cout<<"1"; return 0;}

    for (int i=0 ; i<num-2 ; i++)
    {
        temp = y;
        y =(x + y)%10;
        x = temp;

    }

    cout<<y;

    return 0;
}

