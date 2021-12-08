#include<iostream>

using namespace std;

int main(){
	
	float basic_salary, dearness_allowance, h_r_a, gross_salary;
	
	cin>>basic_salary;
	
	dearness_allowance = 0.4 * basic_salary;
	
	h_r_a = 0.2 * basic_salary;
	
	gross_salary = basic_salary + dearness_allowance + h_r_a;
	
	cout<<gross_salary<<endl;
	
	return 0;
	
	
}
