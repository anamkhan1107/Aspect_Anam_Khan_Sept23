void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter three number: ");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b) && (a>c))
	{
	  printf("%d is greater",a);
	}
	else
	{
	  if(b>c)
	  {
	    printf("%d is graeter",b);
	  }
	  else
	  {
	    printf("%d is greater",c);
	  }
	}
	getch();
}