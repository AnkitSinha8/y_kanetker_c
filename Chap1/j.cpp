#include<iostream>

using namespace std;

int main(){
	
	int total_population = 80000, total_men_population, total_women_population, total_literacy, total_literateMen_population, total_literateWomen_population,total_ilLiterateMen_population, total_ilLiteratewomen_population;
	
	total_men_population = (52 * (total_population)) / 100;
	
	total_literateMen_population = (35 * (total_population)) / 100;
	
	total_literacy = (48* (total_population))/100;
	
	total_women_population = total_population - total_men_population;
	
	total_literateWomen_population = total_literacy - total_literateMen_population;
	
	total_ilLiterateMen_population = total_men_population - total_literateMen_population;
	
	total_ilLiteratewomen_population = total_women_population - total_literateWomen_population;
	
	cout<<total_ilLiterateMen_population<<"\n"<<total_ilLiteratewomen_population;
	
	return 0;
	
}
