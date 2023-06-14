#include<stdio.h>
int read();
int power(int num1,int num2);
void write(int);
int main(){
int number1=read();
int number2=read();
int flag= power(number1,number2);
write(flag);
	return 0;
}
int read(){
int num;
printf("Enter Number: ");
scanf("%d",&num);
return num;
}

int power(int num1,int num2){
	if(num2==1){
		return num1;
	}
	else{
    return num1*power(num1,num2-1);
	}
}

void write(int num){
printf("the pow of this number is: %d",num);
}
