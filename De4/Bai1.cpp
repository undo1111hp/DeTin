#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int temp;
	for (int i = 0; i < s.size() - 1; i++){
		for (int j = i + 1; j < s.size(); j++){
			if (s[j] >= 'A' && s[j] <='z'){
				if(s[i] >= '0' && s[i] <= '9'){
					temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
			}
		}
	}
	for (int i = 0; i < s.size() - 1; i++){
		for (int j = i + 1; j < s.size(); j++){
			if (s[j] >= '0' && s[j] <= '9'){
				if (s[i] >= '0' && s[i] <= '9'){
					if (s[i] > s[j]){
					temp = s[i];
					s[i] = s[j];
					s[j] = temp;
					}
				}
			}
	}
}

	cout << s;
	return 0;
}
