void main()
{
	float x1,x2,y1,y2,dis;
	clrscr();
	printf("Enter value for x1 and x2: ");
	scanf("%f%f",&x1,&x2);
	printf("Enter value for y1 and y2: ");
	scanf("%f%f",&y1,&y2);
	dis= (((x1-x2)*(x2-x1))+((y1-y2)*(y2-y1)));
	dis= dis*dis;
	printf("Distance of points are: %f",dis);
	getch();
}