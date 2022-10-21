#include <bits/stdc++.h>

using namespace std;

bool sto(int a){
	if (a <= 1){
		return false;
	}
	for(int i = 2; i < a; i++){
		if(a % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n, m; 
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		if(sto(i) == true){
			if(n % i == 0 && m % i == 0){
				cout << i << " ";
			}
		}
	}
	return 0;
}
