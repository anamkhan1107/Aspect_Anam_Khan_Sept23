void main()
{
	float i1,i2,q1,q2,avg;
	clrscr();
	printf("Enter item1 and item2: ");
	scanf("%f%f",&i1,&i2);
	printf("Enter Item1 Quantity & Item2 Quantity: ");
	scanf("%f%f",&q1,&q2);
	avg= ((i1*q1)+(i2*q2))/2;
	printf("%f",avg);
	getch();
}