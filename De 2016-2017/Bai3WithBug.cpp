#include<iostream>

using namespace std;

int main() {
	int a[1000];
	int n, m;
	cin >> n >> m;
    string s;
    string c;
    for (int i = 0; i < n; i++){
    	cin >> s[i];
	}
	for (int i = 0; i < m; i++){
		cin >> c[i];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			a[j] = 0;
			string index = s[i] + c[j];
		    int ind = stoi(index);
		    if(ind % 3 == 0){
			    a[j]++;
		    }
		}
		cout << a[j] << endl;
	}
    return 0;
}
