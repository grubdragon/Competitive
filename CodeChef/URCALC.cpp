/*input
5
3
*
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int a,b;
	char op;
	cin>>a>>b>>op;
	double x=0;
	switch(op){
	case '+':x=a+b;break;
	case '-':x=a-b;break;
	case '*':x=a*b;break;
	case '/':x=a*1.0/b;break;
	}
	cout << fixed << setprecision(6);
	cout << x;
	return 0;
} 