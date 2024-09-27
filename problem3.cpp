#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    int a,b;
    cin >> a >> b;
    for(int i=1; i<=n; ++i){
        int ss = 0;
        int num = i;
        while(num !=0){
            ss += num %10;
            num /= 10;
        }
        if(ss>=a && ss<=b) sum+=i;
    }
    cout << sum;
    return 0;
}
