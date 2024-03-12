#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,c=0; cin>>n;
	    while(n--){
	        int x; cin>>x;
	        c^=x;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
