#include <iostream>

using namespace std;

long long int GCD (long long int a , long long int b)
{
    if (b==0) return a;
    int temp;
    temp = a % b;
    return GCD (b , temp);

}

int main()
{

    long long int x,y,z;
    cin>>x>>y;
    z = GCD (x, y);
    cout<<z;


    return 0;
}
