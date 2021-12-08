#include<iostream>

using namespace std;

int main(){
	
	float km, m, cm, inch, feet;
	
	cin>>km;
	
	m = 1000 * km;
	
	cm = 100 * m;
	
	inch = cm/2.54;
	
	feet = inch/12;
	
	cout<<m<<"\n"<<cm<<"\n"<<inch<<"\n"<<feet;
	
	return 0;
}
