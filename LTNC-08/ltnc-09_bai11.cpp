#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string bin_num = "";
    while (n){
        int x = n%2;
        if(x==1){
            bin_num+="1";
        }
        else bin_num+="0";
        n/=2;
    }
    int cnt=0, m=0;
    for(int i=bin_num.size()-1; i>=0; i--){
        if(bin_num[i] == '1'){
            cnt++;
        }
        else cnt=0;
        m=max(cnt, m);
    }
    cout << m;
    //cout << bin_num;
}

