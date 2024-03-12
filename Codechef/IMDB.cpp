#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,x,t=0; cin>>n>>x;
	    int s[n],r[n];
	    for(int j=0;j<n;j++){
	        cin>>s[j]>>r[j];
	        if(s[j]<=x && t<r[j]){t=r[j];}
	    }
	    cout<<t<<endl;
	}
	return 0;
}
