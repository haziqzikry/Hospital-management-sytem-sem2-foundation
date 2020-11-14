#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define scale 5

struct ad
{	// Declaring Global Arrays
    char name[100];
    char disease[100];
    char specialisation[100];
    char education[100];
 	char date[100];
 	char t[100];

 	// Declaring Global Int Variable
    int studentid,age;
    long long ic,phone;
} x[100];

int n,i,j=0,a=0,sum=0,g,num,num2,sum2=0,num3,sum3=0,y,z;
int ch,ch1,ch2,ch3,ch4 ;
int noMedicalApp[100],add,opt,AppOpt,frequency;

int storeditems(int equstorage[], int medstorage[]);

// Declaring Global Arrays
int equstorage[scale] = {0};
int medstorage[scale] = {0};

// Function Prototype
void  StaffInfo() ;
void PatientInfo();
void Appointment () ;
void EmergencyManagement();
int Inventory ();

/* DONE BY MOHAMAD HAZIQ ZIKRY BIN MOHAMMAD RAZAK 2019223486 */
int main()
{

    while(ch!=6) // While looping
    {
    printf("\n\t **** Hospital UiTM Dengkil Management System ****");
	printf("\n\n\n\t\t\tMAIN MENU\n\t\t========================\n\t\t[1] Patient information\n\t\t[2] Staff Information\n\t\t[3] Appointment and Scheduling\n\t\t[4] Emergency Management\n\t\t[5] Inventory\n\t\t[6] Exit\n\t\t========================\n\t\t");
    printf("Enter the choice: ");
    scanf("%d",&ch); // Accepting any integer input

		fflush(stdin);//making it clear
		switch (ch)
		{
        case 1:  //calling patient function
            system("cls");
            PatientInfo();
            break ; //stopping any lines of code below to be executed
        case 2:  //calling staff function
            system("cls");
            StaffInfo();
        	break ; //stopping any lines of code below to be executed
        case 3:  //calling appointment function
            system("cls");
            Appointment () ;
        	break ; //stopping any lines of code below to be executed
     	case 4:  //calling emergency function
            system("cls");
            EmergencyManagement();
        	break ; //stopping any lines of code below to be executed
        case 5: //calling inventory function
            system("cls");
             Inventory ();
        	break ; //stopping any lines of code below to be executed
        case 6:
        	printf("Exitting... ");
        	break; //stopping any lines of code below to be executed
       default:
           printf("\n\nInvalid input , try again by using valid inputs");
       break ; //stopping any lines of code below to be executed
   	}
        printf("\n\n"); // new lines
    }
}

/* DONE BY MOHAMAD HAZIQ ZIKRY BIN MOHAMMAD RAZAK 2019223486 */
void PatientInfo()
{
	// declaring local variables
	 int f,h;

	printf("\nPATIENT INFORMATION");
	printf("\nONLY FOR STUDENTS");
	printf ("\n\n1. Add Patient Information\n2. View Patient Information\n3. Delete Patient Information");
	printf ("\n\nEnter choice:  ")	;
	scanf ("%d" , &ch1);
		if(ch1 == 1)
		{
    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",num);//how many inputs
    printf("How many entry do you want to add=\n");
    scanf("%d",&n);
    sum=n+num;

    for(i=num,j=0; i<sum; i++)
    {
        printf("\n");
        fflush(stdin) ;
        printf("Enter patient's Name = ");
        gets(x[i].name);       // accepting string input to store as name
        printf("Enter disease = ");
        gets(x[i].disease);	 // accepting string input to store as disease
        printf("Enter the IC Number (if IC starts with '0' , write the IC number after it) = ");
        scanf("%lld",&x[i].ic);
        printf("Enter Student ID = ");
        scanf("%d",&x[i].studentid); // accepting integer input to store as studentid
        printf("Enter phone number (start with number after +60) = ");
        scanf("%lld",&x[i].phone);
        printf("\n");

        //postfix
        j++;
        a++;
        num++;
    }
}
	else if (ch1 == 2)
{
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(x[i].name); // displaying the output which is stored inside name
        printf("Disease = ");
        puts(x[i].disease); // displaying the output which is stored inside disease
        printf("Student ID = %d\nPhone Number = %lld\nIC Number=%lld",x[i].studentid,x[i].phone,x[i].ic); // Displaying student id and phone number
        printf("\n\n");
    }
}
	else if (ch1 == 3)
{
	   printf("Enter the serial number of the patient that you want to delete=");
    scanf("%d",&f); // accepting the stored serial number to be removed
    if(f<num)
    {
        printf("What do you want to remove?\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove Disease\n4.Remove IC\n5.Remove Student ID\n6.Remove Phone Number\nOption = ");
        scanf("%d",&h); // accepting int number to remove certain option
        if(h==1)
        {
            while(f<num)
            {
            	// string copy
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].disease,x[f+1].disease);
                x[f].ic=x[f+1].ic;
                x[f].studentid=x[f+1].studentid;
                x[f].phone=x[f+1].phone;
                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(x[f].disease,"Cleared");
        }
        else if(h==4)
        {
            x[f].ic=0;
        }
        else if(h==5)
        {
            x[f].studentid=0;
        }
        else if(h==6)
        {
            x[f].phone=0;
        }

    }
    else
        printf("\n\nInvalid Serial number\n"); // Displaying Error Message
}

}

