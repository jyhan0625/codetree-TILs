#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>
using namespace std;

int set[100];

int main() {

    int n;
    cin >> n;

    for(int i=0; i<n; i++) cin >> set[i];

    int Min = INT_MAX;

    for (int i = 0; i<n; i++) {

        int sum = 0;

        for (int j = 0; j <n; j++) {

            sum += set[j] * abs(i - j);


        }

        Min = min(sum, Min);

    }

    cout << Min;

    return 0;



}