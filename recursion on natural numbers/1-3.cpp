#include<stdio.h>
int read();
int countdigit(int);
void write(int);
int main(){
int number=read(),c;
c=countdigit(number);
write(c);
	return 0;
}
int read(){
int num;
printf("Enter Number: ");
scanf("%d",&num);
return num;
}
int countdigit(int num){
	int count;
	if(num==0){
		return 0;
	}
	else{
		return 1+countdigit(num/10);
	}	
}
void write(int num){
	printf("the number of digit in this number is: %d",num);
}
