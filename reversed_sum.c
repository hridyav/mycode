#include <stdio.h>

void rev_num(int * num);

int main(void) {
	int N, num1, num2, sum, i;
	sum = 0;
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &num1);
		scanf("%d", &num2);
		rev_num(&num1);
		rev_num(&num2);
		sum = num1 + num2;
		rev_num(&sum);
		printf("%d\n", sum);
	}
	
	return 0;
}

void rev_num(int * num)
{
	int temp, digit, new_num;
	new_num = 0;
	temp = *num;
	while(temp){
		digit = temp%10; //get lsb
		temp = temp/10;  //remove lsb
		new_num = new_num*10 + digit;
	}
	*num = new_num;
	
}