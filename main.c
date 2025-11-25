#include<stdio.h>
int add(int a,int b){
    return a+b;
}
float add_float(float a,float b){
    return a+b;
}
int sub(int a,int b){

    return a-b;
}
int main(){
    int a=5,b=13;
    float c=5.0,d=13.0;
    printf("%d + %d = %d\n",a,b,add(a,b));
    printf("%d - %d = %d\n",a,b,sub(a,b));
    printf("%f + %f = %f\n",c,d,add_float(c,d));

    return 0;
}