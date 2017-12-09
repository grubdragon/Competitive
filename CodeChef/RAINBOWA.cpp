#include<iostream>
using namespace std;
void process(){
	int N;
	cin>>N;
	for(int j=0;j<N;j++){
		cin>>A[j];
		if(A[j]>7 || A[j] < 1)
			cout<<"no\n";
			return;
	}
	int start=1,currcount=0;;
	for(int j=0;j<=N/2;j++){
		if(A[j]!=A[N-j]){
			cout<<"no\n";
			return;
		}
		
	}
	cout<<c<<"\n";
}
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){

	}
	return 0;
}	