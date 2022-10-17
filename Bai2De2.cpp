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
		for(int j = n; i > n/2; j--){
			if(sto(i) == true && sto(j) == true){
				if(i + j == n){
					cout << i << ";" << j << endl;
				}
			}
		}
	}
}
