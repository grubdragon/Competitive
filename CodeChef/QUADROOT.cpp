/*input
1
-8
15
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double a,b,c;
	cin>>a>>b>>c;
	double sqroot = sqrt(b*b - 4 * a * c);
	double x1 = (-b + sqroot)/(2*a);
	double x2 = (-b - sqroot)/(2*a);
	cout<<setprecision(6)<<fixed;
	cout<<x1<<"\n"<<x2;
	return 0;
}