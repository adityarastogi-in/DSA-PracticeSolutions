#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x; float y;
    cin>>x>>y;
    cout.precision(2);
    if(x%5==0 && (y-x-0.50)>=0){
        y-=x+0.50;cout<<fixed<<y<<endl;
    }
    else{
        cout<<fixed<<y<<endl;
    }
}