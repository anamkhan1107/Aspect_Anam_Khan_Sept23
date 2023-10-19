void main()
{
	int dis;
	float fuel_ltr,avg;
	clrscr();
	printf("\nEnter total distance: ");
	scanf("%d",&dis);
	printf("\nEnter fuel in literes: ");
	scanf("%f",&fuel_ltr);
	avg= (dis/fuel_ltr);
	printf("\nAverage is: %.3f",avg);
	getch();
}