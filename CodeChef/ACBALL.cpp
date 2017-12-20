#include<iostream>
using namespace std;
int main(){
int T;
cin>>T;
string X,Y,Z;
for(int i=0;i<T;i++){
cin>>X>>Y;
Z="";
for(int i=0;i<X.size();i++){
	if(X[i]==Y[i]){
		Z+=(X[i]=='B'?'W':'B');
	}
	else{
		Z+='B';
	}
}
cout<<Z<<endl;
}
return 0;
}