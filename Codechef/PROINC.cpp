#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
	while(t--){
	    int x,y; cin>>x>>y;
	    if(x%100==0){
	        int cp=x-y;
	        int sp=x+(x/10);
	        cout<<sp-cp<<endl;
	    }
	}
	return 0;
}
