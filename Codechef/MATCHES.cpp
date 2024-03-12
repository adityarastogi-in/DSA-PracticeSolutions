#include <iostream>
using namespace std;

int main() {
    int arr[10]={6,2,5,5,4,5,6,3,7,6};
	int t; cin>>t;
	while (t--){
	    int a,b; cin>>a>>b;
	    int c=0,s=0; s=a+b;
	    while(s!=0){
	        int r=s%10;
	        c+=arr[r];
	        s/=10;
	    }
	    cout<<c<<endl;
	    c=0;
	}
	return 0;
}