#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 void login();
 void trainticket();  
 void movieticket();
 void airlinesticket();
 void reservation1(void);							
void viewdetails1(void);							
void cancel1(void);								
void printticket1(char name[],int,int,float);	//print ticket 
void specifictrain1(int);						//print data related to specific train
float charge1(int,int);
 void reservation2(void);							
void viewdetails2(void);							
void cancel2(void);								
void printticket2(char name[],int,int,float);	//print ticket 
void specifictrain2(int);						//print data related to specific train
float charge2(int,int);


void upi_payment(int charges){		//function for UPI PAYMENT
    char vcode[6];
    char vpa[15];
    int c;
    printf("Enter VPA ID : ");		//ASKING VIRTUAL PAYMENT ADDRESS.
    scanf("%s",vpa);
    printf("\n Enter Verification Code : ");    //ASKING UPI PIN.
    scanf("%s",vcode);
    printf("\n Payment Succesfull \n");

}

void netbanking(int charges){			//FUNCTION FOR NET BANKING.
    char  accno[20] ;
    printf("\n Net Banking Payment\n");
    printf("Account Number : ");
    scanf("%s",accno);

    printf("\n Transaction Id : %d\n",rand());   
    printf("\n Payment Successful.\n");
	system("pause");
}

void debitcard(int charges) {    //function for debit card payment.
    char nameOnCard[30];
    long cardNumber;
    char expiryDate[5];
    printf("\n Debit Card Payment\n");
    printf("Name On The Card : ");
    gets(nameOnCard);
    printf("Card Number : ");
    scanf("%ld",&cardNumber);
    printf("Expiry Date (MM/YY) : ");
    scanf("%s",expiryDate);
    if ((strlen(expiryDate) != 4) ) {
        printf("\n Invalid Expiry Date Format! Please enter in format MM/YY.");
        debitcard(charges);
    } else{
        printf("\n Payment Successful.\n");
      
    }
}

void creditcard(int charges){     //function for credit card payment.
    char nameOnCard[30];
    long cardNumber;
    char expiryDate[5];
    printf("\n Credit Card Payment\n");
    printf("Name On The Card : ");
    gets(nameOnCard);
    printf("Card Number : ");
    scanf("%ld",&cardNumber);
    printf("Expiry Date (MM/YY) : ");
    scanf("%s",expiryDate);
    if ((strlen(expiryDate) != 4) ) {
        printf("\n Invalid Expiry Date Format! Please enter in format MM/YY.");
        creditcard(charges);
    } else{
        printf("\n Payment Successful.\n");
     //   print_bill();
    }
}



