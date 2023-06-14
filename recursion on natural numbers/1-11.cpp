#include<stdio.h>
int read();
int to_binary(int);
void write(int,int);
int main(){
int number=read(),flag,digit2;
flag=to_binary(number);
write(flag,number);
return 0;
}
int read(){
int num;
printf("Enter Number: ");
scanf("%d",&num);
return num;
}
int to_binary(int num){
	if(num==num/2){
		return 0;
	}
	else{
    return (num%2)+to_binary(num/2)*10;
	}
}

void write(int num,int num_org){
printf("(%d)in dicimal=(%d)in binary",num_org,num);
}
