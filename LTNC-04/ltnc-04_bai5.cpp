#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    long long sa=0, sb=0;
    int a[n], b[n+1];
    // nhap 2 mang
    for(int i=0; i<n; i++){
        cin >> a[i];
        sa+=a[i];
    }
    for(int i=0; i<n+1;i++){
        cin >> b[i];
        sb+=b[i];
    }
    cout << sb - sa;
    return 0;  
}

