#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[1000];
	int n, k, temp;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
n++;
a[n-1] = k;
	for(int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
		if(a[i] > a[j]){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		
	}
}
    for(int i = 0; i < n; i++){
    	cout << a[i] << " ";
	}
	return 0;
}
