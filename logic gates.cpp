
#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[5]{1,0,1,0};
int b[5]={0,1,1,0};
int i,product;

printf("\nAND gate");
	for (i=0;i<4;i++) {
		product=a[i]*b[i];
		printf("\n %d AND %d = %d",a[i],b[i],product);
	}


printf("\n\nOR gate");
    for (i=0;i<4;i++) {
        if (a[i]+b[i]>0)
            product=1;
        else
            product=0;
        printf("\n %d OR %d = %d",a[i],b[i],product);
    }


printf("\n\nNOT gate");
	for (i=0;i<4;i++) {
		if (a[i]==0)
			product=1;
		else
			product=0;
		printf("\n NOT %d = %d", a[i],product);
	}


printf("\n\nNAND gate");

	for (i=0;i<4;i++) {
		if (a[i]==1&&b[i]==1)
            product=0;
		else
			product=1;
		printf("\n %d NAND %d = %d",a[i],b[i],product);
	}


printf("\n\nNOR gate");

	for (i=0;i<4;i++) {
		product=!(a[i]+b[i]);
		printf("\n %d NOR %d = %d",a[i],b[i],product);
	}

printf("\n\nXOR gate");
    for (i=0;i<4;i++) {
        if (a[i]==b[i])
            product=0;
        else
            product=1;
        printf("\n %d XOR %d = %d",a[i],b[i],product);
    }

 printf("\n\nXNOR gate");
    for (i=0;i<4;i++) {
        if (a[i]==b[i])
            product=1;
        else
            product=0;
        printf("\n %d XNOR %d = %d",a[i],b[i],product);
    }

}
