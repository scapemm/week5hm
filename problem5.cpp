#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt=0;
    int i=1;
    while(cnt!=n){
        if(i%3!=0 && i%10!=3){
             cnt++;
            // cout << i << ' ';
        }
        
        if(cnt==n) break;
        i++;
    }
    cout << i;
    return 0;
}
