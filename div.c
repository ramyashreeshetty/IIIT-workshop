#include <stdio.h>
#include <math.h>

//function for dividing numbers without using division operator!!!
//here traditional method of logarithm is used!!
    float div(float x,float y)
    {
     float nx,ny,r1,r11;
    if(x<0)
    {
        nx=-(x);
        r1=exp(log(nx)-log(y));
        r11=-(r1);
    }
    if(y<0)
    {
        ny=-(y);
        r1=exp(log(x)-log(ny));
        r11=-(r1);
    }
    if(x<0 && y<0)
    {
        nx=-(x);
        ny=-(y);
        r1=exp(log(nx)-log(ny));
        r11=(r1);
    }
    if(x>0 && y>0)
    {
        r11=exp(log(x)-log(y));
    }
    printf("\nvalue:%f",r11);
    return r11;

    }
    
  int main()
{
    float a,b,c,d,r1,r2,r3,r4,r5,r6;
    printf("enter the a the real part of first no.:");
    scanf("%f",&a);
    printf("enter the b the imaginary part of the first no.:");
    scanf("%f",&b);
    printf("enter the c the real part of the second no.:");
    scanf("%f",&c);
    printf("enter the d the imaginary part of the second no.:");
    scanf("%f",&d);
    
    r1=a*c+b*d;
    r2=c*c+d*d;
    r3=div(r1,r2);
    r4=b*c-a*d;
    r5=c*c+d*d;
    r6=div(r4,r5);
 printf("the division result is: %f + %f i",r3,r6);


    return 0;
}



