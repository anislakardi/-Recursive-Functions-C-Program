#include<stdio.h>
#include<math.h>
int read();
int fact(int num);
int zeros_fact(int num);
void write(int);

int main(){
int number1=read();
int facto=fact(number1);
int flag=zeros_fact(facto);
write(flag);
	return 0;
}

int read(){
int num;
printf("Enter number: ");
scanf("%d",&num);
return num;
}
int fact(int num){
	int f=1,i=1;
	for(i=1;i<=num;i++){
		f=f*i;
	}
	printf("the fact: %d\n",f);
	return f;
}
int zeros_fact(int num){
if((num%10)!=0){
	return 0;
}
else{
if(num%10==0){
	return 1+zeros_fact(num/10);
}
else{
	return zeros_fact(num/10);
}
}
}
void write(int num){
printf("this number apears: %d",num);
}
