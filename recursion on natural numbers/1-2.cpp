#include<stdio.h>
int read();
int sum(int);
void write(int);
int main(){
int number=read(),f;
f=sum(number);
write(f);
	return 0;
}
int read(){
int num;
printf("Enter Number: ");
scanf("%d",&num);
return num;
}
int sum(int num){
	if(num==0){
		return 0;
	}
	else{
		return num+sum(num-1);
	}	
}
void write(int num){
	printf("the sum of this number is: %d",num);
}
