#include <iostream>
#include <climits>
using namespace std;

int set[6];

int main() {
    // 여기에 코드를 작성해주세요.

    int total = 0;

    for(int i=0; i<6; i++) {
        cin >> set[i];
        total += set[i];
    }

    int ans = INT_MAX;

    for(int i=0; i<6; i++) {

        for(int j=i+1; j<6; j++) {

            for(int k=0; k<6; k++) {

                for(int l=k+1; l<6; l++) {

                    if(k==i || k == j || l == i || l == j) continue;
                    
                    int team1 = set[i] + set[j];
                    int team2 = set[k] + set[l];
                    int team3 = total - team1 - team2;

                    int maxdiff = max(abs(team1 - team2), max(abs(team2 - team3), abs(team3 - team1)));

                    ans = min(ans, maxdiff);


                }

            }

        }

    }
    
    cout << ans;

    return 0;
}