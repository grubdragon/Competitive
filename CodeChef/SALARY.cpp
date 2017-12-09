#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N,W;
		cin>>N;
		int total=0;
		int min=10000;
		for(int j=0;j<N;j++){
			cin>>W;
			total+=W;
			if(W<min)
				min=W;
		}
		cout<<(total - N*min)<<"\n";
	}
	return 0;
}