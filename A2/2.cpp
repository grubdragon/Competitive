#include<set>
#include<cmath>
#include<string>
#include<iostream>
using namespace std;
int main(){
	int T; cin>>T;
	for(int i=0;i<T;i++){
		string K;
		cin>>K;
		set<char> letters;
		int qcount=0;
		for(int i=0;i<K.length();i++){
			if(K[i]=='?')qcount++;
			else letters.add(K[i]);
		}
		cout<<pow(letters.size(),qcount)<<endl;
	}
}