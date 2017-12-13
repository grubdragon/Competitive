/*input
6
gaga
abcde
rotor
xyzxy
abbaab
ababc
*/
#include<iostream>
#include<string>
using namespace std;
void process(){
	string K;
	cin>>K;
	int l=K.size();
	int a[26]={0};
	int b[26]={0};

	for(int j=0;j<l/2;j++){
		char X=K[j],Y=K[l-1-j];
		a[X-'a']++;
		b[Y-'a']++;
	}

	for(int j=0;j<26;j++){
		if(a[j]!=b[j]){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		process();
	}
	return 0;
}