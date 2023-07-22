#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n; 
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int a, b;
    cin >> a >> b;
    arr.erase( arr.begin()+k-1 );
    //test
    // for(int i=0; i<n-1; i++){
    //     cout << arr[i] << " ";
    // }
    arr.erase( arr.begin()+a-1, arr.begin()+b-1 );
    cout << n-1-b+a << endl;
    for(int i=0; i<n-1-(b-a); i++){
        cout << arr[i] << " ";
    }
    return 0;
}