void payment_gateway(int charges){   //function for payment gateway.
    system("cls");
    
    int choice;
    start10:
    printf("\n\n Amount to be  paid is Rs. %d \n",charges);
    printf("\n\n Select Payment Method: ");
    printf("\n 1. UPI Payment \n 2. Net Banking/E-Wallet \n 3. Debit Card \n 4. Credit Card\n");
    printf("Enter Your  Choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        upi_payment(charges);
        break;
    case 2:
        netbanking(charges);
        break;
    case 3:
        debitcard(charges);
        break;
    case 4:
         creditcard(charges);
        break;
    default:
	  printf("select correct option\n");
	  goto start10;
        break;
    }
  
}
void adminlogin(){    //function for admin login.
		int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="dhoni";
    char pass[10]="thala";
 
	
    printf("\n  =======================  LOGIN FORM  =======================\n  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    printf("*");
	    i++;
	}
	pword[i]='\0';
	
	i=0; 
		if(strcmp(uname,"dhoni")==0 && strcmp(pword,"thala")==0)
	{
	printf("  \n\n\n       WELCOME TO OUR SYSTEM !! YOUR LOGIN IS SUCCESSFUL");
	
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		system("cls");
		adminlogin();
	}
		system("cls");	
} 
   void login()           //function for user login.
{
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="kohli";
    char pass[10]="king";
 
    printf("\n  =======================  LOGIN FORM  =======================\n  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    printf("*");
	    i++;
	}
	pword[i]='\0';
	
	i=0;

		if(strcmp(uname,"kohli")==0 && strcmp(pword,"king")==0)
	{
	printf("  \n\n\n       WELCOME TO OUR SYSTEM !! YOUR LOGIN IS SUCCESSFUL");
	
	
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
	
		
	
		system("cls");
		login();
	}

		system("cls");	
}
typedef struct{     //structure for train name,train number,no. of seats.
	char name[50];
	int train_num;
	int num_of_seats;
}pd;
typedef struct{		//structure for airlines name,airlines number,no. of seats.
	char name[50];
	int airlines_num;
	int num_of_seats;
}pd2;
int main () 			//main function for home page for website.
{    int x;
		system("cls"); 
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|   TRAIN,AIRLINES,MOVIE TICKET RERS. SYSTEM    |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
		
	    
	system("pause");
    system("cls");
    login();
    start:
    printf("                 Simple Movie Ticket Booking System\n");
	printf(" ==================================================================\n");
	printf("||             1- MOVIE TICKET                                    ||\n");
	printf("||             2- TRAIN TICKET:                                ||\n");
	printf("||             3- AIRLINES TICKET:                                   ||\n");
	printf("||             4- EXIT:                                           ||\n");
	printf("||                                                                ||\n");
	printf("||================================================================||\n");
	printf("  Enter your choice: ");
    int choice;
	scanf("%d",&choice);
	
	
	while(x!=7)
	{
		
		switch(choice)			//choice of ticket
		{
			case 1:
				movieticket();
				goto start;
				break;
			case 2:
			    trainticket();
				break;	
			case 3:	
				airlinesticket();
				break;
			case 4:
				x=7;
				break;
			default: 
				printf("Choice not available\n");
				break;	
		}
	}
    goto start;
    
}
void trainticket(){    //function for train ticket booking.
   
		system("cls"); 
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN TICKET RERS. SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");    
	printf(" \n Press any key to continue:");
	getch();	
    system("cls");
	int menu_choice,choice_return;
	start1:
	system("cls");
	printf("\n=================================\n");
	printf("    TRAIN RESERVATION SYSTEM");
	printf("\n=================================");
	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n2>> View All Available Trains");
	printf("\n------------------------");
	printf("\n3>> Cancel Reservation");
	printf("\n------------------------");
	printf("\n4>> Exit");
	printf("\n------------------------");
	printf("\n5>> Home");
	printf("\n------------------------");
	printf("\n\n-->");
	scanf("%d",&menu_choice);
	switch(menu_choice)
	{
		case 1:
			reservation1();		
			break;
		case 2:
			viewdetails1();
			printf("\n\nPress any key to go to Main Menu..");
			getch();
			break;
		case 3:
			cancel1();
            printf("\n\nPress any key to go to Main Menu..");
			getch();
			
			break;
		case 4:
			exit(0);
		case 5:
			main();

		default:
			printf("\nInvalid choice");
	}
	goto start1;
	return;
}
void viewdetails1(void)   //function for traindetails.
{  
	system("cls");
	printf("-----------------------------------------------------------------------------");	
	printf("\nTr.No\tName\t\t\tDestinations\t\tCharges\t\tTime\n");
	printf("-----------------------------------------------------------------------------");
	printf("\n1001\t Express1\tPATNA To DELHI\t\tRs.5000\t\t9am");
	printf("\n1002\t Express2\tDELHI To PATNA\t\tRs.5000\t\t12pm");
	printf("\n1003\t Express3\tPATNA To KOLKATA\tRs.4500\t\t8am");
	printf("\n1004\t Express4\tKOLKATA To PATNA\tRs.4500\t\t11am");
	printf("\n1005\t Express5\tPATNA To KOTA\t\tRs.4000\t\t7am");
	printf("\n1006\t Express6\tKOTA To PATNA\t\tRs.4000\t\t9.30am");
    printf("\n1007\t Express7\tPATNA To MUMBAI\t\tRs.3500\t\t1pm");	
    printf("\n1008\t Express8\tMUMBAI To PATNA\t\tRs.3500\t\t4pm");
    printf("\n1009\t Express9\tPATNA To MIRZAPUR\tRs.6000\t\t3.35pm");
    printf("\n1010\t Express10\tMIRZAPUR To PATNA\tRs.6000\t\t4.15pm");
}
/*********************************************RESERVATION()*************************************************/

