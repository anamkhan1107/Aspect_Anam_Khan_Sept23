main()
{
	int r,c;
	clrscr();
	for(r=5;r>=1;r--)
	{
	  for(c=1;c<=r;c++)
	  {
	    printf("%d",c);
	  }
	  printf("\n");
	}
	getch();
}