#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define MAXN 1000
using namespace std;
int n, m, q, tot;
int pos[MAXN], hash[MAXN];
int main() {
    scanf("%d%d", &n, &q);
    for(int i = 1; i <= n; i++) scanf("%d", &pos[i]);
    sort(pos+1, pos+1+n);
    for(int i = 1; i <= q; i++) {
        int x, y; scanf("%d%d", &x, &y);
        cout << upper_bound(pos+1, pos+n+1, y)-lower_bound(pos+1, pos+n+1, x) << ¡®\n¡¯;
    }
    return 0;  
}

