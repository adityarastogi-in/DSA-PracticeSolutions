#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t; cin>>t;
   while(t--){
       int n; cin>>n;
       int l=n%10;
       while(n>9){
           n=n/10;
       }
       cout<<n+l<<endl;
   }
return 0;
}