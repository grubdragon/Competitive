#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N,K,W,c=0;
		cin>>N>>K;
		for(int j=0;j<N;j++){
			cin>>W;
			if((W+K)%7==0)
				c++;
		}
		cout<<c<<"\n";
	}
	return 0;
}