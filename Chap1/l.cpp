#include<iostream>

using namespace std;

int main(){
	
	float selling_price, cost_price, profit, temp;
	
	cin>>selling_price>>profit;
	
	cost_price = (selling_price - profit) / 15;
	
	cout<<cost_price;
	
	return 0;
	
}
