#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	string s1="START38", s2="LTIME108";
	while(t--){
	    int n,q1=0,q2=0; cin>>n;
	    string a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if (a[i]==s1){q1++;}
	        else if (a[i]==s2){q2++;}
	    }
	    cout<<q1<<" "<<q2<<endl;
	}
	return 0;
}
