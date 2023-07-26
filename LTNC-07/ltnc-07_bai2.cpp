#include <bits/stdc++.h>
using namespace std;

int n=4, k=3, a[100], ok;

void ktao(){
	for(int i=1; i<=k; i++){
		a[i]=1;
	}
}

void sinh(){
	int i=k;
	while(i>=1 && a[i]==n){
		i--;
	}
	if(i==0) ok=0;
	else{
		a[i]+=1;
		if(i<k){
			for(int j=i+1; j<=k; j++){
				a[j]=1;
			}
		}
	}
}

int main(){
	ok=1;
	ktao();
	while(ok){
		for(int i=1; i<=k; i++){
			if( a[i]==1 ) cout << "a";
			else if( a[i]==2 ) cout << "b";
			else if( a[i]==3 ) cout << "c";
			else cout << "d";
		}
		cout << endl;
		sinh();
	}
}
