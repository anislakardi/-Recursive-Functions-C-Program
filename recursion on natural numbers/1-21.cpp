#include<stdio.h>
#include<math.h>
int read();
int is_prime(int,int);
void write(int);

int main(){
int number1=read();
int flag=is_prime(number1,number1-1);
write(flag);
	return 0;
}
int read(){
int num;
printf("Enter number: ");
scanf("%d",&num);
return num;
}
int is_prime(int num,int diviser){
	if(diviser==2){
		if(num%diviser!=0){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		if(num%diviser!=0){
			return 1*is_prime(num,diviser-1);
		}
		else{
			return 0;
		}
	}	
}
void write(int num){
if(num==1){
	printf("this number is prime");
}
else{
	printf("this number doesn't prime number");
}
}
