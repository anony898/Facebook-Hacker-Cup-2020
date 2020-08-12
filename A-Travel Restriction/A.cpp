#include<stdio.h>
#define MAX 1002

void test_case() {
    int n;
    char in[MAX];
    char out[MAX];

    scanf("%d", &n);
    scanf("%s", in);
    scanf("%s", out);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            bool flag = true;
            if(i <= j) {
                for(int k = i; k < j; k++) {
                    if(in[k+1] != 'Y' || out[k] != 'Y') flag = false;
                }
            }
            else {
                for(int k = i; k > j; k--) {
                    if(in[k-1] != 'Y' || out[k] != 'Y') flag = false;
                }
            }
            flag ? printf("Y") : printf("N");
        }
        printf("\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        printf("Case #%d:\n", i);
        test_case();
    }
    return 0;
}