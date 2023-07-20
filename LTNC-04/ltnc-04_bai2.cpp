#include <bits/stdc++.h>
using namespace std;

int equalizeArray(int n, int a[]){
    int same;
    int cnt=0;
    for(int i=0; i<n; i++){
        if(a[i]==a[i+1]){
            same=a[i];
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i] != same){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }       
    cout << equalizeArray(n, a[]);
    return 0;
}