void reservation1(void)			//function for train reservation.
{
	char confirm;
	int i=0;
	int charges=0;
	pd passdetails;
	FILE *fp;
	fp=fopen("seats_reserved.txt","a");
	system("cls");
	printf("\nEnter Number of seats:> ");
	scanf("%d",&passdetails.num_of_seats);
    for(int i=0;i<passdetails.num_of_seats;i++){
    printf("\nEnter Your Name:> ");
	
	scanf("%s",&passdetails.name);
	
	printf("\n\n>>Press Enter To View Available Trains<< ");
	getch();
	system("cls");
	viewdetails1();
	printf("\n\nEnter train number:> ");
	start1:
	scanf("%d",&passdetails.train_num);
	if(passdetails.train_num>=1001 && passdetails.train_num<=1010)
	{
		charges+=charge1(passdetails.train_num,passdetails.num_of_seats);
		
	}
	else
	{
		printf("\nInvalid train Number! Enter again--> ");
		goto start1;
	}
	
	printf("\n\nConfirm Ticket (y/n):>");
	start2:
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{	payment_gateway(charges);
		printticket1(passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);		
	fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);
		printf("==================");
		printf("\n Reservation Done\n");
		printf("\n==================\n");
		printf("\nPress any key to go back to Main menu");
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
            getch();
            goto start1;
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start2;
		}
	}
    }
	fclose(fp);
	getch();
}

/*********************************************CHARGE()*************************************************/

float charge1(int train_num,int num_of_seats)     //function describing charges details
{
		if (train_num==1001)
	{
		return(5000.0*num_of_seats);
	}
	if (train_num==1002)
	{
		return(5000.0*num_of_seats);
	}
	if (train_num==1003)
	{
		return(4500.0*num_of_seats);
	}
	if (train_num==1004)
	{
		return(4500.0*num_of_seats);
	}
	if (train_num==1005)
	{
		return(4000.0*num_of_seats);
	}
	if (train_num==1006)
	{
		return(4000.0*num_of_seats);
	}
	if (train_num==1007)
	{
		return(3500.0*num_of_seats);
	}
	if (train_num==1008)
	{
		return(3500.0*num_of_seats);
	}
	if (train_num==1009)
	{
		return(6000.0*num_of_seats);
	}
	if (train_num==1010)
	{
		return(6000.0*num_of_seats);
	}
}


/*********************************************PRINTTICKET()*************************************************/

void printticket1(char name[],int num_of_seats,int train_num,float charges)  //function for printing train tickets
{
	system("cls");
	printf("-------------------\n");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nTrain Number:\t\t%d",train_num);
	specifictrain1(train_num);
	printf("\nCharges:\t\t%.2f",charges);
}

/*********************************************SPECIFICTRAIN()*************************************************/

