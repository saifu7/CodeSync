#include <stdio.h>
#include <string.h>
int main()
{
	char num[100],num2[100];
	int dec = 0, i, j, len, dec1 = 0, len2, flag,result[100];
	printf("Enter a number1: ");
	gets(num);
	printf("Enter a number2: ");
	gets(num2);
	len = strlen(num);
	len2 = strlen(num2);
	for(i=0; i<len; i++){
		dec = dec * 10 + ( num[i] - '0' );
	}
	for(i=0; i<len2; i++){
		dec1 = dec1 * 10 + ( num2[i] - '0' );
	}
	printf("%d and %d", dec,dec1);
	int n1, n2;
	n1 = dec;
	n2 = dec1;
	if(n1 < 0 || n2 < 1)
    {
    	printf("Entered range is  invalid!");
	}
	int k = 0;
	while (n1 < n2)
    {
        flag = 0;

        for(i = 2; i <= n1/2; ++i)
        {
            if(n1 % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
        	result[k] = n1;
        	k++;
		}
            //printf("%d ", n1);

        ++n1;
    }
    int l,c=0;
    printf("\n\n");
    j =1;
   for(i=0; i<k; i++){
		if(!(j%4))
		{
		j=1;
		printf("\n");
		}
		printf("%d ",result[i]); 
		++j;  
	}
}