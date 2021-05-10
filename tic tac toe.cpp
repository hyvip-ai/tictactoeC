//tic tac toe fully loaded version
#include<stdio.h>
int main()
{
	char a[3][3];
	int d=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			a[i][j]='-';
		}
	}	
		
			for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("| %c |",a[i][j]);
		}
		printf("\n");
	}	
			
		
	

	char p,r;
	int n;
/*	printf("enter the sign for player 1:");
	scanf("%ch",&p);
	printf("enter the sign for player 2:");
	scanf("%ch",&r);*/

	int m;
	
	for(int k=0;k<9;k++)
 {
 	start:
 	m=0;
    printf("enter the position:");
    scanf("%d",&n);
  //  printf("%d\n \n",k);
    	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			m++;
			if(m==n)
			{
				if(a[i][j]=='x' || a[i][j]=='o')
				{
printf("same input please input different value:\n");
			
					goto start;
				}
				else
				{
				
				if(k%2==0)
				{
					a[i][j]='x';
				}
				else
				{
					a[i][j]='o';
				}
				
			}
		
			}
	
			
		}
	}
			for(int i=0;i<3;i++)
          {
		for(int j=0;j<3;j++)
		  {
			printf("| %c |",a[i][j]);
	  	}
	  	printf("\n");
      	}	
      	
      		
 	char s,t,u,v,w,x,y,z,q;
 	s=a[0][0];
 	t=a[0][1];
 	u=a[0][2];
 	v=a[1][0];
 	w=a[1][1];
 	x=a[1][2];
 	y=a[2][0];
 	z=a[2][1];
 	q=a[2][2];
 
 	
   	if(s==t && t==u)
   	{
   		if(s!='-' && t!='-' && u!='-')
   		{
 		printf("%c is the winner\n",s);
 		printf("Match Ends");
 		d=1;
 			break;
   		}
 			
 	}
 	else if(v==w && w==x)
	{
		if(v!='-' && w!='-' && x!='-')
	{
				printf("%c is the winner",v);
			printf("\n");
				printf("Match Ends");
				d=1;
 			break;
	}
 			
	}
 	else if(y==z && z==q)
 	{
 		if(y!='-' && z!='-' && q!='-')
 		{
 			printf("%c is the winner",z);
 			printf("\n");
 				printf("Match Ends");
 				d=1;
 			break;
 		}
 			
 	}
 	else if(s==v && v==y)
 	 	{
 	 		if(s!='-' && v!='-' && y!='-')
 	 		{
 		printf("%c is the winner",s);
 		printf("\n");
 			printf("Match Ends");
 			d=1;
 			break;
 	 		}
 			
 	}
 	else if(t==w && w==z)
 	{
 		if(t!='-' && w!='-' && z!='-')
 		{
 		printf("%c is the winner",z);
 		printf("\n");
 			printf("Match Ends");
 			d=1;
 			break;
 		}
 			
 	}
 	else if(u==x && x==q)
 	{
 		if(x!='-' && q!='-' && u!='-')
 		{
 		printf("%c is the winner",x);
 		printf("\n");
 			printf("Match Ends");
 			d=1;
 			break;
 		}
 			
 	}
 	else if(s==w && w==q)
 	{
 		if(s!='-' && w!='-' && q!='-')
 		{
 		printf("%c is the winner",w);
 		printf("\n");
 			printf("Match Ends");
 			d=1;
 			break;
 		}
 			
 	}
 	else if(u==w && w==y)
 	{
 		if(y!='-' && w!='-' && u!='-')
 		{
 		printf("%c is the winner",w);
 		printf("\n");
 			printf("Match Ends");
 			d=1;
 			break;
 		}
 	}
 }
 if(d==0)
 {
 	printf("Match Draw\n Match Ends");
 }

}
