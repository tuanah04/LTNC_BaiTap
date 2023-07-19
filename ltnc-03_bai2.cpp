#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int l = n;
    int t=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<l-1; j++){
            cout << " ";
        }
        for(int j=0; j<t; j++){
            cout << "#";
        }
        cout << endl;
        l--;
        t++;
    } 
    return 0;
}

