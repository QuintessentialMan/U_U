#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vInt;



int main(){
	
	int mod3[3] = {0};
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		mod3[x % 3] ++;
	}
	int res = mod3[0] * (mod3[0] - 1) / 2 + mod3[1] * mod3[2];
	
	cout << res;
	 
	
	return 0;
}