/* DONE BY NUR AINA HANAN BINTI SHAMEL JOHAIDEE 2019220756 */
void StaffInfo ()
{
 int q,p; // declaring variables q and p
 	printf("\nSTAFF INFORMATION");
	printf ("\n\n1. Add Staff information\n2. View Staff Information\n3. Staff Information");
	printf ("\n\nEnter choice:  ")	;
	scanf ("%d" , &ch2);

		if(ch2 == 1)
		{
	printf("Already data inputed on the database =%d\n\n",num2);//how many inputs
    printf("How many entry do you want to add=\n");
    scanf("%d",&n);
    sum2=n+num2; // adding up n + num2 as a total of sum2

    for(y=num2,j=0; y<sum2; y++) // for looping
    {
      	printf("\n");
        fflush(stdin) ;
        printf("Enter Staff's Name = ");
        gets(x[y].name);    // storing any string input in name
		   printf("Enter Education =") ;
        gets(x[y].education); // storing any string input in education
		   printf("Enter Specialisation = ");
        gets(x[y].specialisation); // storing any string input in specialisation
        printf("Enter Phone Number (enter with number after +60) = ");
        scanf("%lld",&x[y].phone); // storing any integer input in phone
          printf("Enter Age = ");
        scanf("%d",&x[y].age); // storing any integer input in age
        printf("\n");
        // Postfix
        j++;
        a++;
        num2++;
    }
}
	else if (ch2 == 2)
		{
    for(y=0; y<num2; y++) // for looping
    {
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(x[y].name);    // displaying output that is stored in name
        printf("Education = ");
        puts(x[y].education); // displaying output that is stored in education
        printf("Specialisation = ");
        puts(x[y].specialisation); // displaying output that is stored in specialisation
        printf("Phone Number = %lld\nAge= %d",x[y].phone,x[y].age); // displaying phone number and age
        printf("\n\n"); // new lines
    }
}
	else if (ch2 == 3)
	{
    printf("Enter the serial number of the staff that you want to delete=");
    scanf("%d",&q); // accepting integer input to stored in variable q
    if(q<num2) // if statements
    {
        printf("What do you want to remove?\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove Education\n4.Remove Specialisation\n5.Remove Phone Number\n6.Remove Age\nOption = ");
        scanf("%d",&p);  // accepting integer input to stored in variable q
        if(p==1)
        {
            while(q<num2) // q<num2
            {
            	//string copy
                strcpy(x[q].name,x[q+1].name);
                strcpy(x[q].education,x[q+1].education);
                strcpy(x[q].specialisation,x[q+1].specialisation);
                x[q].phone=x[q+1].phone;
                x[q].age=x[q+1].age;
                q++;
            }
            num2--;
        }
        else if(p==2)
        {
            strcpy(x[q].name,"Cleared");
        }
        else if(p==3)
        {
            strcpy(x[q].education,"Cleared");
        }
        else if(p==4)
        {
            strcpy(x[q].specialisation,"Cleared");
        }
        else if(p==5)
        {
            x[q].phone=0;
        }
        else if(p==6)
        {
            x[q].age=0;
        }

    }
    else
        printf("\n\nInvalid Serial number\n"); // Displaying Error Message
}
	}

