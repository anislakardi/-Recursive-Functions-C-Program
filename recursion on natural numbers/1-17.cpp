#include<stdio.h>
#include<math.h>
int read();
int sum_of_first_odd(int num1);
void write(int);
int main(){
int number1=read();
int flag=sum_of_first_odd(number1);
write(flag);
	return 0;
}
int read(){
int num;
do{
printf("Enter Number odd number: ");
scanf("%d",&num);
}while(num%2==0);

return num;
}

int sum_of_first_odd(int num1){
	if(num1==2){
		return 2;
	}
	else{
    return num1+sum_of_first_odd(num1-2);
	}
}

void write(int num){
printf("the sum of first odd number is: %d",num);
}
