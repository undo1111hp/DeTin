#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    getline(cin, a);
    for(int i = 0; i<= a.size(); i++){
        for(int j = i+1; j <= a.size(); j++){
            if(a[i] == a[j]){
                a.erase(a.begin() + j);
                i = 0;
                j = i + 1;
            }
        }
    }
    cout << a.size();
    return 0;
}
