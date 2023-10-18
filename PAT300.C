main()
{
	int r,c,sp;
	clrscr();
	for(r=1;r<=3;r++)
	{
	  for(sp=2;sp>=r;sp--)
	  {
	    printf(" ");
	  }
	  for(c=1;c<=r;c++)
	  {
	    printf("%d",c);
	  }
	  printf("\n");
	}
	getch();
}