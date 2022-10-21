#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[1000];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if (a[i] == a[j]){
				a[i] = a[i + 1];
                n--;
                i--;
				}
			}
		}
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
}
