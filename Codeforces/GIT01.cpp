/*input
2
4 5
RGRGR
GRGRG
RGRGR
GRGRG
2 3
RRG
GGR
*/
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N,M;cin>>N>>M;
		int c1=0,c2=0,k;
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				char x;cin>>x;
				int k=(i+j)%2;
				if(k==0&&x=='R'){
					c2+=5;
				}
				else if(k==0&&x=='G'){
					c1+=3;
				}
				else if(k==1&&x=='R'){
					c1+=5;
				}
				else if(k==1&&x=='G'){
					c2+=3;
				}
			}
		}
		cout<<min(c1,c2)<<endl;
	}
	return 0;
}