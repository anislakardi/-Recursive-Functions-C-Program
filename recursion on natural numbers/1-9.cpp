#include<stdio.h>
int read();
int prodect(int);
void write(int);
int main(){
int number=read(),p;
p=prodect(number);
write(p);
	return 0;
}
int read(){
int num;
printf("Enter Number: ");
scanf("%d",&num);
return num;
}
int prodect(int num){
	
	if(num==0){
		return 1;
	}
	else{
		return (num%10)*prodect(num/10);
	}	
}
void write(int num){
	printf("the prodect of this number is: %d",num);
}
