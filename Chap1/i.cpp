#include<iostream>

using namespace std;

int main(){
	
	int num, sum, digit1, digit5;
	
	cin>>num;
	
	digit1 = num / 1000;
	digit5 = num % 10;
	
	sum = digit1 + digit5;
	
	cout<<sum;
	
	return 0;
	
}
