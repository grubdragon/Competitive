/*input 
3
3 3
1 2 3
2 2 2
1 1 1
3 3
1 2 3
3 -1 1
2 -1 2
3 3
1 2 3
-1 1 5
1 2 4
*/
#include<iostream>
#include<set>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	//sys.exit(0);
	for(int i=0;i<T;i++){
		int N,M;
		cin>>N>>M;
		int A[N][M];
		set<int> s;
		for(int n=0;n<N;n++){
			for(int m=0;m<M;m++){
				cin>>A[n][m];
			}
		}
		for (int n = 0; n < N; ++n){
			for (int m = 0; m < M; ++m){
				if(A[n][m]==-1 || s.find(A[n][m])!=s.end())
					continue;
				for (int x = max(0,n-1); x <= min(N-1,n+1); ++x){
					for (int y = max(0,m-1); y <= min(M-1,m+1); ++y){
						if(x!=n||y!=m){
							if(A[n][m]==A[x][y]){
								s.insert(A[n][m]);
								goto out;
							}
						}
					}	
				}
				out:;
			}
		}

		cout<<s.size()<<"\n";
	}
}