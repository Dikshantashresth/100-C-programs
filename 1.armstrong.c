// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int length(int n){
    int count =0;
  
    while(n!=0){
        n = n/10;
        count++;
    }
    return count;
    
}
const char* check(int rem,int n){
    if(rem==n){
        return "Armstrong";
    }else{
        return "Not Armstrong";
    }
}
int main() {
    // Write C code here
    int n = 153;
    int z = n;
    int rem=0;
    int r = 0;
    int len = length(n);
    while(n!=0){
        r = n%10;
        rem = rem+pow(r,len);
        n = n/10;
    }
    printf("%s",check(rem,z));

    return 0;
}
