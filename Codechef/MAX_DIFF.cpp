#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
	while (t--){
	    int n,s,ad=0,d=0; cin>>n>>s;
	    for(int i=0;i<=n;i++){
	        int t1,t2;
	        if(i>s)break;
	        else t1=i;t2=s-i;
	        d=t1-t2;
	    }
	    if(d>ad){ad=d;cout<<ad<<endl;}
	    else cout<<ad<<endl;
	}
	return 0;
}
