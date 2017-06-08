#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m;cin>>m;
	int a[m];
	int total_students=0;
	for(int i=0;i<m;i++){
		cin>>a[i];
		total_students+=a[i];
	}
	int x,y,sum=0;
	cin>>x>>y;
	for(int i=0;i<m;i++){
		int sum2=total_students-sum;
		if(sum>=x&&sum<=y&&sum2>=x&&sum2<=y){
			cout<<i+1;
			return 0;
		}
		sum+=a[i];
	}
	cout<<0;
}