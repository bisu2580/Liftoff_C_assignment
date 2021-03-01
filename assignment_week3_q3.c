#include<stdio.h>
int lcm(int a,int b){
    static int temp=1;
    if(temp%a==0&&temp%b==0){
        return temp;
    }
    else{
        temp++;
        return lcm(a,b);
    }
}
int hcf(int m,int n){

    if(n!=0){
        return hcf(n,m%n);
    }
    else{
        return m;
    }
}
int main(){
int num1,num2;
printf("Enter two numbers\n");
scanf("%d %d",&num1,&num2);
printf("LCM of %d and %d is %d\n",num1,num2,lcm(num1,num2));
printf("HCF of %d and %d is %d\n",num1,num2,hcf(num1,num2));

return 0;
}