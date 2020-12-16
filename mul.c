#include <stdio.h>
#include <math.h>

//function for multiplying numbers without using multiplication operator!!!
//here traditional method of logarithm is used!!

    float mul(float x,float y)
{
    float nx,ny,r1,r11;
    if(x<0 && y>0)
    {
        nx=-(x);
        r1=exp(log(nx)+log(y));
        r11=-(r1);
    }
    if(y<0 && x>0)
    {
        ny=-(y);
        r1=exp(log(x)+log(ny));
        r11=-(r1);
    }
    if(x<0 && y<0)
    {
        nx=-(x);
        ny=-(y);
        r1=exp(log(nx)+log(ny));
        r11=(r1);
    }
    if(x>0 && y>0)
    {
        r11=exp(log(x)+log(y));
    }
    printf("\nvalue:%f",r11);
    return r11;
}
    
   int main()
    {

    float a,b,c,d,res1,res2,ac,bd,ad,bc;
    printf("enter the a the real part of first no.:");
    scanf("%f",&a);
    printf("enter the b the imaginary part of the first no.:");
    scanf("%f",&b);
    printf("enter the c the real part of the second no.:");
    scanf("%f",&c);
    printf("enter the d the imaginary part of the second no.:");
    scanf("%f",&d);
    
    ac=mul(a,c);
    bd=mul(b,d);
    ad=mul(a,d);
    bc=mul(b,c);
    
    res1=ac-bd;
    res2=ad+bc;
    
    printf("\n the multiplication result is %f + %f i",res1,res2);
    
    return 0;
}


