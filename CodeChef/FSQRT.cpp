#include<iostream>
#include<math.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T,X,Y;
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>X;
		Y = sqrt(X);
		cout<<Y<<endl;
	}
	return 0;
}