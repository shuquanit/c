#include<stdio.h>
main()
{
	int chc,a,b,c,z;
	int jc(int),max3(int,int,int),min3(int,int,int);
loop:printf("\n");
	printf("    ***********************************\n");
	printf("    **                              **\n");
	printf("    **   1.��һ���������Ľ׳�       **\n");
	printf("    **   2.�������������ֵ         **\n");
	printf("    **   3.������������Сֵ         **\n");
	printf("    **   0.��������                 **\n");
	printf("    **                              **\n");
	printf("    **  ��ѡ��0~3��                 **\n");
	printf("    **                              **\n");
	printf("    **********************************\n");
	printf("\n");
	scanf ("%d",&chc);
	switch(chc)
	{
		case 3:  
			{
			printf("����������������");
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
			printf("������һ��������");
			scanf("%d",&a);
			z=jc(a);
			break;
			}
		case 0:   
			{printf("�������");
			return 0;
			break;
			}
		default: 
			{printf("�Ƿ����룬������ѡ��");
			goto loop;
			}
	}
}


/*==============================================*/
/*                                                              */
/*               �Ӻ���min3��������������Сֵ                  */
/*                                                              */
/*==============================================*/

int min3(int x,int y,int z)
{
	int mini=x<y?x:y;
	mini=mini<z?mini:z;
	printf("��Сֵ=%d\n",mini);
	return mini;
}


/*===============================================*/
/*                                                               */
/*               �Ӻ���max3���������������ֵ                   */
/*                                                               */
/*===============================================*/
int max3(int x,int y,int z)
{
		int i,max,a[3];
	printf("����������������");
	for(i=0;i<3;i++)
scanf("%d",&a[i]);
max=a[0];
for(i=1;i<3;i++)
if(a[i]>max) max=a[i];
printf("���ֵ��=%d\n",max);
	return 0;
}


/*==============================================*/
/*                                                              */
/*               �Ӻ���jc����һ�����Ľ׳�                       */
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

