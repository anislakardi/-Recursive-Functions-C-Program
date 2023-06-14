#include<stdio.h>
int read();
int count_odd_digit(int);
void write(int);
int main(){
int number=read(),c;
c=count_odd_digit(number);
write(c);
	return 0;
}
int read(){
int num;
printf("Enter Number: ");
scanf("%d",&num);
return num;
}
int count_odd_digit(int num){
	int count;
	if(num==0){
		return 0;
	}
	else{
		if((num%10)%2!=0){
			return 1+count_odd_digit(num/10);
		}
		else{
			count_odd_digit(num/10);
		}
	}	
}
void write(int num){
	printf("the number of odd digit in this number is: %d",num);
}
