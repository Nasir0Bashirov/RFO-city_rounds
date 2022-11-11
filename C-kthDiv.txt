#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int>a;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            a.push_back(i);
            a.push_back(n/i);
        }
    }
    if(a.size() < k){
        cout << -1;
    }
    else{
        sort(a.begin(),a.end());
        cout << a[k-1];
    }
}