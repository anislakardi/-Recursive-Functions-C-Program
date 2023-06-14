#include<stdio.h>
#include<math.h>
int read();
int is_contain(int num,int dig);
void write(int);
int main(){
int number=read();
int digit=read();
int flag= is_contain(number,digit);
write(flag);
	return 0;
}
int read(){
int num;
printf("Enter Number: ");
scanf("%d",&num);
return num;
}

int is_contain(int num,int dig){
	if(num==0){
		return 0;
	}
	else{
   if(dig==(num%10)){
   	return 1+is_contain(num/10,dig);
   }
   else{
   	is_contain(num/10,dig);
   }
	}
}

void write(int num){
if(num!=0){
	printf("Yes,Is contain this digit");
}
else if(num==0){
		printf("No,Doesn't contain digit");
}
}
