#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    char ch;cin>>ch;
	    switch(ch){
	        case 'B': cout<<"BattleShip"<<endl; break;
	        case 'b': cout<<"BattleShip"<<endl; break;
	        case 'c': cout<<"Cruiser"<<endl; break;
	        case 'C': cout<<"Cruiser"<<endl; break;
	        case 'D': cout<<"Destroyer"<<endl; break;
	        case 'd': cout<<"Destroyer"<<endl; break;
	        case 'F': cout<<"Frigate"<<endl; break;
	        case 'f': cout<<"Frigate"<<endl; break;
	    }
	}
	return 0;
}
