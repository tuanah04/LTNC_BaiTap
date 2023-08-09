#include <bits/stdc++.h>
using namespace std;
int powerSum(int x, int n, int num){
    int val = x - pow(num, n);
    if(val == 0) return 1;
    if(val < 0) return 0;
    return powerSum(val, n, num + 1) + powerSum(x, n, num + 1);
}

int main(){
    int x, n;
    cin >> x >> n;
    int res = powerSum(x, n, 1);
    cout << res << endl;
    return 0;
}
