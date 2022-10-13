#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	int a[1000];
	cin >> n;
	int tempn, tempm;
	for (int i = 0; i < n;i++){
		cin >> a[i];
		cout << a[i];
		tempn = a[i];
	}
	cin >> m;
		for (int i = 0; i < m;i++){
		cin >> a[i];
		cout << a[i];
		tempm = a[i];
	}
	cout << tempn + tempm;
	return 0;
}
