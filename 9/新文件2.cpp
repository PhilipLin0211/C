#include <stdio.h>
#include <stdlib.h>

int main()
{
	int miles;
	int gasoline;
	int mpgallon;
	int parking;
	int tolls;
	float total;
	printf("Enter your total miles per day : ");
	scanf("%d", &miles);
	printf("Enter your cost per gallon of gasoline : ");
	scanf("%d", &gasoline);
	printf("Enter your average miles per gallon : ");
	scanf("%d", &mpgallon);
	printf("Enter your parking fee per day : ");
	scanf("%d", &parking);
	printf("Enter your tolls per day : ");
	scanf("%d", &tolls);
	total = (miles/mpgallon)*gasoline + parking + tolls;
	printf("Today you cost %f \n", total);
	system("pause");
	return 0;
}
