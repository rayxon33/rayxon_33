#include <iostream>
#include <set>
using namespace std;
int main(){
	int n;
	cin>>n;
	set<int> a;  
	for (int i; i<n; ++i){
		int x;
		cin>>x;
		a.insert(x);
	}
	cout<<a.size()<<endl;
	
}
