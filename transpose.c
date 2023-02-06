main()
{
	int a[3][3],i,j,k,temp;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter number for %d %d",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(k=0;k<3;k++)
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				if(a[j][k]>a[j+1][k])
				{
				temp=a[j][k];
				a[j][k]=a[j+1][k];
				a[j+1][k]=temp;
				}
			}
		}
	}
//	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	getch();
}

