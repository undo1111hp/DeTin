#include <bits/stdc++.h>

using namespace std;

int sodao(int a){
	int temp;
	int res = 0;
		while(a > 0){
			temp = a % 10;
			res = res * 10 + temp;
			a = a / 10;
		}
	return res;
}
bool sto(int n){
    if (n < 2){
        return false;
	}
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
	int n, m;
	int res = 0;
	cin >> n >> m;
	for(int i = n; i <= m; i++){
	    if(sto(sodao(i)) == true){
           cout << i << endl;
       }
    }
    return 0;
}
