#include<iostream>

using namespace std;

int main(){
	
	int cash, denomination_100, denomination_10, denomination_50;
	
	cin>>cash;
	
	denomination_100 = cash/100;
	denomination_50 = cash/50;
	denomination_10 = cash/10;
	
	cout<<denomination_100<<" "<<denomination_50<<" "<<denomination_10;
	
	return 0;
	
}
