#include <iostream>

int get_change(int m) {
    int n = 0;

    while (m>0)
    {
        if (m-10 >= 0) {m -= 10; n ++; }
        else if (m-5 >= 0 && m-10 <0 ) {m -= 5; n ++; }
        else {m -= 1; n ++; }
    }
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}


//Another solution

/*#include <iostream>

int get_change(int m) {
    int n = 0;

    n += m / 10;
    n += (m % 10) / 5;
    n += (m % 10) % 5 ;

  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}*/

