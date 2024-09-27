#include <bits/stdc++.h>
using namespace std;
int main() {
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        string a = to_string(n);
        reverse(a.begin(),a.end());
        for(int i=0; i<a.size(); ++i){
            cout << a[i];
            if(i!=a.size()-1) cout << ' ';
        }
        cout << "\n";
    }
    return 0;
}
