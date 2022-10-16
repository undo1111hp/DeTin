#include <bits/stdc++.h>

using namespace std;

int day(int b){
	int a[1000];
	int so = 0;
	for(int i = 0; i < b; i++){
		cin >>  a[i];
		so = so * 10 + a[i];;
	}
	return so;
}

int main(){
	int n, m;
	cin >> n;
	int a = day(n);
	cin >> m;
	int b = day(m);
	int tong = a + b;
	string dapan = to_string(tong);
	for(int i = 0; i < dapan.size(); i++){
		cout << dapan[i] << " ";
	}
	return 0;
}
