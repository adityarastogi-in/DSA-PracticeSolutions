#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,c=0; cin>>n>>k;
    while(n--){
        int a; cin>>a;
        if(a%k==0)c++;
    }
    cout<<c<<endl;
}