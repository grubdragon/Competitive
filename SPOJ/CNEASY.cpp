#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N;
		cin>>N;
		double a[2*N];
		for(int j=0;j<N;j++){
			string k;
			cin>>k;
			double m;
			cin>>m;
			a[j]=m;
		}
		sort(a,a+N);
		for(int j=0;j<N;j++){
			a[j+N]=a[j]+360.00;
		}
		double min=360;
		for(int j=0;j<=N;j++){
			double k = a[N+j-1]-a[j];
			if(k<min)
				min=k;
		}
		cout<<ceil(12*min)<<"\n";
	}
}	x