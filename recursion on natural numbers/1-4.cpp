#include<stdio.h>
int read();
int countevendigit(int);
void write(int);
int main(){
int number=read(),c;
c=countevendigit(number);
write(c);
	return 0;
}
int read(){
int num;
printf("Enter Number: ");
scanf("%d",&num);
return num;
}
int countevendigit(int num){
	int count;
	if(num==0){
		return 0;
	}
	else{
		if((num%10)%2==0){
			return 1+countevendigit(num/10);
		}
		else{
			countevendigit(num/10);
		}
	}	
}
void write(int num){
	printf("the number of even digit in this number is: %d",num);
}
