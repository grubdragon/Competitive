#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;cin>>T;
	for(int q=0;q<T;q++){
		bool cont=false;
		int N;cin>>N;
		int a[N];
		for(int i=0;i<N;i++)
		cin>>a[i];
		for(int i=0;i<=N-2;i++){
			if(a[i]>a[i+1]){
				cout<<"NO\n";
				cont=true;
				break;
			}
			a[i+1]-=a[i];
			a[i]=0;
		}
		if(cont)
			continue;
		if(a[N-1]==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}
	return 0;
}