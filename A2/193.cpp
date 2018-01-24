/*input
3
abac
abc
zzz
*/
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	int T;
	cin>>T;
	string K;
	for(int i=0;i<T;i++){
		cin>>K;
		map<char,int> m;
		int max=0;
		char maxchar=K[0];
		for(int j=0;j<K.size();j++){
			m[K[j]]++;
		}

		for(char j='a';j<='z';j++){
			if(m[j]>max){
				max=m[j];
				maxchar=j;
			}
		}
		cout<<max<<" "<<maxchar<<endl;
	}
}