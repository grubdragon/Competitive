#include <iostream>
#include <set>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	set<int> A,B,C;
	for (int i = 0; i < a; ++i)
	{
		int x;
		cin>>x;
		A.insert(x);
	}
	for (int i = 0; i < b; ++i)
	{
		int x;
		cin>>x;
		B.insert(x);
	}
	for (int i = 0; i < c; ++i)
	{
		int x;
		cin>>x;
		C.insert(x);
	}
	
	return 0;
}