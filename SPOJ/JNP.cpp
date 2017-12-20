#include <iostream>
#include <stack>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N;
		cin>>N;
		int A[N];
		bool isDecreasing=true;
		int m=0;
		cin>>A[0];
		for(int j=1;j<N;j++){
			cin>>A[j];
			if(A[j]>A[j-1]){
				isDecreasing=false;
				m=j-1;
			}
		}
		if(isDecreasing){
			cout<<-1<<endl;
		}
		else{
			
		}
	}
	return 0;
}