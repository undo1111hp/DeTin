#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int res = 0;
	int temp = 0;
	for (int i = n; i <= m; i++){
		while (i = n){
	    for (int a = 1; a < i; a++){
	        if (i % a == 0){
	     		res = res + a;
			 }
		}
    }
		for (int b = 0; b < i; b++){
			if (res >= n && res <= m){
		 	if (res % b == 0){
		 		temp = temp + b;
			    }
		    }
		}
		if (temp == i){
		    cout << temp << res;
		}
	}
		 return 0; 
	}

