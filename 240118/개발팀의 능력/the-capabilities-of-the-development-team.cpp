#include <iostream>
#include <climits>
using namespace std;

int set[5];

int main() {
    // 여기에 코드를 작성해주세요.

    int total = 0;
    for(int i=0; i<5; i++) {

        cin >> set[i];
        total += set[i];

    }

    int ans = INT_MAX;
    bool trigger = false;

    for(int i=0; i<5; i++) {

        for(int j=i+1; j<5; j++) {

            for(int k=0; k<5; k++) {

                for(int l=k+1; l<5; l++) {

                    if (i == k || i == l || j == k || j == l) continue;

                    int team1 = set[i] + set[j];
                    int team2 = set[k] + set[l];
                    int team3 = total - team1 - team2;

                    if (team1 == team2 || team2 == team3 || team3 == team1) continue;
                    
                    trigger = true;
                    int maximum = max(team1, max(team2, team3));
                    int minimum = min(team1, min(team2, team3));
                    
                    ans = min(ans, maximum - minimum);

                }

            }

        }

    }

    if (trigger) cout << ans;
    else cout << -1;

    return 0;
}