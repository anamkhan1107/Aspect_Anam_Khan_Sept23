void main()
{
	int sec,hr,min,s;
	clrscr();
	printf("Enter value for second: ");
	scanf("%d",&sec);
	hr=(sec/3600);
	min=(sec-(3600*hr))/60;
	s=(sec-(3600*hr)-(min*60));
	printf("%dHr %dMin %dSec",hr,min,s);
	getch();
}