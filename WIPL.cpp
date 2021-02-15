#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n, k;
vector<int> hts;
const int max_num = 110000;

//int dp[max_num][4005];
unordered_map<int, unordered_map<int, int>> dp;

int cal(int i, int t1, int t2) {
    if(i == n) {
        if(t1 >= k && t2 >= k) {
            return dp[t1][t2] = 0;
        }
        else { 
            return dp[t1][t2] = max_num;
        }
    }

    if(dp.find(t1) != dp.end()) {
        if(dp[t1].find(t2) != dp[t1].end())
            return dp[t1][t2];
    }

    if(t1 >= k && t2 >= k)
        return dp[t1][t2] = 0;
    else if(t1 >= k)
        return dp[t1][t2] = 1 + cal(i+1, t1, t2 + hts[i]);
    else if(t2 >= k)
        return dp[t1][t2] = 1 + cal(i+1, t1 + hts[i], t2);
    else
        return dp[t1][t2] = 1 + min(cal(i+1, t1 + hts[i], t2), cal(i+1, t1, t2 + hts[i]));
}

void solve() {
   // memset(dp, -1, sizeof(dp));
    dp.clear();
    cin >> n >> k;
    hts.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> hts[i];
    }

    sort(hts.begin(), hts.end(), greater<int>());

    int ans = cal(0,0,0);
    if(ans >= max_num) {
        cout << -1 << '\n';
    }
    else {
        cout << ans << '\n';
    }
}

int main() 
{
    IOS;

    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
