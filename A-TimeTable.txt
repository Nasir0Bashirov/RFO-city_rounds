#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    if(x >= 1 and y >= 1 and x <= 9 and y <= 9){
        cout << x*y;
    }
    else{
        cout << -1;
    }
}