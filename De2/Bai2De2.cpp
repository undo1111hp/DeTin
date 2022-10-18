#include <bits/stdc++.h>

using namespace std;

bool sto(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n/2; i++){
		for(int j = n; j > n/2; j--){
			if(i + j == n){
			if(sto(i) == true && sto(j) == true){
					cout << i << " " << j << endl;
				}
			}
		}
	}
}
