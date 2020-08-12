#include<stdio.h>
#include<math.h>
#define MAX 100002

void solve() {
    int n;
    char words[MAX];

    scanf("%d", &n);
    scanf("%s", words);
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(words[i] == 'A') count++;
        else count--;
    }

    (abs(count) == 1) ? printf("Y") : printf("N");
    puts("");

}

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        printf("Case #%d:\n", i);
        solve();
    }
    return 0;
}