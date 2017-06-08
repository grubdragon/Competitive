#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int T;cin>>T;
	for(int q=0;q<T;q++){
		int N;cin>>N;
		map<int,int> m;
		for(int i=0;i<N;i++){
			int x,y;
			cin>>x>>y;
			m[x]+=1;
			m[y]-=1;
		}
		int people=0,max=0;
		for(auto it=m.begin();it!=m.end();it++){
			people+=it->second;
			if(people>max)max=people;
		}
		cout<<max<<"\n";		
	}
	return 0;
}