#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,c=0; cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]>=1000)c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