void specifictrain1(int train_num)		//function for specification of train.
{
	
	if (train_num==1001)
	{
		printf("\nTrain:\t\t\t Express1");
		printf("\nDestination:\t\tPATNA TO DELHI");
		printf("\nDeparture:\t\t9am ");
	}
	if (train_num==1002)
	{
		printf("\nTrain:\t\t\t Express2");
		printf("\nDestination:\t\tDELHI TO PATNA");
		printf("\nDeparture:\t\t12pm");
	}
	if (train_num==1003)
	{
		printf("\nTrain:\t\t\t Express3");
		printf("\nDestination:\t\tPATNA TO KOLKATA");
		printf("\nDeparture:\t\t8am");
	}
	if (train_num==1004)
	{
		printf("\nTrain:\t\t\t Express4");
		printf("\nDestination:KOLKATA TO PATNA\t\t");
		printf("\nDeparture:\t\t11am ");
	}
	if (train_num==1005)
	{
		printf("\nTrain:\t\t\t Express5");
		printf("\nDestination:\t\tPATNA TO KOTA");
		printf("\nDeparture:\t\t7am");
	}
	if (train_num==1006)
	{
		printf("\ntrain:\t\t\t Express6");
		printf("\nDestination:\t\tKOTA TO PATNA");
		printf("\nDeparture:\t\t9.30am ");
	}
	if (train_num==1007)
	{
		printf("\ntrain:\t\t\tExpress7");
		printf("\nDestination:\t\tPATNA TO BOMBAY");
		printf("\nDeparture:\t\t1pm ");
	}
	if (train_num==1008)
	{
		printf("\ntrain:\t\t\t Express8");
		printf("\n Destination:\t\tMUMBAI TO PATNA");
		printf("\nDeparture:\t\t4pm ");
	}
	if (train_num==1009)
	{
		printf("\ntrain:\t\t\t Express9");
		printf("\nDestination:\t\tPATNA TO MIRZAPUR");
		printf("\nDeparture:\t\t3.35pm ");
	}
	if (train_num==1010)
	{
		printf("\ntrain:\t\t\t Express10");
		printf("\nDestination:\t\tMIRZAPUR TO PATNA");
		printf("\nDeparture:\t\t1.15 ");
	}
}


void cancel1(void)      //fuction for cancellation of ticket.
{
	char name1[20],date[20];
	FILE*fp3=fopen("seats_reserved.txt","r");
	int t1,tn1,count1=0;
	float p1;
	 while (fscanf(fp3,"%s %d %d %f",name1,&t1,&tn1,&p1)==4)
    {   
            printf("%s %d %d %f\n",name1,t1,tn1,p1);
        }		
	  fclose(fp3);
	FILE *fp=fopen("seats_reserved.txt","r");
    FILE*fp2=fopen("temp.txt","w");
    int t,tn,count=0;
    int id;
    printf("enter id to cancel :");
    scanf("%d",&id);
    char name[20];
    float p;
    while (fscanf(fp,"%s %d %d %f",name,&t,&tn,&p)==4)
    {
        count++;
        if(count!=id){
            fprintf(fp2,"%s %d %d %f\n",name,t,tn,p);
        }
    }
    fclose(fp);
    fclose(fp2);
    remove("seats_reserved.txt");
    rename("temp.txt","seats_reserved.txt");
}

void airlinesticket()   //function for airlines ticket booking.
{
		system("cls"); 
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           AIRLINES TICKET RERS. SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
		
	    
	printf(" \n Press any key to continue:");
	
	getch();	
    system("cls");
//	login();
	int menu_choice,choice_return;
	start2:
	system("cls");
	printf("\n=================================\n");
	printf("    AIRLINES RESERVATION SYSTEM");
	printf("\n=================================");
	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n2>> View All Available Airlines");
	printf("\n------------------------");
	printf("\n3>> Cancel Reservation");
	printf("\n------------------------");
	printf("\n4>> Exit");
	printf("\n------------------------");
	printf("\n5>> Home");
	printf("\n------------------------");
	printf("\n\n-->");
	scanf("%d",&menu_choice);
	switch(menu_choice)          //switch for choices.
	{
		case 1:
			reservation2();		
			break;
		case 2:
			viewdetails2();
			printf("\n\nPress any key to go to Main Menu..");
			getch();
			break;
		case 3:
			cancel2();
            printf("\n\nPress any key to go to Main Menu..");
			getch();
			
		case 4:
			exit(0);
		case 5:
			main();
		default:
			printf("\nInvalid choice");
	}
	goto start2;
	return;
}
 



