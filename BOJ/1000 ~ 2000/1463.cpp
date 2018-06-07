#include <iostream>
using namespace std;

int min(int x,int y) {
	return x < y ? x : y;
}

int dp[1000001], n;

int main() {
	cin >> n;
    dp[1] = 0;	
	for(int i=2; i<=n; i++) {
		dp[i] = dp[i-1] + 1;
		if( i % 2 == 0 ) dp[i] = min(dp[i], dp[i/2]+1);
		if( i % 3 == 0 ) dp[i] = min(dp[i], dp[i/3]+1);
	}
	cout << dp[n] << endl;
	return 0;
}
	