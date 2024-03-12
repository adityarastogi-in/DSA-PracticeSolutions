#include <iostream>
using namespace std;

int main() {
	int n,o=0,e=0; cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
	    cin>>a[i];
	    if (a[i]%2==0){e++;}
	    else {o++;}
	}
	string s=(e>o)?"READY FOR BATTLE":"NOT READY";
	cout<<s;
	return 0;
}
