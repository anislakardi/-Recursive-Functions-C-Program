#include<stdio.h>
#include<math.h>
int read();
int sum_of_first_even(int num1);
void write(int);
int main(){
int number1=read();
int flag=sum_of_first_even(number1);
write(flag);
	return 0;
}
int read(){
int num;
do{
printf("Enter Number even number: ");
scanf("%d",&num);
}while(num%2!=0);
return num;
}

int sum_of_first_even(int num1){
	if(num1==1){
		return 1;
	}
	else{
    return num1+sum_of_first_even(num1-2);
	}
}

void write(int num){
printf("the sum of first even  number is: %d",num);
}
