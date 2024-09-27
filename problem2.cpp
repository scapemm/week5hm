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
        string a = to_string(n);
        reverse(a.begin(),a.end());
        for(int i=0; i<a.size(); ++i){
            s+= a[i];
            if(i!=a.size()-1) s+= ' ';
        }
        ans.push_back(s);
    }
    for(int i=0; i<ans.size(); ++i){
        cout << ans[i] << "\n";
    }
    return 0;
}