void viewdetails2(void)       //  airlines details.
{
	system("cls");
	printf("-----------------------------------------------------------------------------");	
	printf("\nTr.No\tName\t\t\tDestinations\t\tCharges\t\tTime\n");
	printf("-----------------------------------------------------------------------------");
	printf("\n1001\t airlines1\tPATNA To DELHI\t\tRs.5000\t\t9am");
	printf("\n1002\t airlines2\tDELHI To PATNA\t\tRs.5000\t\t12pm");
	printf("\n1003\t airlines3\tPATNA To KOLKATA\tRs.4500\t\t8am");
	printf("\n1004\t airlines4\tKOLKATA To PATNA\tRs.4500\t\t11am");
	printf("\n1005\t airlines5\tPATNA To KOTA\t\tRs.4000\t\t7am");
	printf("\n1006\t airlines6\tKOTA To PATNA\t\tRs.4000\t\t9.30am");
    printf("\n1007\t airlines7\tPATNA To MUMBAI\t\tRs.3500\t\t1pm");	
    printf("\n1008\t airlines8\tMUMBAI To PATNA\t\tRs.3500\t\t4pm");
    printf("\n1009\t airlines9\tPATNA To MIRZAPUR\tRs.6000\t\t3.35pm");
    printf("\n1009\t airlines10\tMIRZAPUR To PATNA\tRs.6000\t\t4.15pm");
}
/*********************************************RESERVATION()*************************************************/

void reservation2(void)			//airlines resevation.
{
	char confirm;
	int i=0;
	int charges=0;
	pd2 passdetails;
	FILE *fp;
	fp=fopen("seats_reservedplane.txt","a");
	system("cls");
	printf("\nEnter Number of seats:> ");
	scanf("%d",&passdetails.num_of_seats);
    for(int i=0;i<passdetails.num_of_seats;i++){
    printf("\nEnter Your Name:> ");
	scanf("%s",&passdetails.name);
	printf("\n\n>>Press Enter To View Available Trains<< ");
	getch();
	system("cls");
	viewdetails2();
	printf("\n\nEnter plane number:> ");
	start1:
	scanf("%d",&passdetails.airlines_num);
	if(passdetails.airlines_num>=1001 && passdetails.airlines_num<=1010)
	{
		charges=charge2(passdetails.airlines_num,passdetails.num_of_seats);
		
	}
	else
	{
		printf("\nInvalid Airline Number! Enter again--> ");
		goto start1;
	}
	
	printf("\n\nConfirm Ticket (y/n):>");
	start2:
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{	payment_gateway(charges);
		printticket2(passdetails.name,passdetails.num_of_seats,passdetails.airlines_num,charges);		
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",&passdetails.name,passdetails.num_of_seats,passdetails.airlines_num,charges);
		printf("==================");
		printf("\n Reservation Done\n");
		printf("==================");
		printf("\nPress any key to go back to Main menu");
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
            getch();
            goto start1;
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start2;
		}
	}
    }
	fclose(fp);
	getch();
}

/*********************************************CHARGE()*************************************************/

float charge2(int _num,int num_of_seats)  //function for charges.
{		num_of_seats=1;
		if (_num==1001)
	{
		return(5000.0*num_of_seats);
	}
	if (_num==1002)
	{
		return(5000.0*num_of_seats);
	}
	if (_num==1003)
	{
		return(4500.0*num_of_seats);
	}
	if (_num==1004)
	{
		return(4500.0*num_of_seats);
	}
	if (_num==1005)
	{
		return(4000.0*num_of_seats);
	}
	if (_num==1006)
	{
		return(4000.0*num_of_seats);
	}
	if (_num==1007)
	{
		return(3500.0*num_of_seats);
	}
	if (_num==1008)
	{
		return(3500.0*num_of_seats);
	}
	if (_num==1009)
	{
		return(6000.0*num_of_seats);
	}
	if (_num==1010)
	{
		return(6000.0*num_of_seats);
	}
}


/*********************************************PRINTTICKET()*************************************************/

void printticket2(char name[],int num_of_seats,int airlines_num,float charges)   //function for printing ticket.
{	num_of_seats=1;
	system("cls");
	printf("-------------------\n");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nAirline Number:\t\t%d",airlines_num);
	specifictrain2(airlines_num);
	printf("\nCharges:\t\t%.2f",charges);
}

