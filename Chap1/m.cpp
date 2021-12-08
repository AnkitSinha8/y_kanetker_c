#include<iostream>

using namespace std;

int main(){
	
	int num,digit1,digit2,digit3,digit4,digit5;
	
	cin>>num;
	
	digit1 = num % 10;
	num = num / 10;
	
	digit2 = num % 10;
	num = num / 10;
	
	digit3 = num % 10;
	num = num / 10;

	digit4 = num % 10;
	num = num / 10;

	digit5 = num % 10;
	

	digit1 = (digit1+1) % 10;
	digit2 = (digit2+1) % 10;
	digit3 = (digit3+1) % 10;
	digit4 = (digit4+1) % 10;
	digit5 = (digit5+1) % 10;

	cout<<digit5<<digit4<<digit3<<digit2<<digit1;
	
	return 0;
}
