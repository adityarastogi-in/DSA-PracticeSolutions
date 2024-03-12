#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int i,c=0; cin>>i;
	    while(i>0){
	        if(i%10==4)c++;
	        i/=10;
	    }
	    cout<<c<<endl;
	}
	return 0;
}