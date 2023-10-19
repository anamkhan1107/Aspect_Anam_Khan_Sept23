void main()
{
	int days,y,m,d;
	clrscr();
	printf("Enter Month and Year in days: ");
	scanf("%d",&days);
	y=days/365;
	days=days-(365*y);
	m=days/30;
	d=days-(m*30);
	printf("%dY: %dM: %dD",y,m,d);
	getch();
}