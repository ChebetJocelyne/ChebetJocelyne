#include <stdio.h>
#include <math.h>
int main(){
	
	float principal;
	float numberofcompoundedyears;
	float rate;
	int totalnumberofyears;
	double amount;
	
	
	printf("principal: ");
	scanf("%f" ,&principal);
	
	printf("numberofcompoundedyears: ");
	scanf("%f", &numberofcompoundedyears);
	
	printf("rate: ");
	scanf("%f", &rate);
	
	printf("totalnumberofyears: ");
	scanf("%d", totalnumberofyears);
	
	rate = rate /100;
	amount = principal *pow((1 + rate / numberofcompoundedyears), numberofcompoundedyears * totalnumberofyears);
	
	printf("amount%.2lf", amount);
	
	return 0;
}