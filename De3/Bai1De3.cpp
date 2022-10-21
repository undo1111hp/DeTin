#include <bits/stdc++.h>

using namespace std;

bool doixung(string s){
	int a = s.size();
	int t;
		for(int i = 0; i < a/2; i++){
		for(int j = a - i; j > a/2; j-- ){
			if(s[i] != s[j]){
				return 0;
			}
		}
		return true;
	}
}

int main(){
	string s;
	getline(cin, s);
	if(doixung(s) == true){
		cout << "Correct";
	}
	return 0;
}
