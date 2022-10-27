#include <bits/stdc++.h>

using namespace std;

int check(string s){
    int temp = 0;
    int res;
    int i = 0;
    if (i < s.size() / 2){
    	for(int j = s.size() - 1; j > s.size() / 2; j--){
            if (s[i] == s[j]){
                    for (int a = i; a <= ((j - i) / 2); i++){
                        for (int b = j; b >= ((j - i) / 2); j--){
                            if (s[a] == s[b]){
                                temp++;
                             }
                        }
					}
                 }
			res = temp;                                                                                             
            }
            i++;
        }
        return res;
    }

int main(){
       int n;
       cin >> n;
       string s;
       for (int i = 0; i < n; i++){
           cin >> s[i];
       }
       cout << check(s);
       return 0;    
}

