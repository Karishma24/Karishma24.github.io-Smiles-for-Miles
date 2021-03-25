# include <fstream.h>
# include <stdio.h>
# include <conio.h>
void title();
void details();
int choice();
void processing();
void movie();
void airways();
void railways();
void main()
{
clrscr();
int a;
title();
details();
processing();
clrscr();
title();
repo:
a=choice();
if(a==1)
{
movie();
}
if(a==2)
{
railways();
}
if(a==3)
{
airways();
}
if((a!=1)&&(a!=2)&&(a!=3))
{
clrscr();
title();
cout<<"\n\nMake A Correct Choice.";
goto repo;
}
getch();
}
void title()
{
for(int i=0;i<80;i++)
cout<<"*";
cout<<"\t\t\tSMILES FOR MILES TICKET BOOKING\n";
for(i=0;i<80;i++)
cout<<"*";
cout<<"Regd.2001\t\t\t\t\t\t\t  BON VOYAGE :)";
cout<<"\t\t\t\t Travel Beyond Imagination....";
}
void details()
{
long long int phone;
char name[40],add[50],email[100];
cout<<"\n\nWelcome Dear Customer!";
cout<<"\n\nEnter Your Name: ";
cin.getline(name,40);
cout<<"\nEnter Your Address: ";
cin.getline(add,50);
cout<<"\nEnter Your Email ID: ";
cin.getline(email,100);
cout<<"\nEnter Your Phone Number: ";
cin>>phone;
}
int choice()
{
int num;
cout<<"\n\nWhat Would You Like To Do?";
cout<<"\n\n(1) Book Movie Tickets\n(2) Book Railway Tickets";
cout<<"\n(3) Book Airways Tickets";
cout<<"\n\nWhat is Your Choice: ";
cin>>num;
processing();
return(num);
}
void processing()
{
cout<<"\n\nProcessing....";
for(double i=0;i<3000000;i++);
}
void airways()
{
clrscr();
title();
char date1[20],date2[20],ch,answer,destination[40];
int num,price,count;
cout<<"\n\nEnter Your Destination : ";
gets(destination);
cout<<"\nEnter Departure Date (DD/MM/YYYY): ";
cin>>ch;
cin.getline(date1,20);
cout<<"\nEnter Return Date (DD/MM/YYYY): ";
cin.getline(date2,20);
cout<<"\nEnter The Number Of Tickets You Would Like To Book: ";
cin>>count;
cout<<endl;
ifstream fin5;
fin5.open("PROJECT5.TXT");
while(fin5)
{
fin5.get(ch);
cout<<ch;
}
fin5.close();
cout<<"\n\nIn Which Flight Would You Like To Travel : ";
cin>>num;
processing();
clrscr();
title();
cout<<endl<<endl;
none:
for(int i=0;i<80;i++)
cout<<"-";
cout<<"\t\t\t\t   INVOICE\n";
for(i=0;i<80;i++)
cout<<"-";
cout<<"Date: 13th January 2019 \tInvoice Number: A256\t\t Time: 10:27 AM";
cout<<"\n\nDestination : "<<destination;
switch(num)
{
case 1: cout<<"\nAirlines : Spicejet";
	price=5299;
	break;
case 2: cout<<"\nAirlines : Indigo";
	price=3299;
	break;
case 3: cout<<"\nAirlines : Air India";
	price=2299;
	break;
case 4: cout<<"\nAirlines : Go Air";
	price=1299;
	break;
default:cout<<"\nAirlines : RANDOM";
	price=7299;
}
cout<<endl;
for(i=0;i<80;i++)
cout<<"-";
cout<<"  Description\t\t\t\t\t\t\t  Charges\n";
for(i=0;i<80;i++)
cout<<"-";
cout<<"Base Fare per Traveller\t\t\t\t\t\tRs "<<price<<".00";
cout<<"\nTaxes per Traveller\t\t\t\t\t\tRs 350.00";
cout<<"\nTotal Number of Travellers\t\t\t\t\t     "<<count<<endl;
for(i=0;i<80;i++)
cout<<"-";
double total=count*(price+350);
cout<<"Grand Total\t\t\t\t\t\t\tRs "<<total<<".00"<<endl;
for(i=0;i<80;i++)
cout<<"-";
cout<<"\nWould You Like To Continue (Y/N): ";
cin>>answer;
if((answer=='Y')||(answer=='y'))
{
processing();
clrscr();
title();
cout<<"\n\n\nThank You For Availing Our Services.";
cout<<"\n\nYour Flight Bookings Have Been Confirmed.";
cout<<"\n\nPlease Collect Your Tickets From Our Head Office";
cout<<" After Depositing The Necessary Fee.";
}
else if((answer=='N')||(answer=='n'))
{
processing();
clrscr();
title();
cout<<"\n\nSorry We Could'nt Help You With Your Purchase.";
}
else
{
processing();
clrscr();
title();
cout<<"\n\nMake A Correct Choice.\n";
goto none;
}
}
void railways()
{
clrscr();
title();
char date1[20],date2[20],ch,answer,destination[40];
int num,price,count;
cout<<"\n\nEnter Your Destination : ";
gets(destination);
cout<<"\nEnter Departure Date (DD/MM/YYYY): ";
cin>>ch;
cin.getline(date1,20);
cout<<"\nEnter Return Date (DD/MM/YYYY): ";
cin.getline(date2,20);
cout<<"\nEnter The Number Of Tickets You Would Like To Book: ";
cin>>count;
cout<<endl;
ifstream fin4;
fin4.open("PROJECT4.TXT");
while(fin4)
{
fin4.get(ch);
cout<<ch;
}
fin4.close();
cout<<"\n\nIn Which Class Would You Like To Travel : ";
cin>>num;
processing();
clrscr();
title();
cout<<endl<<endl;
none:
for(int i=0;i<80;i++)
cout<<"-";
cout<<"\t\t\t\t   INVOICE\n";
for(i=0;i<80;i++)
cout<<"-";
cout<<"Date: 13th January 2019 \tInvoice Number: R256\t\t Time: 10:27 AM";
cout<<"\n\nDestination : "<<destination;
switch(num)
{
case 1: cout<<"\nClass : AC First Class";
	price=5299;
	break;
case 2: cout<<"\nClass : First Class";
	price=3299;
	break;
case 3: cout<<"\nClass : AC Chair Car";
	price=2299;
	break;
case 4: cout<<"\nClass : Sleeper";
	price=1299;
	break;
default:cout<<"\nClass : RANDOM";
	price=7299;
}
cout<<endl;
for(i=0;i<80;i++)
cout<<"-";
cout<<"  Description\t\t\t\t\t\t\t  Charges\n";
for(i=0;i<80;i++)
cout<<"-";
cout<<"Base Fare per Traveller\t\t\t\t\t\tRs "<<price<<".00";
cout<<"\nTaxes per Traveller\t\t\t\t\t\tRs 350.00";
cout<<"\nTotal Number of Travellers\t\t\t\t\t     "<<count<<endl;
for(i=0;i<80;i++)
cout<<"-";
double total=count*(price+350);
cout<<"Grand Total\t\t\t\t\t\t\tRs "<<total<<".00"<<endl;
for(i=0;i<80;i++)
cout<<"-";
cout<<"\nWould You Like To Continue (Y/N): ";
cin>>answer;
if((answer=='Y')||(answer=='y'))
{
processing();
clrscr();
title();
cout<<"\n\n\nThank You For Availing Our Services.";
cout<<"\n\nYour Railway Bookings Have Been Confirmed.";
cout<<"\n\nPlease Collect Your Tickets From Our Head Office";
cout<<" After Depositing The Necessary Fee.";
}
else if((answer=='N')||(answer=='n'))
{
processing();
clrscr();
title();
cout<<"\n\nSorry We Could'nt Help You With Your Purchase.";
}
else
{
processing();
clrscr();
title();
cout<<"\n\nMake A Correct Choice.\n";
goto none;
}
}
void movie()
{
char ch,answer;
int num,ticket,tim,seat,p;
clrscr();
title();
crack:
cout<<"\n\n";
ifstream fin1;
fin1.open("PROJECT1.TXT");
while(fin1)
{
fin1.get(ch);
cout<<ch;
}
fin1.close();
cout<<"\nWhich Movie Would You Like To Book Tickets For: ";
cin>>num;
processing();
if(!((num>0)&&(num<7)))
{
clrscr();
title();
cout<<"\n\nMake A Correct Choice.";
goto crack;
}
clrscr();
title();
cout<<"\n\nEnter Number of Tickets : ";
cin>>ticket;
cout<<"\n";
ifstream fin2;
fin2.open("PROJECT2.TXT");
while(fin2)
{
fin2.get(ch);
cout<<ch;
}
fin2.close();
cout<<"\n\nWhich Show Timing Would You Like To Choose : ";
cin>>tim;
cout<<"\n";
ifstream fin3;
fin3.open("PROJECT3.TXT");
while(fin3)
{
fin3.get(ch);
cout<<ch;
}
fin3.close();
cout<<"\n\nWhich Seat Would you Like To Choose : ";
cin>>seat;
processing();
clrscr();
title();
cout<<endl<<endl;
none:
for(int i=0;i<80;i++)
cout<<"-";
cout<<"\t\t\t\t   INVOICE\n";
for(i=0;i<80;i++)
cout<<"-";
cout<<"Date: 13th January 2019 \tInvoice Number: M256\t\t Time: 10:27 AM";
cout<<"\n";
switch(num)
{
case 1: cout<<"\nMovie Name : SUI DHAAGA-MADE IN INDIA";
	break;
case 2: cout<<"\nMovie Name : AVENGERS INFINITY WAR";
	break;
case 3: cout<<"\nMovie Name : STREE";
	break;
case 4: cout<<"\nMovie Name : VENOM";
	break;
case 5: cout<<"\nMovie Name : THE NUN";
	break;
case 6: cout<<"\nMovie Name : BATTI GUL METER CHALU";
	break;
}
switch(tim)
{
case 1: cout<<"\nShow Timings : 9:30 AM TO 12:30 PM";
	break;
case 2: cout<<"\nShow Timings : 1:30 PM TO 4:30 PM";
	break;
case 3: cout<<"\nShow Timings : 6:00 PM TO 9:00 PM";
	break;
case 4: cout<<"\nShow Timings : 10:00 PM TO 1:00 AM";
	break;
default:cout<<"\nShow Timings : RANDOM";
}
switch(seat)
{
case 1: cout<<"\nSeat : BALCONY\n";
	p=550;
	break;
case 2: cout<<"\nSeat : GOLD\n";
	p=330;
	break;
case 3: cout<<"\nSeat : SILVER\n";
	p=225;
	break;
case 4: cout<<"\nSeat : PREMIERE\n";
	p=110;
	break;
default:cout<<"\nSeat : RANDOM";
	p=999;
}
for(i=0;i<80;i++)
cout<<"-";
cout<<"  Description\t\t\t\t\t\t\t  Charges\n";
for(i=0;i<80;i++)
cout<<"-";
cout<<"  Number of Tickets\t\t\t\t\t\t    "<<ticket;
cout<<"\n  Charges per Seat\t\t\t\t\t\t Rs ";
cout<<p<<".00\n  Taxes per Seat\t\t\t\t\t\t Rs 99.00\n";
for(i=0;i<80;i++)
cout<<"-";
double total=ticket*(p+99);
cout<<"  Grand Total\t\t\t\t\t\t\t Rs "<<total<<".00"<<endl;
for(i=0;i<80;i++)
cout<<"-";
cout<<"\nWould You Like To Continue (Y/N): ";
cin>>answer;
if((answer=='Y')||(answer=='y'))
{
processing();
clrscr();
title();
cout<<"\n\n\nThank You For Availing Our Services.";
cout<<"\n\nYour Movie Tickets Booking Has Been Confirmed.";
cout<<"\n\nPlease Collect Your Tickets From Our Head Office";
cout<<" After Depositing The \nNecessary Fee.";
}
else if((answer=='N')||(answer=='n'))
{
processing();
clrscr();
title();
cout<<"\n\nSorry We Could'nt Help You With Your Purchase.";
}
else
{
processing();
clrscr();
title();
cout<<"\n\nMake A Correct Choice.\n";
goto none;
}
}