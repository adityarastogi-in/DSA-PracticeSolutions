#include <bits/stdc++.h>
using namespace std;

int main() {
	    int n; cin>>n;
	    int w=0,l=0;
	    int p1=0,p2=0;
	    while(n--){
	        int a,b; cin>>a>>b;
	        p1+=a; p2+=b;     
	        int x=abs(p1-p2);
	        if(x>l){  
	            l=x; 
	            p1>p2?w=1:w=2;
	        }
	    }
	    cout<<w<<" "<<l<<endl;
	return 0;
}
