/*input
2
3
1
2 1
1 2 3
4 
1 
1 2 
4 1 2
2 3 1 1 
*/
#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N;
		cin>>N;
		int dp[N][N];
		for(int m=0;m<N;m++){
			for(int n=0;n<=m;n++){
				cin>>dp[m][n];
			}
		}
		for(int m=N-2;m>=0;m--){
			for(int n=0;n<=m;n++){
				dp[m][n]+=max(dp[m+1][n],dp[m+1][n+1]);
			}
		}
		cout<<dp[0][0]<<endl;
	}
	return 0;
}