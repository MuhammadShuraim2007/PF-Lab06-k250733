#include <stdio.h>
int main(){
	int num;
	int reverse=0;
	int remainder;
	
	printf("Enter thr number: ");
	scanf("%d" , &num);
	
	while(num!=0){
		remainder = num%10;
		reverse=reverse*10+remainder;
		num=num/10;
	}
	printf("Reverse numbers: %d" , reverse);
	return 0;
}
