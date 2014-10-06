#include <stdio.h>
#include <math.h>
#define PWR5(x) pow(5, x+1)
int find_five(int num);
int main(void) {
	int N, num, zeroes, i;
	scanf("%d", &N); //read number of inputs
	for(i = 0; i < N; i++)
	{
		scanf("%d", &num); 
		zeroes = find_five(num);//finding the number of fives in all numbers till num. It will be equal to the number of trailing zeroes in the factorial.
		printf("%d\n", zeroes);
	}
	return 0;
}
int find_five(int num){
	int mul, powers, total;
	total = 0;
	mul = num/5; //find the number of fives
	powers = 1;
	while(PWR5(powers) <= num)
	{
		total+=num/(PWR5(powers)); //there will be extra fives in multiples of 25, 125 and so on.
		powers++;
	}
	return mul+total;
}