/* DONE BY NURUL KHALISAH BINTI ABD KHALIL 2019271688 */
void Appointment ()
{

	int ApptDelf,ApptDel ;

		printf("\nAPPOINTMENT AND SCHEDULING");
		printf("\nAPPOINTMENT AND SCHEDULING ARE ONLY FOR STUDENTS");
	printf ("\n\n1. Add New Appointment\n2. View Appointment\n3. Delete Appointment");
	printf ("\n\nEnter choice:  ")	;
	scanf ("%d" , &ch3); // accepting integer input stored in ch3

		if(ch3 == 1)
		{
    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",num3);//how many inputs
    printf("How many entry do you want to add = ");
    scanf("%d",&n); // adding numbers of entry
    sum3=n+num3; // adding n + num3 as total of sum3

      for(z=num3,j=0; z<sum3; z++) // for looping
      {
        printf("\n");
        fflush(stdin) ;
        printf("Enter Student's Name = ");
        gets(x[z].name); // storing string input in name
        printf("Enter Student ID = ");
        scanf("%d",&x[z].studentid);
        printf("Enter the IC Number (if IC starts with '0' , write the IC number after it)= ");
        scanf("%lld",&x[z].ic);
        printf("Enter Phone Number (start with number after +60) = ");
        scanf("%lld",&x[z].phone);
         fflush(stdin) ;
       	printf("Enter Date Of Appointment (DD MM YYYY) = ");
        gets(x[z].date); // storing string input in date
        printf("Enter Time of Appointment (Only from 0800 to 1700 hours only) = ");
        gets(x[z].t); // storing string input in t
        printf("\n");
        //postfix
        j++;
        a++;
        num3++;
      }
    }

	  else if (ch3 == 2)
    {
      for(z=0; z<num3; z++) // for looping
      {
        printf("\n");
        printf("Serial Number=%d\n",z);
        printf("Name = ");
        puts(x[z].name); // displaying output stored from name
        printf("Student ID = %d\nPhone Number = %lld\nIC Number=%lld",x[z].studentid,x[z].phone,x[z].ic);
        printf("\nDate = ");
        puts(x[z].date); // displaying output stored from date
        printf("Time = ");
        puts(x[z].t); // displaying output stored from t
        printf("\n\n");
      }
    }

	  else if (ch3 == 3)
    {
	    printf("Enter the serial number of the appointment that you want to delete=");
      scanf("%d",&ApptDelf); // Accepting integer input to remove a serial number

      if(ApptDelf<num3)
      {
        printf("What do you want to remove?\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Student ID\n4.Remove IC\n5.Remove Phone Number\n6.Remove Date\n7.Remove Time\nOption = ");
        scanf("%d",&ApptDel);

        if(ApptDel==1) // if statement
        {
            while(ApptDelf<num3) // while looping
            {
            	// string copying
                strcpy(x[ApptDelf].name,x[ApptDelf+1].name);
                x[ApptDelf].studentid=x[ApptDelf+1].studentid;
                x[ApptDelf].ic=x[ApptDelf+1].ic;
                x[ApptDelf].phone=x[ApptDelf+1].phone;
                strcpy(x[ApptDelf].date,x[ApptDelf+1].date);
                strcpy(x[ApptDelf].t,x[ApptDelf+1].t);
                ApptDelf++;
            }
            num3--;
        }
        else if(ApptDel==2)
        {
            strcpy(x[ApptDelf].name,"Cleared"); // string copy

        }
        else if(ApptDel==3)
        {
            x[ApptDelf].studentid=0;
        }
        else if(ApptDel==4)
        {
            x[ApptDelf].ic=0;
        }
        else if(ApptDel==5)
        {
            x[ApptDelf].phone=0;
        }
        else if(ApptDel==6)
        {
            strcpy(x[ApptDelf].date,"Cleared"); // string copy
        }
        else if(ApptDel==7)
        {
            strcpy(x[ApptDelf].t,"Cleared"); // string copy
        }

    }
    else
        printf("\n\nInvalid Serial number\n"); // Print Error Message
}
}

/* DONE BY MUHAMMAD ADAM KAMIL BIN MOHD ZAID 2019428558 */
void EmergencyManagement()
{

// Declaring local variables and arrays
char name [50];
int id;
int phone;
char date [50];
int t;

	printf("\nEMERGENCY MANAGEMENT");
	printf("\n\n[1] Ambulance Booking\n[2] Medical Team Booking\n\n--> ");
	scanf("%d",&ch4);	//accept input from user
	while(!(ch4==1||ch4==2))	//validate the value entered
	{
		printf("\n\n\nPlease enter a valid value");
		printf("\n\n[1] Ambulance Booking[2] Medical Team Booking\n\n--> ");
		scanf("\n%d",&ch4);	//accept input from user
	}
	if(ch3==1)
	{
		printf("\n\nAMBULANCE BOOKING");
		printf("\n\nPlease enter your LAST Name\n-->");
		scanf("%s",&name);
		printf("\nPleaase enter your student ID\n-->");
		scanf("%d",&id);
		printf("\nPlease enter your phone number\n-->");
		scanf("%lld",&phone);
		printf("\nPlease enter the date you want to book\n(DD/MM/YYYY)\n-->");
		scanf("%s",&date);
		printf("\nPlease enter the time you want to book\n(Only from 0800 to 1700 hours only) (use 24 hours format HHMM)\n-->");
		scanf("%lld",&t);
		printf("\nYOUR BOOKING IS SUCCESFUL. THANK YOU");
	}
	else {
		printf("\n\nMEDICAL TEAM BOOKING");
		printf("\n\nPlease enter your LAST Name\n-->");
		scanf("%s",&name);
		printf("\nPleaase enter your student ID\n-->");
		scanf("%d",&id);
		printf("\nPlease enter your phone number\n-->");
		scanf("%lld",&phone);
		printf("\nPlease enter the date you want to book\n(DD/MM/YYYY)\n-->");
		scanf("%s",&date);
		printf("\nPlease enter the time you want to book\n(Only from 0800 to 1700 hours only) (use 24 hours format HHMM)\n-->");
		scanf("%lld",&t);
		printf("\nYOUR BOOKING IS SUCCESFUL. THANK YOU");
	}
}

