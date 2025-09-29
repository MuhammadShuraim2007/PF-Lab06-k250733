#include <stdio.h>
int main(){

int actualPassword = 1234;
int userPin;

do
	{
	printf("Enter your password: ");
	scanf("%d" , &userPin);

} 
while (userPin!=actualPassword);
 return 0;
}
