/*Author: utkarsh agrawal
  subject: (structures) Manage a travel agency and you want your 3 drivers to input their following dtails:
  1.Name
  2.Driving License No
  3.Route
  4.kms
  developement start Date: 28/10/2020 
  last modified date: 29-10-2020
  */
  
#include<stdio.h>
#include<string.h>



struct travel{
	
	char first_name[35];
	char last_name[35];
		char dln[13];
	char starting_city[25];
		int pincode_start;
	char ending_city[25];
	int pincode_end;
	int kms;
	
	
};

main(){
	int first_input;
	struct travel d1,d2,d3;
	
	
	
	
	printf("press 1 if you want to fill driver one details \n");
	printf("press 2 if you want to fill driver one details \n");
	printf("press 3 if you want to fill driver one details \n");
	scanf("%d",&first_input);
	
	
	//this is for driver one
	if(first_input==1){
		printf("********kindly enter your correct details********\n\n\n");
		printf("driver one please enter your first name\n");
		scanf("%s",&d1.first_name);
		
		printf("\n");
		
		printf("driver one please enter your last name name\n");
		scanf("%s",&d1.last_name);
		
		printf("\n");
		
		printf("driver one please enter your driving license number\n");
		scanf("%s",&d1.dln);
		
		printf("\n");
		
		printf("driver one please enter from where you are starting your journey(enter city name)\n");
		scanf("%s",&d1.starting_city);
		
		printf("\n");
		
		printf("driver one please enter the pincode of the city which you entered in privious step\n");
		scanf("%d",&d1.pincode_start);
		
		printf("\n");

		
		printf("driver one please enter where you are ending your journey(enter city name)\n");
		scanf("%s",&d1.ending_city);
		
		printf("\n");
		
		printf("driver one please enter the pincode of the city which you entered in privious step\n");
		scanf("%d",&d1.pincode_end);
		
		printf("\n");
		
			printf("driver one please enter how much you need to drive for this tour(enter how much kms you need to drive (please do not write any unit please write only number))\n");
		scanf("%d",&d1.kms);
		
		printf("\n");
		
		printf("******************your details are*********************\n\n");
		printf("name of the driver is:\n%s %s\n",d1.first_name,d1.last_name);
        printf("driving license number is:\n%s\n",d1.dln);
        printf("journey is starting from:\n%s(%d)\n",d1.starting_city,d1.pincode_start);
        printf("journey is ending in:\n%s(%d)\n",d1.ending_city,d1.pincode_end);
        printf("route of the journey is:\n%s to %s\n",d1.starting_city,d1.ending_city);
        printf("total distace is needed to travle is:\n%dkms\n",d1.kms);
	}
	//this is for driver two
		if(first_input==2){
		printf("********kindly enter your correct details********\n\n\n");
		printf("driver two please enter your first name\n");
		scanf("%s",&d2.first_name);
		
		printf("\n");
		
		printf("driver two please enter your last name \n");
		scanf("%s",&d2.last_name);
		
		printf("\n");
		
		printf("driver two please enter your driving license number\n");
		scanf("%s",&d2.dln);
		
		printf("\n");
		
		printf("driver two please enter from where you are starting your journey(enter city name)\n");
		scanf("%s",&d2.starting_city);
		
		printf("\n");
		
		printf("driver two please enter the pincode of the city which you entered in privious step\n");
		scanf("%d",&d2.pincode_start);
		
		printf("\n");

		
		printf("driver two please enter where you are ending your journey(enter city name)\n");
		scanf("%s",&d2.ending_city);
		
		printf("\n");
		
		printf("driver two please enter the pincode of the city which you entered in privious step\n");
		scanf("%d",&d2.pincode_end);
		
		printf("\n");
		
			printf("driver two please enter how much you need to drive for this tour(enter how much kms you need to drive (please do not write any unit please write only number))\n");
		scanf("%d",&d2.kms);
		
		printf("\n");
		
		printf("******************your details are*********************\n\n");
		printf("name of the driver is:\n%s %s\n\n",d2.first_name,d2.last_name);
        printf("driving license number is:\n%s\n\n",d2.dln);
        printf("journey is starting from:\n%s(%d)\n\n",d2.starting_city,d2.pincode_start);
        printf("journey is ending in:\n%s(%d)\n\n",d2.ending_city,d2.pincode_end);
        printf("route of the journey is:\n%s to %s\n\n",d2.starting_city,d2.ending_city);
        printf("total distace is needed to travle is:\n%dkms\n\n",d2.kms);
	}
	//this is for driver three
		if(first_input==3){
		printf("********kindly enter your correct details********\n\n\n");
		printf("driver three please enter your first name\n");
		scanf("%s",&d3.first_name);
		
		printf("\n");
		
		printf("driver three please enter your last name \n");
		scanf("%s",&d3.last_name);
		
		printf("\n");
		
		printf("driver three please enter your driving license number\n");
		scanf("%s",&d3.dln);
		
		printf("\n");
		
		printf("driver three please enter from where you are starting your journey(enter city name)\n");
		scanf("%s",&d3.starting_city);
		
		printf("\n");
		
		printf("driver three please enter the pincode of the city which you entered in privious step\n");
		scanf("%d",&d3.pincode_start);
		
		printf("\n");

		
		printf("driver three please enter where you are ending your journey(enter city name)\n");
		scanf("%s",&d3.ending_city);
		
		printf("\n");
		
		printf("driver three please enter the pincode of the city which you entered in privious step\n");
		scanf("%d",&d3.pincode_end);
		
		printf("\n");
		
			printf("driver three please enter how much you need to drive for this tour(enter how much kms you need to drive (please do not write any unit please write only number))\n");
		scanf("%d",&d3.kms);
		
		printf("\n");
		
		printf("******************your details are*********************\n\n");
		printf("name of the driver is:\n%s %s\n\n",d3.first_name,d3.last_name);
        printf("driving license number is:\n%s\n\n",d3.dln);
        printf("journey is starting from:\n%s(%d)\n\n",d3.starting_city,d3.pincode_start);
        printf("journey is ending in:\n%s(%d)\n\n",d3.ending_city,d3.pincode_end);
        printf("route of the journey is:\n%s to %s\n\n",d3.starting_city,d3.ending_city);
        printf("total distace is needed to travle is:\n%dkms\n\n",d3.kms);
	}
	
	
	
//if anybody select wrong choice
	else{
		printf("sorry!\nsomething went wrong\nplease enter a valid unit\n");
	
	}
	
	return 0;
}

