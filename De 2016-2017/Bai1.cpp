#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int temp = 0;
	for (int i = 0; i < s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'z'){
			temp++;
		}
	}
	cout << temp;
	return 0;
}
