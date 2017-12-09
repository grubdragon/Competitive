#include<iostream>
using namespace std;
void process(int pages_req,int N,int K){
	bool a=false;
	int P[N],C[N];
	for(int i=0;i<N;i++){
		cin>>P[i]>>C[i];
		if(pages_req<=P[i] && K>=C[i]){
			a=true;
		}
	}
	if(a)
		cout<<"LuckyChef\n";
	else
		cout<<"UnluckyChef\n";
	return;
}
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int X,Y,K,N;
		cin>>X>>Y>>K>>N;
		int pages_req=X-Y;
		process(pages_req,N,K);
	}
	return 0;
}