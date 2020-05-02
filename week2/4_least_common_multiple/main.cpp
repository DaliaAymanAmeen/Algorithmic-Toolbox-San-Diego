#include <iostream>
using namespace std;

unsigned long long LCM (unsigned long long a, unsigned long long b ,unsigned long long i ,unsigned long long save) {
    if (b%a == 0) return b;
    unsigned long long temp;
    temp = save*i;
    i++;
    return LCM (a,temp,i , save);

}

int main() {
  unsigned long long  a, b;
  unsigned long long int i = 2;
  cin >> a >> b;
  cout << LCM(a, b,i ,b);
  return 0;
}
