#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T,N;
	cin>>T;
	long long int A[21];
	A[0]=1;
	for(int j=1;j<20;j++){
		A[j]=A[j-1]*j;
	}
	A[20]=A[19]*2;

	for(int i=0;i<T;i++){
		cin>>N;
		cout<<A[N]<<(N==20?"0":"")<<endl;
	}
	return 0;
}