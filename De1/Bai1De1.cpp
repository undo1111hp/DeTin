#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	char k;
	cin >> k >> s;
	int temp = 0;
	int index = 0;
	for (int i = 0; i < s.size(); i++){
		if(s[i] == k){
			index++;
		}
		if(index > temp){
			temp = index;
		}
		if(s[i] != k){
			index = 0;
		}
	}
	for (int i = 0; i < temp; i++){
		cout << k;
	}
	return 0;
}
