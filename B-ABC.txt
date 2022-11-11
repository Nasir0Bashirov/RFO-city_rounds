#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    int res = 0;
    for(int i=1;i<s.size()-1;i++){
        if(s[i]-1 == 'A' and s[i] == 'B' and s[i+1] == 'C'){
            res++;
        }
    }
    cout << res;
}