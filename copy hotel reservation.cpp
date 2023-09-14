#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	p=fopen("D:\\project.txt","a+");
	if(p==NULL)
	{
		printf("\n Error! file not found");
		exit(0);
	}
//	int choice=0;
	char a;
//	printf("-----------------------------------------------------------------------------------");
	printf("\t\t\t\tHotel Information");
	printf("\n");
//	printf("\n-----------------------------------------------------------------------------------");
	printf("\nIt is a 15 story hotel which is well equiped with all the requirement.");
	printf("\nAll of the rooms are completely air condition and spacious.");
	printf("\nThis 4-star hotel offers an ATM and a concierge service.");
	printf("\nBreakfast is available every morning,lunch and Dinner are also provided according to the customers choice.");
	printf("\nThis area is mostly popular for cyclying and bike hire is also available.");
	printf("\n\nAmenities: ");
	printf("\na.24 hours power backup");
	printf("\nb.Automatic lift");
    printf("\nc.Ample parking space");
    printf("\nd.Free internet services");
    printf("\ne.24 hours room service");
    printf("\nf.Laundry services");

	printf("\n\nLocation: ");
	printf(" opposite to Kamalpokhari");
	printf("\n\n\n");
	//printf("\n--------------------------------------------------------------------------------------");
	printf("\n\t\t\t\t Room Information ");
//	printf("\n--------------------------------------------------------------------------------------");
	printf("\n\n");
//	printf("+------------------------------------------------------------------------------------+");
	printf("\n");
	printf("Room Type\t\t\t\t  Information\t\t\t\t\tPrice ");
	printf("\n");
//	printf("\n+------------------------------------------------------------------------------------+");
	printf("\n");
	printf("1.SUPERIOR KING SUITE\t\t 2 large double beds and 1 sofa bed\t\t\t10000");
	printf("\n");
	printf("2.SUIT\t\t\t\t 120sq-mtr,Sofa and King size bed\t\t\t8000");
	printf("\n");
//	printf("\n+------------------------------------------------------------------------------------+");
	printf("3.DELUXE\t\t\t 60sq-mtr,Sofa and king bed\t\t\t\t5000");
	printf("\n");
//	printf("\n+------------------------------------------------------------------------------------+");
	printf("\n");
	printf("4.STANDARD\t\t\t 50sq-mtr,Table and Queen bed\t\t\t\t2500");
	printf("\n");

	return 0;

}
