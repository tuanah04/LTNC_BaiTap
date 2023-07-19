#include <bits/stdc++.h>
using namespace std;

int pageCount(int n, int p) {
    int cnt1=0, cnt2=0;
    if(n%2==1){
        for(int i=0; i<n; i+=2){
            if( p==i || p==i+1 ){
                break;
            }
            cnt1++;
        }
        for(int i=n; i>0; i-=2){
        	if( p==i || p==i-1 ){
        		break;
        	}
        	cnt2++;
        }
    }else{
    	for(int i=0; i<n; i+=2){
    		if(p==i || p==i+1){
    			break;
    		}
    		cnt1++;
    	}
    	for(int i=n; i>0; i-=2){
    		if(p==i || p==i+1){
    			break;
    		}
    		cnt2++;
    	}
    }
    if(cnt1 > cnt2){
       	return cnt2;
    }
    else return cnt1;
}

int main(){
    int n, p;
    cin >> n >> p;
    cout << pageCount(n, p);
}

