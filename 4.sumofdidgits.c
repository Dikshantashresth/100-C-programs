#include <stdio.h>
int sum(int n){
    int r=0,rem=0;
    while (n!=0){
        r=n%10;
        rem=rem+r;
        n=n/10;
    }
    return rem;
}
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
