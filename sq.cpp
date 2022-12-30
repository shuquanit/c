#include<stdio.h>
main()
{
	int chc,a,b,c,z;
	int jc(int),max3(int,int,int),min3(int,int,int);
loop:printf("\n");
	printf("    ***********************************\n");
	printf("    **                              **\n");
	printf("    **   1.求一个正整数的阶乘       **\n");
	printf("    **   2.求三个数的最大值         **\n");
	printf("    **   3.求三个数的最小值         **\n");
	printf("    **   0.结束程序                 **\n");
	printf("    **                              **\n");
	printf("    **  请选择0~3：                 **\n");
	printf("    **                              **\n");
	printf("    **********************************\n");
	printf("\n");
	scanf ("%d",&chc);
	switch(chc)
	{
		case 3:  
			{
			printf("请输入三个整数：");
			scanf("%d%d%d",&a,&b,&c);
			z=min3(a,b,c);
				break;
			}
		case 2:   
			{

			z=max3(a,b,c);
				break;
			}
		case 1:   
			{
			printf("请输入一个整数：");
			scanf("%d",&a);
			z=jc(a);
			break;
			}
		case 0:   
			{printf("程序结束");
			return 0;
			break;
			}
		default: 
			{printf("非法输入，请重新选择");
			goto loop;
			}
	}
}


/*==============================================*/
/*                                                              */
/*               子函数min3：求三个数的最小值                  */
/*                                                              */
/*==============================================*/

int min3(int x,int y,int z)
{
	int mini=x<y?x:y;
	mini=mini<z?mini:z;
	printf("最小值=%d\n",mini);
	return mini;
}


/*===============================================*/
/*                                                               */
/*               子函数max3：求三个数的最大值                   */
/*                                                               */
/*===============================================*/
int max3(int x,int y,int z)
{
		int i,max,a[3];
	printf("请输入三个整数：");
	for(i=0;i<3;i++)
scanf("%d",&a[i]);
max=a[0];
for(i=1;i<3;i++)
if(a[i]>max) max=a[i];
printf("最大值是=%d\n",max);
	return 0;
}


/*==============================================*/
/*                                                              */
/*               子函数jc：求一个数的阶乘                       */
/*                                                              */
/*==============================================*/
int jc(int x)
{
  int i=1;
  long p=1;
  while (i<=x)
    {
        p*=i;
        i++;
    }
  printf("%d!=%ld\n",x,p);
  return p;
}

