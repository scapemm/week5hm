#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt=0;
    int k=n;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=k; j++){
            cout << j;
        }
        for(int s=0; s<cnt; s++) cout <<' ';
        for(int j=k; j>0; j--)cout << j;
        cout << "\n";
        k--;
        cnt++;
    }
    return 0;
}
