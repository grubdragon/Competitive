/*input
2
4
1111
5
10001
*/
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N;
		long long int c=0;
		char W;
		cin>>N;
		for(int j=0;j<N;j++){
			cin>>W;
			if(W=='1'){
				c++;
			}
		}
		cout<<(c*(c+1))/2<<"\n";
	}
	return 0;
}