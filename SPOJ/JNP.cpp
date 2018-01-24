/*input
3 
120 11 400
10213 312 10
10 3 450
*/
#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int A,B,C;
		cin>>A>>B>>C;
		if((A>=B && B>=C)||(C>=B && B>=A)){
			cout<<B<<endl;
		}
		else if((C>=A && A>=B)||(B>=A && A>=C)){
			cout<<A<<endl;
		}
		else{
			cout<<C<<endl;	
		}	
	}
	return 0;
}