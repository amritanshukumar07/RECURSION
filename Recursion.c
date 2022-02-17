#include<stdio.h>
int rec(int x){
    int f;
  if(x==1){
      return 1;
  }
  else 
     f= x*rec(x-1);
     return f;

}
int fib(int x){
    if(x==0)
    return 0;
    else if(x==1)
    return 1;
    else
    return (fib(x-1)+fib(x-2));
}

int main(){
    int a;
    scanf("%d",&a);
   // printf("%d",rec(a));
//    for(int i=0;i<a;i++){
//        printf("%d ",fib(i));
//    }
    return 0;
}
