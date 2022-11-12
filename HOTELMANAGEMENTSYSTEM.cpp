#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct Hotel {
    char yes[50];
    char no[50];
};
struct Feat {
    int size;
    char perk[120];
    int timing;
    };
struct Details {
    char name[20]; 
    char phone[11];
    char room[3];
};
struct Hotels{
    char    customer_name[20];
    char    address[20];
    int     period_of_stay;
    char    types_of_room[10];
    float   tax;
    float   room_charges;
};
struct Menu
{int numnum;
char item[24]; 
 int cost;
};
struct Pays
{
    char names[50];
};
void display(struct Menu *p);
int main()
{
    printf("\n_____________HOTEL TRANSYLVANIA WELCOMES YOU____________ ");
    
    while(1)
    {   int choice;
        printf("\n\n\nPRESS 1 TO GET THE AVAILABILITY OF HOTEL ROOMS");
        printf("\nPRESS 2 TO KNOW BASIC ROOM AMENITIES");
        printf("\nPRESS 3 TO BOOK/REBOOK YOUR ROOM/ROOMS");
        printf("\nPRESS 4 FOR CUSTOMER DETAILS AND INVOICES");
        printf("\nPRESS 5 TO CANCEL YOUR BOOKINGS");
        printf("\nPRESS 6 FOR RESTAURANT MENU AND BILLS");
        printf("\nEnter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
    {
	        case 1:{
            int x=20;
      struct Hotel hotel1;
      struct Hotel *hotelptr;
      hotelptr=&hotel1;
      strcpy(hotel1.yes , "rooms are available");
      strcpy(hotel1.no , "\nRooms are not available");
if(x!=0)
      {printf("\n%d %s",x,hotelptr->yes); 
}else
     {printf("%s",hotelptr->no);}
            break;}
        case 2:{
				struct Feat suite;
     suite.size = 40;
     strcpy(suite.perk,"with en suite shower/WC, hair dryer, balcony, double bed and sofa bed, cable TV, radio, safe and free WiFi");
     suite.timing=24;
     printf("Size approx. %d square metres %s\n",suite.size,suite.perk);
     printf("%d hour butler service available",suite.timing);
            
              break;}
        case 3:{
			FILE* enter;
struct Details h;
h.name;
h.phone;
h.room;
                        printf("Enter your name: ");
                        scanf("%s",h.name);
                        printf("Enter your phone number: ");
                        scanf("%s",h.phone);
                        printf("Enter room to book: ");
                        scanf("%s",h.room);
                        enter = fopen("bookings.txt","a"); 
						fprintf(enter,"%s %s %s",h.name,h.phone,h.room);
                        fprintf(enter,"\n");
                        printf("\nSuccesfully requested booking. \n");
                        printf("\nYour passcode is 5431. \n");
                        fclose(enter);
               
                break;}
        
            case 4:{
            int amnt=11750;
            struct Hotels  d;        //structure variable
    struct Hotels  *point;       //pointer to Hotels structure
     
    point= &d;                  //assigning value of structure variable
    	fflush(stdin); 
    printf("\nEnter customer name:\n ");      
	scanf("%[^\n]",point->customer_name);
    printf("\nEnter address(your hometown): \n"); 
	fflush(stdin);             
	scanf("%[^\n]",point->address);
    printf("\nEnter period of stay in days:\n ");       
	scanf("%d",&point->period_of_stay);
    printf("\nEnter type of room:  \n");
	fflush(stdin);        
	scanf("%[^\n]",point->types_of_room);
	d.tax=(amnt / 100) * 8;
	d.room_charges=d.period_of_stay*(amnt+d.tax);
	printf("\n\n |***************************** Hotel Transylvania ***********************************|\n");
    printf("\nRoom for a day costs you %d",amnt);
	printf("\nEntered details are: \n");
    printf("\nName:%s \nAddress:%s \nPeriod of stay in hours:%d \nType of room:%s \nGst:%.02f \nRoom charges: %.02f\n",point->customer_name,point->address,point->period_of_stay,point->types_of_room,point->tax,point->room_charges);

             break;}
                
            case 5:{
            int p;

 printf("\nPlease enter your passcode\n");
 scanf("%d",&p);
if  (p==5431){

    remove("bookings.txt");

	printf("\n\nRoom deallocated succesfully");}
else 
{
	printf("\n\nUnable to deallocate your room now,please try later and invalid passcode.\nIf you forget the passcode,contact our helpdesk.");
}
            
                break;}
                
            case 6:{
struct Menu one;
one.numnum=1;
strcpy(one.item,"South Indian Platter");
one.cost=229;
struct Menu two;
two.numnum=2;
strcpy(two.item,"Paneer Rava Masala Dosa");
two.cost=190;
struct Menu three;
three.numnum=3;
strcpy(three.item,"Paneer Dosa");
three.cost=181;
struct Menu four;
four.numnum=4;
strcpy(four.item,"Rawa Masala Dosa");
four.cost=162;
struct Menu five ;
five.numnum=5;
strcpy(five.item,"Plain Rava Dosa");
five.cost=143;
struct Menu six;
six.numnum=6;
strcpy(six.item,"Masala Dosa");
six.cost=143;
struct Menu seven;
seven.numnum=7;
strcpy(seven.item,"Plain Dosa");
seven.cost=119;
struct Menu eight;
eight.numnum=8;
strcpy(eight.item,"Onion Uttapam");
eight.cost=143;
struct Menu nine;
nine.numnum=9;
strcpy(nine.item,"Mixed Veg Uttapam");
nine.cost=143;
struct Menu ten;
ten.numnum=10;
strcpy(ten.item,"Sambhar Idli ");
ten.cost=81;
struct Menu eleven;
eleven.numnum=11;
strcpy(eleven.item,"Sambhar Vada");
eleven.cost=81;
struct Menu twelve;
twelve.numnum=12;
strcpy(twelve.item,"Pesarattu");
twelve.cost=70;
struct Menu thirteen;
thirteen.numnum=13;
strcpy(thirteen.item,"Bhindi");
thirteen.cost=120;
struct Menu fourteen;
fourteen.numnum=14;
strcpy(fourteen.item,"Gongura Pachadi");
fourteen.cost=100;
struct Menu fifteen;
fifteen.numnum=15;
strcpy(fifteen.item,"Pulihora");
fifteen.cost=100;
struct Menu sixteen;
sixteen.numnum=16;
strcpy(sixteen.item,"Rice Bowl");
sixteen.cost=90;
struct Menu seventeen;
seventeen.numnum=17;
strcpy(seventeen.item,"Andhra Thali");
seventeen.cost=1999;
struct Menu eighteen;
eighteen.numnum=18;
strcpy(eighteen.item,"Payasam");
eighteen.cost=999;
struct Menu nineteen;
nineteen.numnum=19;
strcpy(nineteen.item,"Turkish Delight");
nineteen.cost=320;
struct Menu twenty;
twenty.numnum=20;
strcpy(twenty.item,"Lokma");
twenty.cost=245;
struct Menu twentyone;
twentyone.numnum=21;
strcpy(twentyone.item,"Booralu");
twentyone.cost=169;
struct Menu twentytwo;
twentytwo.numnum=22;
strcpy(twentytwo.item,"Jeeper's Card");
twentytwo.cost=10000;
display(&one);
display(&two);
display(&three);
display(&four);
display(&five);
display(&six);
display(&seven);
display(&eight);
display(&nine);
display(&ten);
display(&eleven);
display(&twelve);
display(&thirteen);
display(&fourteen);
display(&fifteen);
display(&sixteen);
display(&seventeen);
display(&eighteen);
display(&nineteen);
display(&twenty);
display(&twentyone);
printf("\n\n____________________Beverages   ");
display(&twentytwo);
 printf("\n\tBuy  this and get unlimited access to the world's best drinks like soft drinks,mocktails and");
 printf("\n\tthe finest wine ever for a day.");
 struct Pays s[10];

    int i = 1, num,n,price, gst = 0, total = 0,quant=0;
    char ch[50];
    //clrscr();

   
    printf("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    printf("\n CUSTOMER INFORMATION :\n ");
    printf("\n Customer Name: ");
    scanf("%s", s[1].names);

    
    printf("\n ******************************************************************************* \n\n");

    printf("\n Enter the name of items: ");
    scanf("%s", ch);
    fflush(stdin);
    printf("\n Enter the number of item: ");
    fflush(stdin);
    scanf("%d", &n);


    printf("\n Enter the Quantity of items: ");
    scanf("%d", &quant);
    
    switch (n)
    {
    case 1:
        n = 229;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 2:
        n = 190;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 3:
        n = 181;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 4:
        n = 162;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 5:
        n = 143;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 6:
        n = 143;
        gst = (n / 100) * 18;
        total = n + gst;
        break;
    case 7:
        n = 119;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 8:
        n = 143;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 9:
        n = 143 ;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 10:
        n = 81 ;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 11:
        n = 81;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 12:
        n = 70;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 13:
        n = 120;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 14:
        n = 100;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 15:
        n = 100;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 16:
        n = 90;
        gst = (n / 100) * 18;
        total = n + gst;
        break;
    case 17:
        n = 1999;
        gst = (n / 100) * 18;
        total = n + gst;
        break;
    case 18:
        n = 999;
        gst = (n / 100) * 18;
        total = n + gst;
        break;
    case 19:
        n = 320;
        gst = (n / 100) * 18;
        total = n + gst;
        break;
    case 20:
        n = 245;
        gst = (n / 100) * 18;
        total = n + gst;
        break;
    case 21:
        n = 169;
        gst = (n / 100) * 18;
        total = n + gst;
        break;
    case 22:
        n = 10000;
        gst = (n / 100) * 18;
        total = n + gst;
        break;
    default :
         printf("Invalid entry please try again");
    }
//Gst will applicable only on 100rs or above,on one purchase.
    printf("\n\n |***************************** Hotel Transylvania ***********************************|\n");

    printf("\n Customer name: %s\n", s[1].names);

    printf("\n  Item       Quantity    Price     Gst     Total\n");
    printf("\n  %s  \t  %d  \t   %4d   \t  %4d     %4d \n", ch, quant,n, gst, total*quant);

    
    
    printf("\nThank you, please visit HOTEL TRANSYLVANIA again.\n");

    getch();
 printf("\n HOTEL TRANSYLVANIA always welcomes you.\n");}
 break;}
 }
 

return 0;}
void display(struct Menu *p){
   printf("\n\t%d.%s	    \tRs%d",p->numnum,p->item,p->cost);
}
