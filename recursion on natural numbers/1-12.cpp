#include<stdio.h>
int read();
int to_decimal(int);
void write(int,int);
int main(){
int number=read(),flag,digit2;
flag=to_decimal(number);
write(flag,number);
return 0;
}
int read(){
int num;
printf("Enter Number: ");
scanf("%d",&num);
return num;
}
int to_decimal(int num){
	if(num==num/10){
		return 0;
	}
	else{
    return (num%10)+to_decimal(num/10)*2;
	}
}

void write(int num,int num_org){
printf("(%d)in binary=(%d)in decimal",num_org,num);
}
