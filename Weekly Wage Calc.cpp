/* MUHAMMAD HAYYAN
 23I-2041___CY-A
 Assignment#03__Q14 */
 
#include<iostream>
using namespace std;

int main()
{
		//Program to calculate weekly wage of an employee
	int hours, over_time, under_time, wage;
	
	cout<< "\nEnter the number of hours employee worked:\t";
	cin>> hours;
		
		//Calculating over time using boolean 
	over_time  = hours - 40;
	over_time  = (hours - 40) * (over_time > 0);
	under_time = hours - over_time;
	
		//Calculating wage
	wage  = (over_time * 1500) + (under_time * 1000);
	
		//outputting
	cout<< "\nRegular hours:\t\t"<<under_time<<endl;
	cout<< "Overtime hours:\t\t"<<over_time<<endl;
	cout<< "Total Weekly wage:\tRs "<<wage<<endl;
	
	return 0;
	
}
