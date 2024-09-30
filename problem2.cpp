
#include <bits/stdc++.h>
using namespace std;
int main() {
    int tt;
    cin >> tt;
    vector<string> ans;
    while(tt--){
        string s="";
        int n;
        cin >> n;
        while(n!=0){
            cout << n%10 << ' ';
            n/=10;
        }
        cout << "\n";
    }
    //for(int i=0; i<ans.size(); ++i){
     //   cout << ans[i] << "\n";
    //}
    return 0;
}