/* DONE BY MUHAMMAD SULAIMAN DAUD SYU'AIB BIN YAACOB 2019271688 */
int Inventory ()	// function definition
{
	printf("\n Add Medical Appliances [1]\n Add Medicine [2]\n View Storage [3]\n >> ");
	scanf("%d",&AppOpt);	// accept any integer input from user

	if(AppOpt == 1) // 1st choice Medical Appliances
	{
		do
		{
		system("cls");
		printf("\n What medical equipments do you want to store? :\n 1.Syringes \n 2.Splints \n 3.Sterilizers \n 4.First Aid Kit \n 5.Antiseptic \n =>  ");
		scanf("%d",&noMedicalApp[frequency]);	// acts as a frequency
		system("cls");	// will clear all screen back to its original state

		if(noMedicalApp[frequency] >= 6) // if 6 were to be inputted it will print an error message
		{
			printf("\n Invalid Input! \n");
			Inventory (); // calling function
		}

		printf(" Amount > ");
		scanf("%d",&add);	// accepting any input as an amount of certain equipments or medicine
		equstorage[noMedicalApp[frequency]] += add; // adding the ammount to the storage

		system("cls");
		printf("\nDo you want to add another? : \n 1.Yes \n 2.No \n => ");
		scanf("%d",&opt);

		} while(opt == 1); // looping to create a sub-menu
		return main(); // calling function main();
	}
	else if (AppOpt == 2) //2nd choice (medicine)
	{
		do
		{
		system("cls");
		printf("\n What medicine do you want to store? :\n 1.Aspirin \n 2.Paracetamol \n 3.Penicillin \n 4.Stimulant \n 5.Antipsychotics \n =>  ");
		scanf("%d",&noMedicalApp[frequency]);
		system("cls");

		if(noMedicalApp[frequency] >= 6)
		{
			printf("\n Invalid Input! \n");
			Inventory ();
		}

		printf(" Amount > ");
		scanf("%d",&add);
		medstorage[noMedicalApp[frequency]] += add;

		system("cls");
		printf("\nDo you want to add more? : \n 1.Yes \n 2.No \n => ");
		scanf("%d",&opt);

		} while(opt == 1);
		return main();
	}
	else if (AppOpt == 3) // 3rd choice storage
	{
		int con; //declaring a variable con known as continue

		system("cls");
		printf("\n				 ***STORAGE*** \n-------------------------------------------------------------------------------------- ");
		printf("\n Medical Appliance\t  Amount Stored\t\t  Medicine\t  Amount Stored");
		printf("			   \n1. Syringe			%d		1. Aspirin		%d",equstorage[1],medstorage[1]);
		printf("			   \n2. Splint			%d		2. Paracetamol		%d",equstorage[2],medstorage[2]);
		printf("			   \n3. Sterilizer			%d		3. Penicillin		%d",equstorage[3],medstorage[3]);
		printf("			   \n4. First Aid Kit		%d		4. Stimulant		%d",equstorage[4],medstorage[4]);
		printf("			   \n5. Thermometer			%d		5. Antipsychotics       %d",equstorage[5],medstorage[5]);
		printf("\n-------------------------------------------------------------------------------------- ");

	printf("\n\nDo you want to continue? \n 1.Yes \n 2.No \n >> ");
	scanf("%d",&con);

	if(con == 1)
	return Inventory ();
	else if (con == 2)
	 main () ;
	else
	printf("\n Invalid Input! \n ");
	}
	else
	{
		printf("\n Invalid input\n ");
		Inventory ();
	}

}
