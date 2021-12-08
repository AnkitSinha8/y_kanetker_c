#include<iostream>

using namespace std;

int main(){
	
	int m1, m2, m3, m4, m5 ;
	float percentage, aggregate;
	
	cin>>m1>>m2>>m3>>m4>>m5;
	
	aggregate = m1+m2+m3+m4+m5;
	percentage = aggregate/5;
	
	cout<<aggregate<<" "<<percentage;
	
	return 0;
	
}
