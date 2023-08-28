#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vInt;



int main(){

	int y_min = INT_MAX, y_max = INT_MIN, x_min = INT_MAX, x_max = INT_MIN;

	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int x,y; cin >> x >> y;
 		y_min = min(y, y_min);
	 	y_max = max(y,y_max);
	 	x_min = min(x, x_min);
	 	x_max = max(x, x_max);
	}
	int edge = max(x_max - x_min ,y_max - y_min);
	int area = edge*edge;
	cout << area;

	return 0;
}


