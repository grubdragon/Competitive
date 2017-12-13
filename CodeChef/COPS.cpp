#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int x,y,M;
		cin>>M>>x>>y;
		int A[M];
		int k=x*y;
		int Police[100] = {};
		for(int j=0;j<M;j++){
			cin>>A[j];
			int a= max(A[j]-x*y-1,0);
			int b= min(99,A[j]+x*y-1);
			for(int k=a;k<=b;k++){
				Police[k]=1;
			}
		}
		int c=0;
		for(int k=0;k<=99;k++){
			if(Police[k]==0){
				c++;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}