#include<stdio.h>
#include<math.h>
int read();
int times_appears(int num,int num1);
void write(int);
int main(){
int number1=read();
int number0=read();
int flag=times_appears(number1,number0);
write(flag);
	return 0;
}
int read(){
int num;
printf("Enter number: ");
scanf("%d",&num);
return num;
}
int times_appears(int num,int num1){
	if(num1==num){
		return 1;
	}
	else if(num==0){
        return 0;
	}
	else{
		if((num%10)==num1){
			return 1+times_appears(num/10,num1);
		}
		else{
			return times_appears(num/10,num1);
		}
	}
}
void write(int num){
printf("this number apears: %d",num);
}
