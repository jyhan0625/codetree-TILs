#include <iostream>
using namespace std;



int set[51][51];
int sick[51];
int cure[51];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, d, s;
    cin >> n >> m >> d >> s;

    // n : 사람 수
    // m : 치즈 수
    // d : 치즈 먹은 기록 수
    // s : 아픈 기록 수

    for(int i=0; i<d; i++) {

        int num, cheese, wheneat;
        cin >> num >> cheese >> wheneat;

        set[num][cheese] = wheneat;

    }

    for(int i=0; i<s; i++) {

        int num, whensick;
        cin >> num >> whensick;
        
        sick[num] = whensick;
    }

    //1.빵 중에서 아픈 사람들이 모두 먹은 빵을 선택
    //2. 그 빵을 먹은 모든 사람 수를 카운드

    for(int i=1; i<=m; i++) { // 빵을 하나씩 골라서

        bool trig = true;

        for(int j=1; j<=n; j++) {

            if (sick[j] != 0) { // 아픈 사람을 찾고

                if (set[j][i] == 0 || set[j][i] >= sick[j]) trig = false; // 그 사람들이 모두 아프기 전에 먹었었는지 확인

            }

        }

        if (trig) { // 용의 치즈 찾음 : i

            for(int j=1; j<=n; j++) { // 모든 사람을 체크

                if (set[j][i] != 0) cure[j] = 1;
            }
        }

    }

    int ans = 0;

    for(int i=1; i<=50; i++) if (cure[i]) ans++;

    cout << ans;

    return 0;
}