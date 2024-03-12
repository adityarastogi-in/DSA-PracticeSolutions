#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int l,r,c=0; cin>>l>>r;
	    for (int i=l;i<=r;i++){
	        int r=i%10;
	        if (r==2||r==3||r==9)c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
