/*input
3
2 4 4
3 2 3 4
4 3 15 9 6
*/
#include<iostream>
#include<math.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T,N,fgcd;
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>N;
		int A[N];
		cin>>A[0];
		fgcd=A[0];
		for(int j=1;j<N;j++){
			cin>>A[j];
			fgcd=gcd(fgcd,A[j]);
		}
		for(int j=0;j<N;j++){
			cout<<(A[j]/fgcd)<<" ";
		}
		cout<<endl;
	}
	return 0;
}