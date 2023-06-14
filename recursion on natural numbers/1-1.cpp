#include<stdio.h>
int read();
int fact(int);
void write(int);
int main(){
int number=read(),f;
f=fact(number);
write(f);
	return 0;
}
int read(){
int num;
printf("Enter Number: ");
scanf("%d",&num);
return num;
}
int fact(int num){
	
	if(num==1){
		return 1;
	}
	else{
		return num*fact(num-1);
	}	
}
void write(int num){
	printf("the factorial of this number is: %d",num);
}
