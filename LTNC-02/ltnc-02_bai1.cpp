#include <bits/stdc++.h>

using namespace std;

int findDigits(int n){
    int cnt = 0;
    int tmp = n;
    while(tmp){
        int a = tmp % 10;
        if(a!=0 && n%a==0){
            cnt++;
        }
        tmp/=10;
    }
    return cnt;
}

int main(){
    int t;
    cin >> t;
    vector <int> a(t);
    for(int i=0; i<t; i++){
        cin >> a[i];
    }
    for(int i=0; i<t; i++){
        cout << findDigits(a[i]) << endl;
    }
    return 0;
}

