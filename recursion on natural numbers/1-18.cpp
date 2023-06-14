#include<stdio.h>
#include<math.h>
int read();
int digit(int num);
int revers(int num1,int dig);
void write(int);
int main(){
int number1=read();
int d=digit(number1);
int flag=revers(number1,d/10);
write(flag);
	return 0;
}
int read(){
int num;
printf("Enter Number even number: ");
scanf("%d",&num);
return num;
}
int digit(int num){
	if(num==0){
		return 1;
	}else{
		return 10*digit(num/10);
	}
}
int revers(int num1,int dig){
	if(num1==0){
		return 0;
	}
	else{
    return (num1%10)*dig + revers(num1/10,dig/10);
	}
}

void write(int num){
printf("the revers of this number is: %d",num);
}
