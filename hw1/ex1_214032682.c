#include<stdio.h>
int abs(int x){//calculate absulote value
    return (x<0) ? -x : x;
}
void sign(int num){//print sign
    if (num>0)
        printf("It’s sign is: +");
    else if (num<0)
        printf("It’s sign is: -");
    else 
        printf("It’s sign is: 0"); 
}
void digit_sum_and_num(int num){//should i add int org=num?
    int sum=0,i=0;
    while (num>0){
        sum+=num%10;
        i++;
        num/=10;
    }
    printf("The sum of digits is:%d\n",sum);
}
int main(){
    printf("helloworld");
    return 0;
}