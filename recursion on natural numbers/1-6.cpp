#include<stdio.h>
int read();
int only_even_digit(int);
int digit(int);
void write(int,int);
int main(){
int number=read(),flag,digit2;
flag=only_even_digit(number);
digit2=digit(number);
write(flag,digit2);
	return 0;
}
int read(){
int num;
printf("Enter Number: ");
scanf("%d",&num);
return num;
}
int digit(int num){
	if(num==0){
		return 0;
	}
	else{
		return 1+digit(num/10);
	}
	
	
	
	
	
}
int only_even_digit(int num){
	if(num==0){
		return 0;
	}
	else{
		if(num%2==0){
			return 1+only_even_digit(num/10);
		}
		else{
			only_even_digit(num/10);
		}
	}
	
}

void write(int num,int digit3){
if(num==digit3){
	printf("this number contain only even number");
}
else{
		printf("this number doesn't contain only even number");
}
}
