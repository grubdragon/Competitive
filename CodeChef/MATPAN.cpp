#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	int prices[26];
	for(int i=0;i<T;i++){
		for(int i=0;i<26;i++)
			cin>>prices[i];
		string K;
		cin>>K;
		map<char,int> m;
		for(int i=0;i<K.length();i++){
			m[K[i]]++;
		}
		int sum=0;
		for(char x='a';x<='z';x++){
			if(m[x]==0)sum+=prices[(x-'a')];
		}
		cout<<sum+"\n";
	}
}