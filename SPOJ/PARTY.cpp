#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
vector<vector<int>> v;
int main() {
	while(true){
		int budget,n;
		scanf("%d %d",&budget,&n);
		if(budget==0&&n==0)break;
		int fun[n]
		int cost[n];
		int p=0,f=0;
		for(int i=0;i<n;i++){
			scanf("%d %d",&cost[i],&fun[i]);
		}
		vector<vector<int>> v(budget+1,vector<int>(n+1));
		for(int i=0;i<=n;i++){
			for(int k=0;k<=budget;k++){
				if (i*k==0)
					v[k][i]=0;
				else if(cost[i-1]<=budget&&(fun[i-1]+v[budget-cost[i-1]][i-1])>v[k][i-1])
					v[k][i]=fun[i-1]+v[budget-cost[i-1]][i-1];
				else
					v[k][i]=v[k][i-1];
			}
		}
		int maxfun=v[budget][n];
		int i=budget;
		for (;i>=0;i--){
			if (maxfun>K[i][n])break;
		}
		printf("%d %d\n", ++i, K[N][W]);
	}
	return 0;
}	