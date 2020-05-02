#include <iostream>
#include <vector>
#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
    std::map <double , int> mymap;
    for (int i=0;i<weights.size();i++)
    {
        mymap[(double)values[i]/(double)weights[i]] = i;

    }

         double a;

         for (auto i = mymap.rbegin(); i != mymap.rend(); ++i)
         {
                 if (capacity<=0)   break;
                 a = min(weights[i->second] , capacity);
                 value += a * (i->first);
                 weights[i->second] -= a;
                 capacity -= a;
         }


  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  //std::cout.precision(4);
  std::cout <<fixed<< setprecision(4)<<optimal_value << std::endl;
  return 0;
}
