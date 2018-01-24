/*input
3
5
# #### ### abc ##
4
## ### ## #####
4
## ##### # xyz
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T,N;
	string X;
	cin>>T;
	//sys.exit(0);
	for(int i=0;i<T;i++){
		cin>>N;
		vector<string> pre;
		vector<string> post;
		string word="";
		int j=0;
		while(j<N){
			cin>>X;
			j++;
			if(X[0]=='#'){
				pre.push_back(X);
			}
			else{
				word=X;
				break;
			}
		}
		while(j<N){
			cin>>X;
			j++;
			cout<<X<<" ";
		}

		if(word!=""){
			cout<<word<<" ";
		}

		for(j=0;j<pre.size();j++){
			cout<<pre[j]<<" ";
		}
		cout<<"\n";
	}
}