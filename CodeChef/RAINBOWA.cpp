/*input
3
19
1 2 3 4 4 5 6 6 6 7 6 6 6 5 4 4 3 2 1
14
1 2 3 4 5 6 7 6 5 4 3 2 1 1
13
1 2 3 4 5 6 8 6 5 4 3 2 1
*/
#include<iostream>
using namespace std;
void process(){
	int N;
	cin>>N;
	int A[N],B[7]={0};
	bool kill=false;
	/* input */
	for(int j=0;j<N;j++){
		cin>>A[j];
		/* check if within range */
		if( A[j] > 7 || A[j] < 1){	
			kill=true;
		}
		else{
			B[A[j]-1]++;
		}
	}
	if(N<13 || kill){	
		cout<<"no\n";
		return;
	}

	/* check if all present */
	for(int x=0;x<7;x++){
		if(B[x]==0){
			cout<<"no\n";
			return;
		}
	}
	
	int X =(N-3)/2,y;
	for(int j=0;j<=X;j++){
		/* check if palin*/
		if(A[j]!=A[N-1-j]){
			cout<<"no\n";
			return;
		}
		y = A[j+1]-A[j];
		if(y!=0&&y!=1){
			cout<<"no\n";
			return;
		}
	}
	if(A[N/2] != A[N-1-N/2]){
		cout<<"no\n";
		return;
	}
	cout<<"yes\n";
}

int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		process();
	}
	return 0;
}	