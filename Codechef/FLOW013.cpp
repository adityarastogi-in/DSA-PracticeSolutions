#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int a,b,c; cin>>a>>b>>c;
	    string res=(a+b+c==180 && (a=b=c)!=0)?"YES":"NO";
	    cout<<res<<endl;
	}
	return 0;
}
