#include<iostream>

using namespace std;

int main(){
	
	int num,rem,rev = 0;
	
	cin>>num;
	
	rem = num % 10;
	num = num / 10;
	rev = rev * 10 + rem;
	
	rem = num % 10;
	num = num / 10;
	rev = rev * 10 + rem;
	
	rem = num % 10;
	num = num / 10;
	rev = rev * 10 + rem;
	
	rem = num % 10;
	num = num / 10;
	rev = rev * 10 + rem;
	
	rem = num % 10;
	num = num / 10;
	rev = rev * 10 + rem;
	
	cout<<rev;
	
	return 0;
	
}
