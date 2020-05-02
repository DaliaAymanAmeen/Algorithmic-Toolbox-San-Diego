#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    int counter = 0;  //num_of_refills
    int t = 0;
    int current = 0;
    int mini_index = 0;
    if (dist <= tank) return 0;
    while ( current + tank  < dist && t < stops.size() )
    {
        for (int i = stops.size()-1 ; i>=mini_index ; i--)
        {
            if (stops[i] - current <= tank )
            {
                current = stops[i];
                counter ++;
                mini_index = i + 1;  
                break ;
            }

        }
        t ++;

    }

    if (current + tank < dist) return -1; //it's impossible to reach the dist.
    else return counter;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
