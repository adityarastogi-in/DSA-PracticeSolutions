#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,a,b,c,cc=0; cin>>n>>a>>b>>c;
	    for(int i=0;i<n;i++){
	        if(a>=1 && b>=1){cc++;a--;b--;}
	        else if(b>=1 && c>=1){cc++;b--;c--;}
	        else break;
	    }
	    string ans=(cc>=n)?"YES":"NO";
	    cout<<ans<<endl;cc=0;
	}
	return 0;
}
