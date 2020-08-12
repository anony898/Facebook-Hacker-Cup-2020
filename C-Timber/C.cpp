#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

void solve() {
    int n;
    scanf("%d", &n);
    vector<pair<int,int> > in(n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &in[i].first, &in[i].second);
    }
    sort(in.begin(), in.end());
    
    map<int, int> dp;
    int answer = 0;
    for(pair<int, int> p : in) {
        int pos = p.first;
        int height = p.second;

        dp[pos+height] = max(dp[pos+height], dp[pos]+height);
        dp[pos] = max(dp[pos], dp[pos-height]+height);
        answer = max({answer, dp[pos], dp[pos+height]});
    }
    printf("%d", answer);
}

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        printf("Case #%d: ", i);
        solve();
        puts("");
    }
    return 0;
}
