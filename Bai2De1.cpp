#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int sodao = 0;
	int temp;
	for (int i = n; i <= m; i++){
		while (i > 0){
			temp = i % 10;
			sodao = sodao * 10 + temp;
			i = i / 10;
			for(int test = 2; test < sodao; test++){
				if (sodao <= 2){
				    continue;
			    }
				if(sodao % test == 0){
					continue;
				}
				else{
					cout << sodao;
					continue;
				}
			}
		}
	}
	return 0;
}
