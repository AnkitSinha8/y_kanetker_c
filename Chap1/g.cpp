#include<iostream>

using namespace std;

int main(){
	
	int num,digit1,digit2,digit3,digit4,digit5,sum;
	
	cin>>num;
	
	digit5 = num % 10;
	num = num/10;
	
	digit4 = num % 10;
	num = num/10;

	digit3 = num % 10;
	num = num/10;

	digit2 = num % 10;
	num = num/10;

	digit1 = num % 10;
	
	sum = digit5 + digit4 + digit3 + digit2 + digit1;
	
	cout<<sum;
	
	return 0;

}
