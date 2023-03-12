#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char a[30],b[30];
	bool w = true;
    int i,j,k,temp,count=0,max=0,l=0,save2,save3;
    printf("enter a string : ");
    scanf("%s",&a);
    for ( i = 0; i < strlen(a); i++)
	{
		for ( j = i+1; j <= strlen(a); j++)
		{
			count = 0;
			if(a[i] == a[j]){
				save2 = i;
				save3 = j;
				w = true;
				for ( k = i; k <= j; k++)
				{
					if (a[save2] != a[save3] )
					{
						w = false ;
						break;
					}else{
						count ++;
					}
					save2 ++;
					save3 --;
				}
				if (w == true && count > max)
				{
					l=0;
					for ( k = i; k <= j; k++)
					{
						b[l] = a[k]; 
						l++;
					}
					b[l]='\0';
				  max = count ; 
				  count = 0;
				}
			}
		}
	}
	if (max==0)
	{
		printf("no");
	}else{
		printf("%s",b);
	}
}