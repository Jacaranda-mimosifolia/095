//x+y+z=100
//5*x+3*y+z/3=100
//解得：7*x+4*y=100
#include<stdio.h>
int main()
{
	printf("法1:\n"); 
	for(int x=1;x<=100/7+1;x++)
	{
		for(int y=1;y<=100/4+1;y++)
		{
			if(x*7+y*4==100)
			{
				printf("x=%d,y=%d,x*7+y*4=%d\n",x,y,x*7+y*4);
			}
		}
	}
	
	printf("\n法2:\n");
	for(int x=1;x<=100/5+1;x++)
	{
		for(int y=1;y<=100/3+1;y++)
		{
			for(int z=1;z<=100;z++)
			{
				if(x+y+z==100 && 5*x+3*y+z/3==100 && z%3==0)
				{
					printf("x=%d,y=%d,z=%d,x*5+y*3+z/3=100\n",x,y,z);
				}
			}
			
		}
	}
	return 0;
} 

