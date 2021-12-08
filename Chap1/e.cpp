#include<iostream>


using namespace std;

int main(){
	
	float area, perimeter, radius, length, breadth, PI = 3.14;
	
	cin>>length>>breadth>>radius;
	
	area = length * breadth;
	perimeter = 2 * (length + breadth);
	
	cout<<area<<" "<<perimeter<<endl;
	
	area = PI * radius * radius;
	perimeter = 2 * PI * radius;
	
	cout<<area<<" "<<perimeter;
	
	return 0;
	
}