/*********************************************SPECIFICTRAIN()*************************************************/

void specifictrain2(int airlines_num)      //function for specification of train.
{
	
	if (airlines_num==1001)
	{
		printf("\nPlane:\t\t\t Airline1");
		printf("\nDestination:\t\tPATNA TO DELHI");
		printf("\nDeparture:\t\t9am ");
	}
	if (airlines_num==1002)
	{
		printf("\nPlane:\t\t\t Airline2");
		printf("\nDestination:\t\tDELHI TO PATNA");
		printf("\nDeparture:\t\t12pm");
	}
	if (airlines_num==1003)
	{
		printf("\nPlane:\t\t\t Airline3");
		printf("\nDestination:\t\tPATNA TO KOLKATA");
		printf("\nDeparture:\t\t8am");
	}
	if (airlines_num==1004)
	{
		printf("\nPlane:\t\t\t Airline4");
		printf("\nDestination:KOLKATA TO PATNA\t\t");
		printf("\nDeparture:\t\t11am ");
	}
	if (airlines_num==1005)
	{
		printf("\nPlane:\t\t\t Airline5");
		printf("\nDestination:\t\tPATNA TO KOTA");
		printf("\nDeparture:\t\t7am");
	}
	if (airlines_num==1006)
	{
		printf("\nPlane:\t\t\t Express6");
		printf("\nDestination:\t\tKOTA TO PATNA");
		printf("\nDeparture:\t\t9.30am ");
	}
	if (airlines_num==1007)
	{
		printf("\nPlane:\t\t\tAirline7");
		printf("\nDestination:\t\tPATNA TO BOMBAY");
		printf("\nDeparture:\t\t1pm ");
	}
	if (airlines_num==1008)
	{
		printf("\nPlane:\t\t\t Airline8");
		printf("\n Destination:\t\tMUMBAI TO PATNA");
		printf("\nDeparture:\t\t4pm ");
	}
	if (airlines_num==1009)
	{
		printf("\nPlane:\t\t\t Airline9");
		printf("\nDestination:\t\tPATNA TO MIRZAPUR");
		printf("\nDeparture:\t\t3.35pm ");
	}
	if (airlines_num==1010)
	{
		printf("\nPlane:\t\t\t Airline10");
		printf("\nDestination:\t\tMIRZAPUR TO PATNA");
		printf("\nDeparture:\t\t1.15pm ");
	}
}
void cancel2(void)   		//function for cancelling the ticket.
{
	

	char name1[20],date[20];
	FILE*fp3=fopen("seats_reservedplane.txt","r");
	// FILE*fp2=fopen("temp2.txt","w");
	int t1,tn1,count1=0;
	float p1;
	 while (fscanf(fp3,"%s %d %d %f",name1,&t1,&tn1,&p1)==4)
    {
        
            printf("%s %d %d %f\n",name1,t1,tn1,p1);
        }
		
	  fclose(fp3);
	  //main();
	
 
	FILE *fp=fopen("seats_reservedplane.txt","r");
    FILE*fp2=fopen("temp2.txt","w");
    int t,tn,count=0;
    int id;
    printf("enter id to cancel :");
    scanf("%d",&id);
    char name[20];
    float p;
    while (fscanf(fp,"%s %d %d %f",name,&t,&tn,&p)==4)
    {
        count++;
        if(count!=id){
            fprintf(fp2,"%s %d %d %f\n",name,t,tn,p);
        }
    }
    fclose(fp);
    fclose(fp2);
    remove("seats_reservedplane.txt");
    rename("temp2.txt","seats_reservedplane.txt");	
}




int id2=1000;
int changeprize(int);
void reservation(int *,int,int );
int choice1(void);
void cancel(int *);        
void ticket1(int choice,char name[10],int id2,int price,char date[15]);
void ticket2(int choice,char name[10],int id2,int price,char date[15]);
void ticket3(int choice,char name[10],int id2,int price,char date[15]);
int cmovie(void);
int movie(void);
void details(void);
int count=0;

