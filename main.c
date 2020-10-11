 #include <stdio.h>
#include <stdlib.h>

int main()
{ int choice,i;
    double p,r,t,z,m,principle;

    printf("enter principal");
    scanf("%lf",&p);
     printf("enter rate");
    scanf("%lf",&r);
     printf("enter time");
    scanf("%lf",&t);

    printf("enter choice: 0 for simple interest,1 for compound \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 0: printf("simple interest is \n");
                z=(p*r*t)/100;
                printf("simple interest:");
                printf("%.3lf \n",z);
                printf("final principal amount after %2.1lf years:",t);
                printf("%.3lf",p+z);

                break;
        case 1:  z=0;
                 principle=p;
                for(i=0;i<t;i++)
                {
                    m=(p*r*1)/100;
                    p=p+m;
                    z=z+m;
                }
                printf("compound interest:");
                printf("%lf \n",z);
                printf("final principal amount after %2.1lf years:",t);
                printf("%.3lf",principle+z);
                printf("good program");
                break;

    }
    return 0;
}
