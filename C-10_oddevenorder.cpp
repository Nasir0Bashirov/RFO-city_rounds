#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+1],cnt = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        cnt += a[i]%2;
    }
    int res = 0;
    for(int i=1;i<=cnt;i++){
        if(a[i]%2 == 0){
            res++;
        }
    }
    cout << res;
}