#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int a[1000];
	getline(cin, s);
	int temp = 0;
	for (int i = 0; i < s.size(); i++){
		if(s[i] != ' '){
			temp++;
		}
		if(s[i] == ' '){
			a[i] = temp;
			temp = 0;
		}
		if(i == s.size() - 1){
			a[i] = temp;
			temp = 0;
		}
	}
	for (int i = 0; i < s.size(); i++){
		if(s[i] != ' '){
			cout << s[i];
		}
		if(s[i] == ' '){
			cout << ":" << a[i] << endl;
		}
		if(i == s.size() - 1){
			cout << ":" << a[i] << endl;
		}
    }
}
