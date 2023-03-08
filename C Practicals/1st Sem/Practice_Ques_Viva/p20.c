//WAP to enter a number and check whether it is Armstrong or not.	
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, r, s = 0, c = 0, t, z, p;
    printf("Enter a Number: \n");
    scanf("%d", &n);
    t = n;
    z = n;
    
    while(n != 0) {
        r = n % 10;
        c = c + 1; //It will count the number of digits
        n = n / 10;
    }
    while(t != 0) {
        p = t % 10;
        s = s * (pow(r, c));
        t = t / 10;
    }
    if(z == s) {
        printf("Number is Armstrong");
    }
    else {
        printf("Number isn't Armstrong");
    }
    return 0;
}