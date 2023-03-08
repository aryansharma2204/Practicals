//prime or not
#include <stdio.h>

int main() {
    int n, count=0, i;
    printf("Enter an Integer: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        if(n%i==0) {
            count++;
        }
    }
    if(count==2) {
        printf("Prime Number");
    }
    else {
        printf("Not a Prime Number");
    }
    return 0;
}