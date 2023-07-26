#include<bits/stdc++.h>
using namespace std;

int bin_search(int a[], int x, int l, int r){
	if(l<=r){
		int m=(l+r)/2;
		if( a[m]==x ) return m;
		if( x > a[m] ){
			return bin_search(a, x, m+1, r);
		}
		if( x < a[m] ){
			return bin_search(a, x, l, m-1);
		}
	}
	return -1;	
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n, less<int>());
	int x;
	cin >> x;
	int l=0, r=n-1;
	if( bin_search(a, x, l, r) != -1 ) {
		cout << "Found !";
	} 
	else{
		cout << "Not Found !";
	}
	return 0;
}
