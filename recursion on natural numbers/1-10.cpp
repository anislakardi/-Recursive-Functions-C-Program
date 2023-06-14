#include<stdio.h>
int read();
int duplicate(int);
int digit(int);
void write(int,int);
int main(){
int number=read(),flag,digit2;
flag=duplicate(number);
digit2=digit(number);
write(flag,digit2-1);
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
int duplicate(int num){
	if(num<10){
		return 0;
	}
	else{
		if(num%10==(num/10)%10){
			return 1+duplicate(num/10);
		}
		else{
			duplicate(num/10);
		}
	}
}

void write(int num,int digit3){
if(num==digit3){
	printf("this number is a duplicate number\n");
}
else{
		printf("this number doesn't a duplicate number\n");
}
}
