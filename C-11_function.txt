#include <bits/stdc++.h>
using namespace std;
int main(){
    intt n;
    cin >> n;
    int res = 0;
    while(n >= 10){
        intt temp = n;
        while(temp%5 == 0){
            temp /= 5;
            res++;
        }
        n -= 10;
    }
    cout << res;
}