struct moviedetails{   //structure for movie ticket details.
	char name[25];
	char phone[15];
	int seat;
	int id;
};
struct moviedetails person[300];
void movieticket()   		//for movieticket 
{
	int choice,price=500,slection,i;
	int seat[3][101];
	for(int i=0;i<3;i++){
		for(int j=0;j<101;j++){
			seat[i][j]=0;
		}
	}
	int x;
	start2:
	//int choice;
	system("cls");
	printf("                 Simple Movie Ticket Booking System\n");
	printf(" ==================================================================\n");
	printf("||             1- To edit price of ticket (only admin):           ||\n");
	printf("||             2- To view reserved tickets :          			  ||\n");
	printf("||             3- To puchase ticket:                              ||\n");
	printf("||             4- To cancel the seat:                             ||\n");
	printf("||             5- Exit system:                                    ||\n");
	printf("||   		   6- Home         									  ||\n");
	printf("||================================================================||\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	
	
	while(x!=7)
	{
		
		switch(choice)       //switch for different choices.
		{
			case 1:
				price=changeprize(price);
				goto start2;
				break;
			case 2:
				details();
				break;	
			case 3:	
				slection=movie();
				reservation(seat[slection-1],price,slection);	
				count++;
				break;
			case 4:
				slection=cmovie();	
				cancel(seat[slection-1]);	
				break;
			case 5:
				x=7;
				break;
			case 6:
				main();
			default: 
				printf("Choice not available\n");
				break;	
		}
	}
}
int changeprize(int prize)			//function to change the price.
{
	adminlogin();
		printf("Please enter new price: ");
		scanf("%d",&prize);
		system("PAUSE");
		system("CLS");
	
	
	return prize;
	
}
void reservation(int *array,int price,int slection)
{                   //function for movieticket reservation.
		int i,j;
		char date[15];
		printf("\n                                SCREEN\n\n\n");
		for (i=1;i<=100;i++)
		{
			if (array[i]==0)
				printf("%d\t",i);
			else 
				printf("*\t");	
			if(i%10==0)
				printf("\n\n");
		}
		printf("Please enter your name: ");
		scanf(" %s",&person[count].name);
		printf("Please enter your phone number: ");
		scanf("%u",&person[count].phone);
		printf("Please enter Date: ");
		scanf("%s",date);
		printf("Which seat number you want? ");
		scanf("%d",&j);
		if (j>100||j<1)
			{
				printf("seat1 number is unavailable in this theater\n");
				printf("Please re-enter seat number: ");
				scanf("%d",&j);
			}
		if (array[j]==1)
			{
				printf("Sorry, this ticket is already booked! Please choose another seat.\n");
				scanf("%d",&j);
			}
		else			
			array[j]=1;
		person[count].seat=j;
		FILE *fp=fopen("movieticket.txt","a");
		fprintf(fp,"%d %s %s\n",id2,person[count].name,date);
		fclose(fp);
		payment_gateway(price);
		if (slection==1)
			ticket1(j,person[count].name,id2,price,date);
		else if (slection==2) 	
			ticket2(j,person[count].name,id2,price,date);
		else 
			ticket3(j,person[count].name,id2,price,date);			
		id2++;

		system("pause");
		system("cls");	
		movieticket();
		//main();
		
}
int choice1(void) 		//ticket movie choice.
{
	int choice;
	start:
	
	printf("                 Simple Movie Ticket Booking System\n");
	printf(" ==================================================================\n");
	printf("||             1- To edit price of ticket (only admin):           ||\n");
	printf("||             2- To view reserved tickets :          			  ||\n");
	printf("||             3- To puchase ticket:                              ||\n");
	printf("||             4- To cancel the seat:                             ||\n");
	printf("||             5- Exit system:                                    ||\n");
	printf("||   		   6- Home         									  ||\n");
	printf("||================================================================||\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	return choice;
}
void details2(void)    //details of booked seats.
{
	int Cseat,bid,count=0;
	char name[20],date[20];
	FILE*fp=fopen("movieticket.txt","r");

	  while (fscanf(fp,"%d %s %s",&bid,name,date)==3)
	  {
		printf("%d %s %s \n",bid,name,date);
		}
		
	  fclose(fp);
	
	
}       
void cancel(int *array)    //for cancelling movie ticket.
{	
		details2();
		
      int Cseat,bid,count=0;
	  char name[20],date[20];
	  printf("Please enter ID number of ticket: ");
	  scanf("%d",&Cseat);
	  FILE*fp=fopen("movieticket.txt","r");
	  FILE*fp2=fopen("temp2.txt","w");
	  
	  while (fscanf(fp,"%d %s %s",&bid,name,date)==3)
	  {
		count++;
		if (count!=Cseat)
		{
			fprintf(fp2,"%d %s %s \n",bid,name,date);
		}
		
	  }
	  fclose(fp);
	  fclose(fp2);
	  remove("movieticket.txt");
	  rename("temp2.txt","movieticket.txt");
	  printf("YOUR TICKET IS CANCELLED!!!\n");
	  printf("Your money will be returned within 14 working days!!\n");
	  printf("THANK YOU!!!!");
	  movieticket();
	  
	  
}
void ticket1(int choice,char name[10],int id2,int price,char date[15])   //printing movie 1 ticket.
{
		system("cls");
		printf("\n\n");
        printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name : PUSHPA:THE RISE\n",id2);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                              Date      : %s\n",date);
        printf("\t                                              Time      : 08:00pm\n");
        printf("\t                                              Hall      : 02\n");
        printf("\t                                              seats No. : %d  \n",choice);
        printf("\t                                              price . : %d  \n\n",price);
		person[count].id=id2;
        printf("\t============================================================\n");

        return;
}
void details(void)
{
	int Cseat,bid,count=0;
	char name[20],date[20];
	FILE*fp=fopen("movieticket.txt","r");

	  while (fscanf(fp,"%d %s %s",&bid,name,date)==3)
	  {
		printf("%d %s %s \n",bid,name,date);
		}
		
	  fclose(fp);
	  movieticket();
	
}             
int movie(void)			//function for asking which movie the costumer wants to see.
{
	int i;
	// system("cls");
	printf("\t\t\twhich movie you want to see?\n");
	printf("\t\t\t----------------------------\n\n");
	printf("\t\t\tpress 1 PUSHPA\n\n");
	printf("\t\t\tpress 2 BAHUBALI\n\n");
	printf("\t\t\tpress 3 SALAAR\n");
	scanf("%d",&i);
	system("cls");
	return i;
}
void ticket2(int choice,char name[10],int id2,int price,char date[15])   //second movie ticket print.
{
		system("cls");
		printf("\n\n");
        printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name : BAHUBALI\n",id2);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                              Date      : %s\n",date);
        printf("\t                                              Time      : 09:00pm\n");
        printf("\t                                              Hall      : 03\n");
        printf("\t                                              seats No. : %d  \n",choice);
        printf("\t                                              price . : %d  \n\n",price);
        person[count].id=id2;
        printf("\t============================================================\n");
		
        return;
}
int cmovie(void)      //to cancel movie ticket.
{
	int i;
	printf("\t\t\twhich movie ticket you want to cancel\n");
	printf("\t\t\t-------------------------------------\n");
	printf("\t\t\tpress 1 for PUSHPA\n\n");
	printf("\t\t\tpress 2 for BAHUBALI\n\n");
	printf("\t\t\tpress 3 for SALAAR\n");
	scanf("%d",&i);
	return i;		
}
void ticket3(int choice,char name[10],int id2,int price,char date[15])			//to cancel movie 3.
{
		system("cls");
		printf("\n\n");
        printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name : SALAAR \n",id2);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                              Date      : %s\n",date);
        printf("\t                                              Time      : 10:00pm\n");
        printf("\t                                              Hall      : 04\n");
        printf("\t                                              seats No. : %d  \n",choice);
        printf("\t                                              price . : %d  \n\n",price);
        person[count].id=id2;
        printf("\t============================================================\n");
			
        return;
}



