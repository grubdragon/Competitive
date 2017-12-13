/*input
2
3 2
piygu ezyfo rzotm
1 piygu
6 tefwz tefwz piygu ezyfo tefwz piygu
4 1
kssdy tjzhy ljzym kegqz
4 kegqz kegqz kegqz vxvyj
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N,K,L;
		cin>>N>>K;
		string A[N];
		string X;
		for(int j=0;j<N;j++){
			cin>>A[j];
		}
		bool M[N]={false};
		for(int j=0;j<K;j++){
			cin>>L;
			for(int k=0;k<L;k++){
				cin>>X;
				for(int j=0;j<N;j++){
					if(X==A[j]){
						M[j]=true;
						break;
					}
				}
			}
		}
		for(int j=0;j<N;j++){
			cout<<(M[j]?"YES ":"NO ");
		}
		cout<<"\n";
	}
	return 0;
}