#include <bits/stdc++.h>
using namespace std;

bool devideArray(int n, int a[], int x){
    for(int i=0; i<n; i++){
        if( x%a[i]!=0 ) return false;
    }
    return true;
}

bool arrayDevide(int m, int b[], int x){
    for(int i=0; i<m; i++){
        if( b[i]%x!=0 ){
            return false;
        }
    }
    return true;
}
int getTotalX(int n, int a[], int m, int b[]){
    int cnt=0;
    for(int i=a[n-1]; i<=b[0]; i++){
        if(devideArray(n, a, i) && arrayDevide(m, b, i)){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    cout << getTotalX(n, a, m, b);
    return 0;
}
