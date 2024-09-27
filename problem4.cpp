#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin >> n >> x;
    if(n<=2){
        cout << 1;
        return 0;
    }
    int etaj = 1;
    int sum=2;
    while(true){
        sum +=x;
        etaj++;
        if(sum>=n) break;
    }
    cout << etaj;
    return 0;
}
