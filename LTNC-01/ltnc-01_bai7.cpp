#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    float duong = 0, am = 0, khong = 0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] > 0){
            duong++;
        } 
        else if(a[i] < 0){
            am++;
        }
        else khong++;
    }
    cout << fixed << setprecision(6) << float(duong/n) << endl
         << float(am/n) << endl
         << float(khong/n) << endl;
    
    
}

