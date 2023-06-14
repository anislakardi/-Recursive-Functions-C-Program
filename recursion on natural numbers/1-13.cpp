#include<stdio.h>
#include<math.h>
int read();
int digit(int);
int armstrong(int,int);
void write(int,int);
int main(){
int number=read(),flag,digit2;
digit2=digit(number);
flag=armstrong(number,digit2);
write(number,flag);
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
int armstrong(int num,int dig){
	if(num==0){
		return 0;
	}
	else{
    return pow((num%10),dig)+armstrong(num/10,dig);
	}
}

void write(int num,int sum){
if(num==sum){
	printf("this number is armstrong number");
}
else{
		printf("this number doesn't armstrong number");
}
}
